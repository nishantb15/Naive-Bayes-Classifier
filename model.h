//
// Created by nisha on 3/12/2018.
//

#ifndef NAIVEBAYES_MODEL_H
#define NAIVEBAYES_MODEL_H

#include <vector>

class Model {
private:
    const int numClasses = 10;
    vector<double> probabilities_;

public:
    Model(TrainingData trainingData);
    void checkInput(string input);
    void loadModel();
    void saveModel();
    void initializeProbabilities(TrainingData trainingData);
    vector<double> getProbabilities();
    void setProbabilities(int index, double value);
    double calculateLogProbability(TrainingData trainingData, int number, int index);
    void calculateClassNumber();
};
    std::ostream & operator<<(std::ostream& output_stream, const std::vector<double> &probabilities);
    std::istream & operator>>(std::istream& input_stream, vector<double> &probabilities);
#endif //NAIVEBAYES_MODEL_H