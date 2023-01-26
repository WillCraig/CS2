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
        // less than
        String a("a");
        String b("b");

        assert(a < b);
    }
    {
        // ======= TEST =======
        //
        // less than
        String a("Kent");
        String b("State");

        assert(a < b);
    }
    {
        // ======= TEST =======
        //
        // less than
        String a("BGSU");
        String b("Z");

        assert(a < b);
    }
    {
        // ======= TEST =======
        //
        // less than
        String a("a");
        String b("A");

        assert(b < a);
    }
    {
        // ======= TEST =======
        //
        // less than
        String a("ab");
        String b("d");

        assert(a < b);
    }
    {
        // ======= TEST =======
        //
        // greater than
        String a("d");
        String b("ab");

        assert(a > b);
    }
    {
        // ======= TEST =======
        //
        // greater than
        String a("This");
        String b("Self");

        assert(a > b);
    }
    {
        // ======= TEST =======
        //
        // greater than
        String a("some");
        String b("more");

        assert(a > b);
    }
    {
        // ======= TEST =======
        //
        // greater than
        String a("This is a lot sentence");
        String b("This is even longer but who knows");

        assert(b > a);
    }
    {
        // ======= TEST =======
        //
        // greater than
        String a("maybe");
        String b("perahps");

        assert(b > a);
    }
    {
        // ======= TEST =======
        //
        // less equals
        String a("a");
        String b("a");

        assert(a <= b);
    }
    {
        // ======= TEST =======
        //
        // less equals
        String a("a");
        String b("d");

        assert(a <= b);
    }
    {
        // ======= TEST =======
        //
        // less equals
        String a("State");
        String b("State");

        assert(a <= b);
    }
    {
        // ======= TEST =======
        //
        // less equals
        String a("some");
        String b("Thing");

        assert(b <= a);
    }
    {
        // ======= TEST =======
        //
        // less equals
        String a("less");
        String b("lessEquals");

        assert(a <= b);
    }
    {
        // ======= TEST =======
        //
        // greater equals
        String a("GREATER");
        String b("greater");

        assert(b >= a);
    }
    {
        // ======= TEST =======
        //
        // greater equals
        String a("GREATER");
        String b("GREATER");

        assert(a >= b);
    }
    {
        // ======= TEST =======
        //
        // greater equals
        String a("d");
        String b("ad");

        assert(a >= b);
    }
    {
        // ======= TEST =======
        //
        // greater equals
        String a("Kent");
        String b("Bowling");

        assert(a >= b);
    }
    {
        // ======= TEST =======
        //
        // greater equals
        String a("c");
        String b("C");

        assert(a >= b);
    }
    std::cout << " PASSED!\n\n";
    return 0;
}
