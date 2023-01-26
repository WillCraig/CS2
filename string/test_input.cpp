/**
 * William Craig
 * string - project 2
 * CS 23001 
 */

#include <iostream>
#include <cassert>
#include <fstream>

#include "string.hpp"

int main()
{
    std::cout << __FILE__ << ": All tests... ";
    {
        // ======= TEST =======
        //
        std::ifstream in("log_1_tiny.txt");    // Define stream for input
        if(!in) {                           // Make sure it opened correctly.
            std::cerr << "Could not open log_1_tiny.txt, exiting." << std::endl;
            exit(1);
        }
        else {
            String w;
            String y;

            in >> w;

            in >> y;

            assert(w == "131.123.47.176");
            assert(y == '-');




        }
    }

    std::cout << " PASSED!\n\n";
    return 0;
}