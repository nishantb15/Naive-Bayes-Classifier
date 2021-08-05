//
// Created by nisha on 3/12/2018.
//

#include "trainingdata.h"
#include <vector>
#include <sstream>

using namespace std;

TrainingData::TrainingData() {

}
/**
 * initializes the vector of image features with the image content
 * @param fileName name of the file of images
 */
void TrainingData::initialize_image_features(string fileName) {

    // open the file
    ifstream file;
    file.open(fileName);

    // check for bad file
    if (file.bad()) {
        cout << "bad file." << endl;
        return;
    }

    string line;
    if (file.is_open()) {
        int sum = 0;
        vector<bool> features(0, 0);

        while(!file.eof()) {

            // get the next line
            getline(file, line);

            // check to see if character is white or black
            for (int i = 0; i < line.length(); i++) {
                if (line[i] == '#' || line[i] == '+') {
                    features.push_back(true);
                } else {
                    features.push_back(false);
                }
            }

            //std::cout << "SIZE OF FEATURE: " << features.size() << std::endl;
            // check if max number of features for one image has been read
            if (features.size() >= maxPixels) {
                image_features_.push_back(features);
                // reset feature vector
                features.clear();
            }
        }

        file.close();
    } else {
        std::cout << "File is not open" << std::endl;
        return;
    }

    std::cout << "Features have been initialized." << std::endl;
    std::cout << "Features length: " << image_features_.size() << std::endl;
}

/**
 * initializes the labels vector with the file contents
 * @param fileName the name of the file to be opened
 */
void TrainingData::initialize_labels(string fileName) {
    // open the file
    ifstream file;
    file.open(fileName);

    // check for bad file
    if (file.bad()) {
        cout << "bad file." << endl;
        return;
    }

    string line;
    if (file.is_open()) {
        getline(file, line);
        while (!file.eof()) {
            stringstream label(line);
            int labelNum = 0;
            label >> labelNum;
            labels_.push_back(labelNum);
            getline(file, line);
        }
        file.close();
    } else {
        std::cout << "File is not open" << std::endl;
    }

    std::cout << "Labels have been initialized." << std::endl;
    std::cout << "Labels length: " << labels_.size() << std::endl;
}

/**
 * calculates the probability that pixel has a value of 1 given a class number
 * @param pixelIndex the index at which to find the pixel (between 0-783)
 * @param number the given class number
 * @return the conditional probability that this pixel is 1 given a class
 */
double TrainingData::calculateConditionalProbability(int pixelIndex, bool pixelValue, int number) {
    // how many times the number occurs in the labels
    double numberFrequency = 0;
    vector<bool> pixels;

    for (int i = 0; i < labels_.size(); i++) {
        if (labels_[i] == number) {
            // increment frequency if label contains the number
            numberFrequency++;

            // get the value of that pixel at that index
            pixels.push_back(image_features_[i][pixelIndex]);
        }
    }

    // find the number of values in pixels that equals pixelValue
    double sumTrue = 0;
    for (int i = 0; i < pixels.size(); i++) {
        if (pixels[i] == pixelValue) {
            sumTrue++;
        }
    }

    return (laplaceConstant + sumTrue) / ((2 * laplaceConstant) + numberFrequency);
}

/**
 * returns the probability of the class occurring in labels
 * @param number the class number
 * @return the probability of class appearing in labels
 */
double TrainingData::calculateClassProbability(int number) {
    double numberFrequency = 0;

    for (int i = 0; i < labels_.size(); i++) {
        if (labels_[i] == number) {
            // increment frequency if label contains the number
            numberFrequency++;
        }
    }

    return numberFrequency / labels_.size();
}

vector<vector<bool>> TrainingData::getImageFeatures() {
    return image_features_;
}

vector<int> TrainingData::getLabels() {
    return labels_;
}