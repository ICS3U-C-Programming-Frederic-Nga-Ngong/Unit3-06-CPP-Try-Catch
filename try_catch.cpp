// Copyright (c) Year Fred All rights reserved.
// .
// Created by: Fred
// Date: Feb 18 2008
// Determines if a number is the correct guess

#include <iostream>
#include <string>
int main() {
    std::string number_str;
    int number_int;
    int RandomNumber;

    // initialize random seed

    srand((unsigned)time(NULL));

    // generate a random number between 1 and 100

    RandomNumber = rand() % 10 + 1;

    // get the number from the user
    std::cout << "Enter any number between 0 and 10\n";
    std::cin >> number_str;
    try {
        // Verifies if number entered by user is an integer
        number_int = std::stoi(number_str);

        // Determine if the number is correct
        if (number_int == RandomNumber) {
            std::cout << number_int << " is correct\n";
        }

        // Determine if the number is wrong
        if (number_int != RandomNumber) {
            std::cout << number_int << " is not correct. ";
            std::cout << "The correct guess was " << RandomNumber;
        }

        // If the number is not an integer, then tell the user.
    } catch (std::invalid_argument) {
        std::cout << " Sorry," << number_str << " is not a number\n";
    }

    // Not matter what happens, at least thank the user for using the code
    std::cout << "\nThanks for playing";
}
