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
        // Constructor char test
        String w('w'); 

        assert(w == 'w');
    }
    {
        // ======= TEST =======
        //
        String c('s');

        assert(c == "s");
    }
    {
        String empty("\0");

        assert(empty.capacity() == 0);
        assert(empty == "");
    }

    std::cout << " PASSED!\n\n";
    return 0;
}
