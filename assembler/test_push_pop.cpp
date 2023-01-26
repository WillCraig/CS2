//|=======================|
//|     William Craig     |
//| assembler - project 3 |
//|  CS 23001 Fall 2021   |
//|=======================|

//  Tests: push() and pop() methods
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

        // TEST
        x.push(7);
        x.push(9);
        x.push(3);

        // VERIFY
        assert(x.top() == 3);

        // TEST
        int remove = x.pop();

        // VERIFY
        assert(x.top() == 9);
        assert(remove == 3);

        // TEST
        int remove2 = x.pop();

        // VERIFY
        assert(x.top() == 7);
        assert(remove2 == 9);
        assert(remove == 3);

        // TEST
        x.pop();
        assert(x.empty());
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE - char
        stack<char> x;

        // TEST
        x.push('k');
        x.push('s');
        x.push('u');

        // VERIFY
        assert(x.top() == 'u');

        // TEST
        char remove = x.pop();

        // VERIFY
        assert(x.top() == 's');
        assert(remove == 'u');

        // TEST
        char remove2 = x.pop();

        // VERIFY
        assert(x.top() == 'k');
        assert(remove2 == 's');
        assert(remove == 'u');

        // TEST
        x.pop();
        assert(x.empty());
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE - String
        stack<String> x;

        // TEST
        x.push("Kent");
        x.push("State");
        x.push("University");

        // VERIFY
        assert(x.top() == "University");

        // TEST
        String remove = x.pop();

        // VERIFY
        assert(x.top() == "State");
        assert(remove == "University");

        // TEST
        String remove2 = x.pop();

        // VERIFY
        assert(x.top() == "Kent");
        assert(remove2 == "State");
        assert(remove == "University");

        // TEST
        x.pop();
        assert(x.empty());
    }

    std::cout << "Done testing " << __FILE__ << "." << std::endl;
    return 0;
}
