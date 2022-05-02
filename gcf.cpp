// Copyright (c) 2022 Sarah  All rights reserved.
//
// Created by: Sarah
// Created on: May 1st, 2022.
// This program asks the user to enter two positive numbers. It then calculates
// the gcf of those two numbers using a for loop. It also asks the user if
// they would like to play again.
#include <iostream>
#include <iomanip>
#include <string>



int askAgain() {
    // Funcition that makes it so user can play again.
    std::string askToPlay;
    std::cout << "Would you like to play again (y/n): ";
    std::cin >> askToPlay;
    if (askToPlay == "y" || askToPlay == "Y") {
        // declare variables & strings.
        int counter;
        int userNum;
        int userNum2;
        int gcf;
        std::string userNumString;
        std::string userNum2String;

        // get usernum as string.
        std::cout << "Today, we will be finding the GCF of two numbers.\n";
        std::cout << std::endl;
        std::cout << "Enter the first whole number: ";
        std::cin >> userNumString;
        std::cout << "Enter the second whole number: ";
        std::cin >> userNum2String;

        try {
            // convert userNum to integer
            userNum = std::stoi(userNumString);

            try {
                // convert userNum2 to integer
                userNum2 = std::stoi(userNum2String);

                // sets a range.
                if (userNum > 0) {
                    if (userNum2 >= 0) {
                        // calculate the gcf of the two numbers user entered &
                        // then it displays it.
                        for (counter = 1; counter <= userNum2; ++counter) {
                            if (userNum % counter == 0
                                && userNum2 % counter == 0) {
                                gcf = counter;
                            }
                        }
                        std::cout << "The GCF of " << userNum << " and ";
                        std::cout << userNum2 << " is " << gcf << ".\n";
                        std::cout << std::endl;
                        askAgain();

                        return 0;
                    } else {
                        std::cout << "Please enter a whole number.";
                        std::cout << "" << std::endl;
                    }
                } else {
                    std::cout << "Please enter a whole number.";
                    std::cout << "" << std::endl;
                }

                // handles error case.
            } catch (std::invalid_argument) {
                std::cout << userNum2String << " is not a valid number.\n";
                std::cout << "" << std::endl;
            }
            // handles the error case.
        } catch (std::invalid_argument) {
            // The user did not enter an integer.
            std::cout << userNumString << " is not a valid number.\n";
            std::cout << "" << std::endl;
    }
    askAgain();
    } else if (askToPlay == "n" || askToPlay == "N") {
        std::cout << "Thanks for playing! \n";
    } else {
      std::cout << "Please enter either or being (y/n). \n";
      askAgain();
    }
}



int main() {
    // declare variables & strings
    int counter;
    int gcf;
    int userNum2;
    int userNum;
    std::string userNumString;
    std::string userNum2String;

    // get the user number as a string
    std::cout << "Today, we will be finding the GCF of two numbers.\n";
    std::cout << std::endl;
    std::cout << "Enter the first whole number: ";
    std::cin >> userNumString;
    std::cout << "Enter the second whole number: ";
    std::cin >> userNum2String;

    try {
        // convert userNum entered to integer
        userNum = std::stoi(userNumString);

        try {
            // converts userNum2 into an integer
            userNum2 = std::stoi(userNum2String);

            // sets a range.
            if (userNum > 0) {
                if (userNum2 >= 0) {
                // calculate the gcf of the two numbers user entered & then it
                // displays it.
                    for (counter = 1; counter <= userNum2; ++counter) {
                        if (userNum % counter == 0
                            && userNum2 % counter == 0) {
                            gcf = counter;
                        }
                    }
                    std::cout << "The GCF of " << userNum << " and ";
                    std::cout << userNum2 << " is " << gcf << ".\n";
                    std::cout << std::endl;
                    askAgain();

                    return 0;
                } else {
                    std::cout << "Please enter a whole number.";
                    std::cout << "" << std::endl;
                }
            } else {
                std::cout << "Please enter a whole number.";
                std::cout << "" << std::endl;
            }

        // handles error case.
        } catch (std::invalid_argument) {
          std::cout << userNum2String << " is not a valid number.\n";
          std::cout << "" << std::endl;
          }
        // handles the error case.
    } catch (std::invalid_argument) {
      // The user did not enter an integer.
      std::cout << userNumString << " is not a valid number.\n";
      std::cout << "" << std::endl;
      }
    askAgain();
}
