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
        String w("Kent State University");

        assert(w[0] == 'K');
        assert(w[7] == 'a');

        w[7] = 'G';
        assert(w[7] == 'G');
    }
    {
        // ======= TEST =======
		//
        // TODO: add some more test cases
    }

    std::cout << " PASSED!\n\n";
    return 0;
}