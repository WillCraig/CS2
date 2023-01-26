/**
 * William Craig
 * bigint
 * CS 23001 
 */


//==============================================================================
// Basics for opening a file for milestone 2 of Project 1.
//
#include <iostream> 
#include <fstream>
#include <cstdlib>
#include "bigint.hpp"

int main() {
    std::ifstream in("data1-1.txt");    // Define stream for input
    if(!in) {                           // Make sure it opened correctly.
        std::cerr << "Could not open data1-1.txt, exiting." << std::endl;
        exit(1);
    }
    else {
        // if the file was able to be opened successfully

        // variables to hold the numbers to be added together.
        bigint first, second;

        // while data can be read into first
        while (in >> first) {
            // read in second number
            in >> second;

            // add first and second bigint together and display the result
            std::cout << (first + second) << std::endl;
        }
    }

    in.close();
    return 0;
}

