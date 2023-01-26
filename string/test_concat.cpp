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
        String a("Hello ");
        String b("world");
        String result;

        // + test
        result = a + b;
        //result = a + "World";



        assert(a == "Hello ");
        assert(b == "world");
        assert(result == "Hello world");

        // += test
        result += ", how are you?";
        assert(result == "Hello world, how are you?");
        //------------------------------------------------------
    }
    {
        // ======= TEST =======
        //
        String left("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa");
        String right("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa");

        String result = left + right;

        assert(result == "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa");
    }

    std::cout << " PASSED!\n\n";
    return 0;
}