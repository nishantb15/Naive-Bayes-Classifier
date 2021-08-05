//
// Created by nisha on 3/12/2018.
//

#ifndef NAIVEBAYES_TRAININGDATA_H
#define NAIVEBAYES_TRAININGDATA_H

#include <vector>

using namespace std;

class TrainingData {
private:
    const static int maxPixels = 784;
    const double laplaceConstant = 0.5;

    vector<vector<bool>> image_features_;
    vector<int> labels_;
public:
    TrainingData();
    void initialize_image_features(string fileName);
    void initialize_labels(string fileName);
    vector<vector<bool>> getImageFeatures();
    vector<int> getLabels();
    double calculateConditionalProbability(int pixelIndex, bool pixelValue, int number);
    double calculateClassProbability(int number);
};

#endif //NAIVEBAYES_TRAININGDATA_H