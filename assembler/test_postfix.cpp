//|=======================|
//|     William Craig     |
//| assembler - project 3 |
//|  CS 23001 Fall 2021   |
//|=======================|

#include <iostream>
#include <fstream>
#include <cassert>
#include "string.hpp"
#include "utilities.hpp"
#include "stack.hpp"

int main()
{

	// THIS IS A LIST OF THE ANSWERS
	String answers[50] = {
		"A B + C * D -",
		"A B - B A - *",
		"A B + C D * E * + F - G +",
		"AB BC + CD DE / +",
		"A B C D / + *",
		"A B C + +",
		"2 3 + 2 3 2 - + - 8 * 7 -",
		"2 3 + 2 - 3 - 4 - 5 - 6 - 7 -",
		"2 3 + 2 3 + 3 - - 8 * 9 * 9 *",
		"2 3 + 4 6 * 6 * + 4 - 7 +",
		"2 7 + 5 2 - *",
		"1 2 3 + 4 5 * * +",
		"9 3 + 8 2 - /"};

	stack<String> after;
	stack<String> infix; // store infix expression after being read in
	String result;		 // store resulting postfix expresion
	String token;		 // store individual character/token read in from file

	// this will end up being the end of the expression
	infix.push(";");

	// Open the cusomt test file
	std::ifstream in;
	in.open("my_test_data.txt");

	// verify that the file can be opened
	assert(in);

	int exprCount = 0;

	while (in >> token)
	{
		// ensure no empty tokens are pushed to infix stack
		if (token != "")
		{
			infix.push(token);
		}
		else
		{
			// end of the expression has been found
			// pass the infix expression to postfix function

			// code to reverse the order of the expression by transferring to a new stack

			after.push(";");
			while (!infix.empty())
			{
				after.push(infix.pop());
			}
			after.pop(); // remove the extra semicolon added by end of infix reversal

			// run the postfix conversion function
			result = postfix(after);

			// output the results to console.
			//std::cout << result << std::endl;

			// This is where you are going to write the assert
			assert(result == answers[exprCount]);

			++exprCount;

			// skip over the next token which will be an empty string
			in >> token;
		}
	}

	std::cout << "Done testing " << __FILE__ << "." << std::endl;
	in.close();
	return 0;
}