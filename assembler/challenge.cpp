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

int main(int argc, char *argv[])
{
    // read in a fully parenthesized function and convert to infix

    stack<String> infix; // store infix expression after being read in
    String result;       // store resulting postfix expresion
    String token;        // store individual character/token read in from file

    // if inputFile and outputFile
    if (argc == 3)
    {
        std::ofstream out(argv[2]); // has output, define outstream;
        std::ifstream in(argv[1]);  // define input file stream

        // ensure the file can be opened
        if (!in)
        {
            // file could not be opened
            std::cerr << "Could not open " << argv[1] << ", exiting." << std::endl;
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
                        String temp = infix.pop();

                        after.push(temp);
                    }

                    // if there is an extra semicolon on the top, remove it.
                    if (after.top() == ";")
                    {
                        after.pop();
                    }

                    out << "\t Postfix" << std::endl;

                    stack<String> temp;
                    while (!after.empty())
                    {
                        String c = after.pop();
                        out << c << ' ';
                        temp.push(c);
                    }
                    out << std::endl;

                    while (!temp.empty())
                    {
                        after.push(temp.pop());
                    }

                    // run the postfix conversion function
                    result = postfix(after);

                    // output the results to console.
                    out << result << std::endl;

                    stack<String> assemb = assembly(result);
                    stack<String> two;
                    while (!assemb.empty())
                    {
                        two.push(assemb.pop());
                    }

                    while (!two.empty())
                    {
                        out << two.pop() << std::endl;
                    }

                    // output prefix
                    result = prefix(after);
                    out << "\tPrefix" << std::endl;
                    out << result << std::endl;

                    // output assembly
                    stack<String> preAssemb = preAssembly(result);
                    stack<String> twoPRE;
                    while (!preAssemb.empty())
                    {
                        twoPRE.push(preAssemb.pop());
                    }

                    while (!twoPRE.empty())
                    {
                        out << twoPRE.pop() << std::endl;
                    }

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
            std::cerr << "Could not open " << argv[1] << ", exiting." << std::endl;
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
                        String temp = infix.pop();

                        after.push(temp);
                    }

                    // if there is an extra semicolon on the top, remove it.
                    if (after.top() == ";")
                    {
                        after.pop();
                    }

                    std::cout << "\tPostfix" << std::endl;

                    stack<String> temp;
                    while (!after.empty())
                    {
                        String c = after.pop();
                        std::cout << c << ' ';
                        temp.push(c);
                    }
                    std::cout << std::endl;

                    while (!temp.empty())
                    {
                        after.push(temp.pop());
                    }

                    // run the postfix conversion function
                    result = postfix(after);

                    // output the results to console.
                    std::cout << result << std::endl;

                    stack<String> assemb = assembly(result);
                    stack<String> two;
                    while (!assemb.empty())
                    {
                        two.push(assemb.pop());
                    }
                    //two.push(assemb.pop());

                    while (!two.empty())
                    {
                        std::cout << two.pop() << std::endl;
                    }

                    // output infix
                    std::cout << "\tPrefix" << std::endl;
                    result = prefix(after);
                    std::cout << result << std::endl;

                    //std::cerr << __LINE__ << ", about to preAssembly" << std::endl;
                    stack<String> preAssemb = preAssembly(result);
                    stack<String> twoPRE;
                    while (!preAssemb.empty())
                    {
                        twoPRE.push(preAssemb.pop());
                    }

                    while (!twoPRE.empty())
                    {
                        std::cout << twoPRE.pop() << std::endl;
                    }

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