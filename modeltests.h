//
// Created by nisha on 3/13/2018.
//

#ifndef NAIVEBAYES_MODELTESTS_H
#define NAIVEBAYES_MODELTESTS_H

#endif //NAIVEBAYES_MODELTESTS_H

#include "catch.hpp"
#include "trainingdata.cpp"
#include "model.cpp"

TEST_CASE() {
    const string fileName = "../data/testimages";
    const string labelName = "../data/testlabels";

    TrainingData trainingData;
    Model model(trainingData);

    SECTION("Initialize Probabilities");
    SECTION("Set Probabilities");
    SECTION("Calculate Log Probability");
}
