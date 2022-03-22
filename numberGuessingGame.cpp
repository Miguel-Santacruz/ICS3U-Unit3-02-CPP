// Copyright (c) 2022 Miguel Santacruz All rights reserved
//
// Created by: Miguel Santacruz
// Created on: March 2022
// This program is a number guessing game

#include <iostream>

int main() {
    // This function is a number guessing game

    const int rightNumber = 7;
    int number;

    // Input
    std::cout << "Enter number between 0 - 9: ";
    std::cin >> number;
    std::cout << "" << std::endl;

    // process & output
    if (number == rightNumber) {
        std::cout << "You guessed right!";
    }
    if (number != rightNumber) {
        std::cout << "You guessed wrong!";
    }
}
