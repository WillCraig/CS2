//|=======================|
//|     William Craig     |
//| assembler - project 3 |
//|  CS 23001 Fall 2021   |
//|=======================|

#include <iostream>
#include <fstream>
#include "string.hpp"
#include "utilities.hpp"
#include "stack.hpp"

// TODO: all you really have to do is figure out how to get the testing part done.
// Testing:
// Create a data set that properly tests the conversion algorithm.
// Create unit tests for these.
// Your program should work for the data3-1.txt data file in the shared directory.
// make tests should build and run all tests.
// Commit all your work and files to svn - as you go.
// TODO: test the different argument variations
// TODO: make sure that the output is supposed to be without spaces and such
// TODO: run valgrind on this program to make sure everything is air tight
// TODO: give the document a final runthrough to make sure everything is air tight and all of the files have their tests and comments.
// TODO: make sure your name is on all of the files.
// TODO: run the document formatter on this code, utilities.cpp and utilities.hpp

int main(int argc, char *argv[])
{
    // read in a fully parenthesized function and convert to infix

    stack<String> infix; // store infix expression after being read in
    String result;       // store resulting postfix expresion
    String token;        // store individual character/token read in from file

    if (argc == 3)
    {
        std::ofstream out(argv[2]); // has output, define outstream;
        std::ifstream in(argv[1]);  // define input file stream

        // ensure the file can be opened
        if (!in)
        {
            // file could not be opened
            std::cerr << "Could not open" << argv[1] << ", exiting." << std::endl;
            exit(1);
        }
        else
        {
            // file successfully opened
            // add the expression terminator to (what will be) the end of the infix stack since string skips over that character
            infix.push(";");

            // This will loop until the end of the file
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
                    stack<String> after;
                    after.push(";");
                    while (!infix.empty())
                    {
                        after.push(infix.pop());
                    }
                    after.pop(); // remove the extra semicolon added by end of infix reversal

                    // run the postfix conversion function
                    result = postfix(after);

                    // output the results to console.
                    out << result << std::endl;

                    // skip over the next token which will be an empty string
                    in >> token;
                }
            }
        }
        in.close();
        out.close();
    }
    else if (argc == 2)
    {
        std::ifstream in(argv[1]); // define input file stream

        // ensure the file can be opened
        if (!in)
        {
            // file could not be opened
            std::cerr << "Could not open" << argv[1] << ", exiting." << std::endl;
            exit(1);
        }
        else
        {
            // file successfully opened
            // add the expression terminator to (what will be) the end of the infix stack since string skips over that character
            infix.push(";");

            // This will loop until the end of the file
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
                    stack<String> after;
                    after.push(";");
                    while (!infix.empty())
                    {
                        after.push(infix.pop());
                    }
                    after.pop(); // remove the extra semicolon added by end of infix reversal

                    // run the postfix conversion function
                    result = postfix(after);

                    // output the results to console.
                    std::cout << result << std::endl;

                    // skip over the next token which will be an empty string
                    in >> token;
                }
            }
        }
        in.close();
    }
    else
    {
        // error not the right number of arguments.
        std::cout << "(Required *optional): inputFile.txt *outputFile.txt" << std::endl;
    }

    return 0;
}