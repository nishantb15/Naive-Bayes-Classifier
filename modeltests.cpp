//
// Created by nisha on 3/13/2018.
//
#include "modeltests.h"

TEST_CASE() {
    const string fileName = "../data/testimages";
    const string labelName = "../data/testlabels";

    TrainingData trainingData;
    trainingData.initialize_image_features(fileName);
    trainingData.initialize_labels(labelName);

    Model model(trainingData);

    SECTION("Initialize Probabilities") {
        model.initializeProbabilities(trainingData);
        REQUIRE(model.getProbabilities() != nullptr);
    }

    SECTION("Set Probabilities") {
        model.setProbabilities(0, 0.5);
        REQUIRE(model.getProbabilities()[0] == 0.5);
    }

    SECTION("Calculate Log Probability") {
        double probability = model.calculateLogProbability(trainingData, 0);
        REQUIRE(probability == -104.0);
    }
}
