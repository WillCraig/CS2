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

		String result = w.substr(2, 7);

		assert(result == "nt Sta");
	}
	{
		// ======= TEST =======
		//
		String w("Hello");

		String result = w.substr(0, w.length());

		assert(w == result);
	}
	{
		// ======= TEST =======
		//
		String w("I can't think of any more content to put in these test cases for String");
		
		String sub = w.substr(8,12);

		assert(sub == "think");
	}

    std::cout << " PASSED!\n\n";
	return 0;
}
