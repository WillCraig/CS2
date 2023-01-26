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

        assert(w.length() == 21);
        assert(w.capacity() == 21);
    }
    {
        // ======= TEST =======
        //
        String w("Kent State University");

        w = "VVVV";

        //std::cout << w.length() << std::endl;

        assert(w.length() == 4);
        assert(w.capacity() == 4);
    }

    std::cout << " PASSED!\n\n";
    return 0;
}
