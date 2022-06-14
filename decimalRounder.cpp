// Copyright (c) 2022 Jackson Naufal All rights reserved
// Created By Jackson Naufal
// Created On June 2022
// this is a decimal rounder

#include <iostream>
#include <iomanip>
#include <cmath>


float RoundedNumbers(float &userInput, float decimalPlaces) {
    // This function rounds the users number

    float userNum;

    // process
    userNum = userInput*pow(10, decimalPlaces);
    userNum = userNum + 0.5;
    userNum = static_cast<int>(userNum);
    userNum = userNum/pow(10, decimalPlaces);

    return userNum;
}

int main() {
    // this function gets the users input

    std::string userInput;
    std::string decimalPlaces;
    float roundedVal;
    float userInt;
    int numDec;

    // process & output
    std::cout << "Enter your Number!: ";
    std::cin >> userInput;

    std::cout << "Enter the amount of decimals! ";
    std::cin >> decimalPlaces;

        try {
            userInt = std::stof(userInput);
            numDec = std::stoi(decimalPlaces);
            if (userInt == std::stof(userInput) &&
                numDec == std::stoi(decimalPlaces)) {
                roundedVal = RoundedNumbers(userInt, numDec);
                std::cout << "" << std::endl;
                std::cout << "The rounded number is: "
                << roundedVal << std::endl;
                std::cout << "\nDone." << std::endl;
            } else {
                std::cout << "Invalid Input!" << std::endl;
                std::cout << "\nDone." << std::endl;
            }
        } catch (std::invalid_argument) {
            std::cout << "Invalid Input!" << std::endl;
            std::cout << "\nDone." << std::endl;
            std::cout << "" << std::endl;
        }
}
