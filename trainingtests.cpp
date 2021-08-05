//
// Created by nisha on 3/13/2018.
//
#include "catch.hpp"
#include "trainingtests.h"

TEST_CASE() {
    const string fileName = "../data/testimages";
    const string labelName = "../data/testlabels";

    TrainingData trainingData;

    SECTION("Initialize Image Features") {
        trainingData.initialize_image_features(fileName);
        REQUIRE(trainingData.getImageFeatures() != nullptr);
    }

    SECTION("Initialize labels") {
        trainingData.initialize_labels(labelName);
        REQUIRE(trainingData.getLabels() != nullptr);
    }

    SECTION("Calculate Conditional Probability") {
        double probability = trainingData.calculateConditionalProbability(1, true, 1);
        REQUIRE(probability == 0.073);
    }

    SECTION("Calculate Class Probability") {
        double probability = trainingData.calculateClassProbability(1);
        REQUIRE(probability = 0.3);
    }
}
