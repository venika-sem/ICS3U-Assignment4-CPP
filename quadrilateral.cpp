// Copyright (c) 2022 Venika Sem All rights reserved
//
// Created by: Venika Sem
// Created on: Oct 2022
// This program tells the month based on a number

#include <cmath>
#include <iostream>

int main() {
    // this function tells the month based on a number
    int sideAsNumber;

    // Input

    std::string sideAsString;
    std::cout << "Enter a number of sides: ";
    std::cin >> sideAsString;
    std::cout << std::endl;

    // process & output
    try {
        sideAsNumber = std::stoi(sideAsString);
        switch (sideAsNumber) {
            case 3:
                std::cout << "" << sideAsNumber
                << " sides is a polygon called triangle." << std::endl;
                break;
            case 4:
                std::cout << "" << sideAsNumber
                << " sides is a polygon called quadrilateral." << std::endl;
                break;
            case 5:
                std::cout << "" << sideAsNumber
                << " sides is a polygon called pentagon." << std::endl;
                break;
            case 6:
                std::cout << "" << sideAsNumber
                << " sides is a polygon called hexagon." << std::endl;
                break;
            case 7:
                std::cout << "" << sideAsNumber
                << " sides is a polygon called heptagon." << std::endl;
                break;
            case 8:
                std::cout << "" << sideAsNumber
                << " sides is a polygon called octagon." << std::endl;
                break;
            case 9:
                std::cout << "" << sideAsNumber
                << " sides is a polygon called nonagon." << std::endl;
                break;
            case 10:
                std::cout << "" << sideAsNumber
                << " sides is a polygon called decagon." << std::endl;
                break;
            default:
                std::cout << "Invalid input, not a month" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "" << sideAsString
                  << " is not a valid input." << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
