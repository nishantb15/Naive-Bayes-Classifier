//
// Created by nisha on 3/13/2018.
//

#ifndef NAIVEBAYES_TESTS_H
#define NAIVEBAYES_TESTS_H

#endif //NAIVEBAYES_TESTS_H

#include "catch.hpp"
#include "trainingdata.cpp"

TEST_CASE() {
    const string fileName = "../data/testimages";
    const string labelName = "../data/testlabels";

    TrainingData trainingData;
    SECTION("Initialize Image Features");
    SECTION("Initialize labels");
    SECTION("Calculate Conditional Probability");
    SECTION("Calculate Class Probability");
}