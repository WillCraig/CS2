/**
 * William Craig
 * string - project 2
 * CS 23001 
 */

#include <iostream>
#include <cassert>

#include "string.hpp"


int main() {
    std::cout << __FILE__ << ": All tests... ";
    {
        // ======= TEST =======
        // 
        String w("Kent State");

        String copy(w);

        assert(w == "Kent State");
        assert(w == copy);
        assert(copy == "Kent State");
    }
    {
        // ======= TEST =======
        // 
        String w("This is a much longer string, a sentence even.");

        String copy(w);

        assert(w == "This is a much longer string, a sentence even.");
        assert(w == copy);
        assert(copy == "This is a much longer string, a sentence even.");
    }

    std::cout << " PASSED!\n\n";
    return 0;
}