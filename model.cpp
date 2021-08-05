//
// Created by nishant bhushan on 3/12/2018.
//

#include "model.h"
#include <cmath>
#include <algorithm>
#include <fstream>

using namespace std;

Model::Model(TrainingData trainingData) {
    initializeProbabilities(trainingData);
}

/**
 * checks for valid input and responds according to keywords
 * @param input the input provided by the user
 */
void Model::checkInput(string input) {
    if (input == "exit" || input == "quit") {
        exit(0);
    } else if (input == "read") {
        loadModel();
    } else if (input == "save") {
        saveModel();
    } else if (input == "classify") {
        calculateClassNumber();

    } else {
        cout << "Sorry, that is not a valid input." << endl;
    }

    string newInput;
    cout << "Enter a command for the model: " << endl;
    cin >> newInput;
    checkInput(newInput);
}

/**
 * initializes the probabilities vector with the values to perform maximum a posteriori.
 * @param trainingData the training data used to extract the pixel infos
 */
void Model::initializeProbabilities(TrainingData trainingData) {
    int index = 0;
    cout << "Specify a number between 0 and 783: ";
    cin >> index;

    for (int i = 0; i < numClasses; i++) {
        // add each probability to the vector
        probabilities_.push_back((log10(trainingData.calculateClassProbability(i)) +
                                 calculateLogProbability(trainingData, i, index)));
    }
    cout << "Model data has been initialized." << endl;
}

/**
 * function set up to perform a trivial addition operation
 * @param trainingData the training data
 * @param number the class number
 * @return the sum of all the logs of probabilities
 */
double Model::calculateLogProbability(TrainingData trainingData, int number, int index) {
    double probability = 0;
    vector<bool> image = trainingData.getImageFeatures()[0];

    // find probability using the given equation
    for (int j = 0; j < image.size(); j++) {
        probability += log10(trainingData.calculateConditionalProbability(j, image[j], number));
        //cout << "PROBABILITY: " << probability << endl;
    }
    return probability;
}

/**
 * gets the class with highest posteriori probability
 * @return the class number
 */
void Model::calculateClassNumber() {
    double highestIndex = 0;

    // find the probability with highest index
    for (int i = 0; i < probabilities_.size(); i++) {
        if (i + 1 < probabilities_.size() && probabilities_[i] < probabilities_[i + 1]) {
            highestIndex = i + 1;
        }
    }

    cout << "Class Number: " << highestIndex << endl;
    return;
}

/**
 * saves the model after user specifies the file name
 */
void Model::saveModel() {
    string fileName;
    cout << "Please specify a file name to save to: ";
    cin >> fileName;
    ofstream model_file(fileName);

    if (!model_file) {
        cout << "Could not open file." << endl;
        return;
    }

    model_file << probabilities_ << endl;
    cout << fileName << " has been saved." << endl;
    model_file.close();

}

/**
 * loads a model after user specifies a file name
 */
void Model::loadModel() {
    string fileName;
    cout << "Please specify a file name to load from: ";
    cin >> fileName;
    ifstream model_file(fileName);

    if (!model_file) {
        cout << "Could not open " << fileName << endl;
    }

    vector<double> newProbabilities;
    model_file >> newProbabilities;
    probabilities_ = newProbabilities;
    cout << "Probabilities Model has been initialized with content from " << fileName << endl;
}

vector<double> Model::getProbabilities() {
    return probabilities_;
}

void Model::setProbabilities(int index, double value) {
    probabilities_[index] = value;
}

std::ostream & operator<<(std::ostream& output_stream, const std::vector<double> &probabilities) {
    for (int i = 0; i < probabilities.size(); i++) {
        output_stream << probabilities[i] << endl;
    }
    return output_stream;
}

std::istream & operator>>(std::istream& input_stream, vector<double> &probabilities) {
    double value = 0;
    while (!input_stream.eof()) {
        input_stream >> value;
        probabilities.push_back(value);
    }
}
