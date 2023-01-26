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
		String w("Kent State University");

		int result = w.findstr(0, "Kent");

		assert(result == 0);
	}
	{
		// ======= TEST =======
        //
		String w("Kent State University");

		int result = w.findstr(0, "State");

		assert(result == 5);
	}
	{
		// ======= TEST =======
        //
		String w("Kent State University");

		int result = w.findstr(3, "State");

		assert(result == 5);
	}
	{
		// ======= TEST =======
        //
		String w("Kent State University");

		int result = w.findstr(0, "Hello");

		assert(result == -1);
	}
	{
		String p("The negation of alpha");
		
		int result = p.findstr(0, "T");

		assert(result == 0);
	}

    std::cout << " PASSED!\n\n";
	return 0;
}
