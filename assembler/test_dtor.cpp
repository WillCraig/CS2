//|=======================|
//|     William Craig     |
//| assembler - project 3 |
//|  CS 23001 Fall 2021   |
//|=======================|

//  Tests: destructor
//

#include "stack.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main()
{
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int> x;
        x.push(7);

        // TEST
        x.~stack();

        // VERIFY
        assert(x.empty());
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int> x;
        x.push(7);
        x.push(7);
        x.push(7);

        // TEST
        x.~stack();

        // VERIFY
        assert(x.empty());
    }

    std::cout << "Done testing " << __FILE__ << "." << std::endl;
    return 0;
}
