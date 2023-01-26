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
    // ======= TEST =======
    // TODO: enter these everywhere
    // TODO: add a few more tests for TEST_FIND_CHAR
    {
        // ======= TEST =======
        //
        String w("Kent State University");

        int result1 = w.findch(0, 'U');
        int result2 = w.findch(5, 'v');

        assert(result1 == 11);
        assert(result2 == 14);
    }
    {
        // ======= TEST =======
        //
        String w("Hello");

        assert(w.findch(0, 'g') == -1);
    }

    std::cout << " PASSED!\n\n";
    return 0;
}
