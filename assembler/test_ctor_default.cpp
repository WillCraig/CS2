//|=======================|
//|     William Craig     |
//| assembler - project 3 |
//|  CS 23001 Fall 2021   |
//|=======================|

//  Tests: default constructor
//

#include "stack.hpp"
#include "string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main()
{
    {
        //------------------------------------------------------
        // TEST DEFAULT - int

        // TEST
        stack<int> x;

        // VERIFY
        assert(x.empty());
        assert(!(x.full()));
    }
    {
        //------------------------------------------------------
        // TEST DEFAULT - char

        // TEST
        stack<char> x;

        // VERIFY
        assert(x.empty());
        assert(!(x.full()));
    }
    {
        //------------------------------------------------------
        // TEST DEFAULT - String

        // TEST
        stack<String> x;

        // VERIFY
        assert(x.empty());
        assert(!(x.full()));
    }

    std::cout << "Done testing " << __FILE__ << "." << std::endl;
    return 0;
}
