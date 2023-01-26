//|=======================|
//|     William Craig     |
//| assembler - project 3 |
//|  CS 23001 Fall 2021   |
//|=======================|

//  Tests: assignment operator
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
        stack<int> copy;

        x.push(7);
        x.push(9);

        // TEST
        copy = x;

        // VERIFY
        assert(x.top() == copy.top());
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE - int
        stack<int> x;
        stack<int> copy;

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
        copy = x;

        // VERIFY
        assert(x.top() == copy.top());
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE - int
        stack<int> x;
        stack<int> copy;

        // TEST
        copy = x;

        // VERIFY
        assert(x.empty());
        assert(copy.empty());

        assert(x.top() == copy.top());
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE - char
        stack<char> x;
        stack<char> copy;

        x.push(7);
        x.push(9);

        // TEST
        copy = x;

        // VERIFY
        assert(x.top() == copy.top());
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE - char
        stack<char> x;
        stack<char> copy;

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
        copy = x;

        // VERIFY
        assert(x.top() == copy.top());
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE - char
        stack<char> x;
        stack<char> copy;

        // TEST
        copy = x;

        // VERIFY
        assert(x.empty());
        assert(copy.empty());

        assert(x.top() == copy.top());
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE - String
        stack<String> x;
        stack<String> copy;

        x.push('7');
        x.push('9');

        // TEST
        copy = x;

        // VERIFY
        assert(x.top() == copy.top());
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE - String
        stack<String> x;
        stack<String> copy;

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
        copy = x;

        // VERIFY
        assert(x.top() == copy.top());
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE - String
        stack<String> x;
        stack<String> copy;

        // TEST
        copy = x;

        // VERIFY
        assert(x.empty());
        assert(copy.empty());

        assert(x.top() == copy.top());
    }

    std::cout << "Done testing " << __FILE__ << "." << std::endl;
    return 0;
}
