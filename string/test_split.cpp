/**
 * William Craig
 * string - project 2
 * CS 23001 
 */

#include <iostream>
#include <cassert>
#include <vector>
#include "string.hpp"

int main()
{
    std::cout << __FILE__ << ": All tests... ";
    {
        // ======= TEST =======
        //
        // split() test
        String a("Kent State University");

        // compare value
        std::vector<String> comp = {"Kent","State","University"};

        assert( a.split(' ') == comp );
    }
    {
        // ======= TEST =======
        //
        // split() test
        String a("Kent-State-University");

        // compare value
        std::vector<String> comp = {"Kent","State","University"};

        assert( a.split('-') == comp );
    }
    {
        // ======= TEST =======
        //
        // split() test
        String a("Kent,State,University");

        // compare value
        std::vector<String> comp = {"Kent","State","University"};

        assert( a.split(',') == comp );
    }
    {
        // ======= TEST =======
        //
        // split() test
        String a("Kent, State, University");

        // compare value
        std::vector<String> comp = {"Kent"," State"," University"};

        assert( a.split(',') == comp );
    }
    {
        // ======= TEST =======
        //
        // split() test
        String a("K,e,n,t, ,S,t,a,t,e, ,U,n,i,v,e,r,s,i,t,y");

        // compare value
        std::vector<String> comp = {"K","e","n","t"," ","S","t","a","t","e"," ","U","n","i","v","e","r","s","i","t","y"};

        assert( a.split(',') == comp );
    }
    {
        // ======= TEST =======
        //
        // split() test
        String a("-Kent-State-University-");

        // compare value
        std::vector<String> comp = {"", "Kent","State","University", ""};

        assert( a.split('-') == comp );
    }
    
    
    

    std::cout << " PASSED!\n\n";
    return 0;
}
