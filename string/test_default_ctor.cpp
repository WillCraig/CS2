/**
 * William Craig
 * string - project 2
 * CS 23001 
 */

#include <iostream>
#include <cassert>
#include "string.hpp"

int main()
{
    std::cout << __FILE__ << ": All tests... ";
    {
        // ======= TEST =======
        //
        // Default constructor test
        String w;

        assert(w == "");
    }
    {
        // ======= TEST =======
        //
        // Default constructor test
        String w;

        assert(w == '\0');
    }

    std::cout << " PASSED!\n\n";
    return 0;
}
