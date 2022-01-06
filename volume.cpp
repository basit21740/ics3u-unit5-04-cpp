// Copyright (c) 2021 Abdul basit All rights reserved.
//
// Created by: Abdul basit
// Created on: Jan 2022
// This program calculates the volume of a cylinder

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>


float VolumeOfCylinder(int radius, int height) {
    // this function calculates the volume of a cylinder
    double volume;

    // process
    volume = M_PI * (radius * radius) * height;

    return volume;
}

int main() {
    // this function gets user input
    std::cout << "This program calculates the volume of a cylinder."
              << std::endl;
    std::cout << "" << std::endl;

    // variables
    std::string radiusInput;
    int radiusInt;
    std::string heightInput;
    int heightInt;
    float cylinderVolume;

    // input
    while (true) {
        try {
            std::cout << "Enter the radius (cm): ";
            std::cin >> radiusInput;
            radiusInt = std::stoi(radiusInput);
            std::cout << "Enter the height (cm): ";
            std::cin >> heightInput;
            heightInt = std::stoi(heightInput);
            std::cout << "" << std::endl;

            if (radiusInt > 0 && heightInt > 0) {
                // call function
                cylinderVolume = VolumeOfCylinder(radiusInt, heightInt);

                std::cout << "A cylinder with a radius of " << radiusInt
                          << " cm and a height of " << heightInt
                          << " cm has a volume of " << cylinderVolume
                          << " cm²." << std::endl;

                break;
            } else {
                std::cout << "Enter a positive integer for both values," <<
                             " try again." << std::endl;
            }
        } catch (std::invalid_argument) {
            std::cout << "Enter a number for both values, try again."
                      << std::endl;
        }
    }
    std::cout << "\nDone." << std::endl;
}
