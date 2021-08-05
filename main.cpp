//
// Created by nishant bhushan on 3/12/2018.
//
#include <iostream>
#include <string>
#include <fstream>
#include "trainingdata.cpp"
#include "model.cpp"

using namespace std;

int main(int argc, char** argv) {
    TrainingData images;
    printf("Type a Image file name: ");

    std::string fileName = "";

    std::getline(std::cin, fileName);
    images.initialize_image_features(fileName);

    string labelName = "";
    printf("Type a Label file name: ");
    std::getline(std::cin, labelName);
    images.initialize_labels(labelName);

    Model model(images);
    string command;
    cout << "Enter a command for the model: ";
    cin >> command;

    model.checkInput(command);
}
