//|=======================|
//|     William Craig     |
//| assembler - project 3 |
//|  CS 23001 Fall 2021   |
//|=======================|

//  Tests: copy constructor
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
        // SETUP FIXTURE - int
        stack<int> x;
        x.push(7);
        x.push(9);

        // TEST
        stack<int> copy(x);

        // VERIFY
        assert(x.top() == copy.top());
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE - int
        stack<int> x;
        x.push(7);
        x.push(9);
        x.push(7);
        x.push(9);
        x.push(7);
        x.push(9);
        x.push(7);
        x.push(9);
        x.push(7);
        x.push(9);
        x.push(7);
        x.push(9);

        // TEST
        stack<int> copy(x);

        // VERIFY
        assert(x.top() == copy.top());
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE - int
        stack<int> x;

        // TEST
        stack<int> copy(x);

        // VERIFY
        assert(x.empty());
        assert(copy.empty());

        assert(x.top() == copy.top());
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE - char
        stack<char> x;
        x.push(7);
        x.push(9);

        // TEST
        stack<char> copy(x);

        // VERIFY
        assert(x.top() == copy.top());
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE - char
        stack<char> x;
        x.push(7);
        x.push(9);
        x.push(7);
        x.push(9);
        x.push(7);
        x.push(9);
        x.push(7);
        x.push(9);
        x.push(7);
        x.push(9);
        x.push(7);
        x.push(9);

        // TEST
        stack<char> copy(x);

        // VERIFY
        assert(x.top() == copy.top());
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE - char
        stack<char> x;

        // TEST
        stack<char> copy(x);

        // VERIFY
        assert(x.empty());
        assert(copy.empty());

        assert(x.top() == copy.top());
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE - String
        stack<String> x;
        x.push('7');
        x.push('9');

        // TEST
        stack<String> copy(x);

        // VERIFY
        assert(x.top() == copy.top());
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE - String
        stack<String> x;
        x.push('7');
        x.push('9');
        x.push('7');
        x.push('9');
        x.push('7');
        x.push('9');
        x.push('7');
        x.push('9');
        x.push('7');
        x.push('9');
        x.push('7');
        x.push('9');

        // TEST
        stack<String> copy(x);

        // VERIFY
        assert(x.top() == copy.top());
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE - String
        stack<String> x;

        // TEST
        stack<String> copy(x);

        // VERIFY
        assert(x.empty());
        assert(copy.empty());

        assert(x.top() == copy.top());
    }

    std::cout << "Done testing " << __FILE__ << "." << std::endl;
    return 0;
}
