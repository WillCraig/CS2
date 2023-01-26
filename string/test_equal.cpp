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
    // TODO: add a few more TEST_EQUAL cases
    // TODO: separate these out
    {
        // ======= TEST =======
        //
        // equals test
        String w("Name");
        String c("Name");
        // String compare
        assert(w == c);

        // char[] compare
        w = "test String";
        
        // "" == test
        assert(w == "test String");

        // '' == test
        w = 'o';
        assert(w == 'o');

        /* not equal test
        String g("Kent State University");
        w = g;
        assert(w != "Bowling Green");

        // greater equal
        assert(w >= "BG");
        assert(w >= "Kent State University");*/
    }

    std::cout << " PASSED!\n\n";
    return 0;
}
