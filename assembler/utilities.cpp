//|=======================|
//|     William Craig     |
//| assembler - project 3 |
//|  CS 23001 Fall 2021   |
//|=======================|

#include <iostream>
#include "stack.hpp"
#include "string.hpp"
#include "utilities.hpp"

// +++++++ assembly +++++++
// REQUIRES: A postfix expression with a space between each character
// ENSURES:  A stack<String> with the list assembly instructions in reverse order.
stack<String> assembly(String postfixString)
{
    stack<String> postfix;  // store the expression in a stack
    stack<String> assembly; // store the resulting assembly values
    stack<String> result;   // store the asasembly steps to return
    int tempCount = 0;      // count number of temp variables for variable naming.
    String token;           // store current expression character
    String rhs;             // store right hand side object in expression
    String lhs;             // store left hand side object in expression.
    String op;              // store operator code

    // separate string into expression operators and operands
    for (String i : postfixString.split(' '))
    {
        assembly.push(i);
    }
    // reverse the order of the expression, moving to postfix and clearing assembly
    while (!assembly.empty())
    {
        postfix.push(assembly.pop());
    }

    // read until all nodes in postfix have been added to assmebly
    while (!postfix.empty())
    {
        // get token
        token = postfix.pop();

        // if token is one of the operators
        if (token == "*" || token == "/" || token == "+" || token == "-")
        {
            // pop the 2 off and add it into the assembler list

            rhs = assembly.pop();
            lhs = assembly.pop();

            // determine operator code
            if (token == "*")
            {
                op = "MU";
            }
            else if (token == '/')
            {
                op = "DV";
            }
            else if (token == "+")
            {
                op = "AD";
            }
            else if (token == "-")
            {
                op = "SB";
            }
            else
            {
                exit(1);
            }

            // replace expression in assembly stack with new variable
            ++tempCount;
            assembly.push(String("TMP" + String('0' + (tempCount))));

            // add assembly instructions to result stack
            result.push("LD    " + lhs);
            result.push(op + "    " + rhs);
            result.push(String("ST    TMP" + String('0' + (tempCount))));
        }
        else
        {
            // push character to assembly stack
            assembly.push(token);
        }
    }

    // return stack with list of assembly expressions.
    return result;
}

// +++++++ postfix +++++++
// REQUIRES: fully parenthesized infix expression, in a stack, with a semicolon as the last index to be popped off
// ENSURES:  a string with the postfix conversion of the passed infix stack object
String postfix(stack<String> infix)
{
    // variables to store the 3 pop(ed) items at the ")" occurance.
    String left;
    String right;
    String oper;

    String token = infix.pop();
    stack<String> postfix;

    // loop through each item in the stack
    while (token != ";")
    {
        // if the token is a close parenthesis, and begins the conversion process
        if (token == ")")
        {
            // extract the expression from the stack
            right = postfix.pop();
            oper = postfix.pop();
            left = postfix.pop();

            // add the new postfix expression to the top of stack
            postfix.push((left + ' ' + right + ' ' + oper));
        }
        else
        {
            // do not push ")" tokens
            if (token != "(")
            {
                postfix.push(token);
            }
        }
        // get next token for the loop
        token = infix.pop();
    }
    // the complete postfix expression is at the top of stack,
    // return String value of top node
    return postfix.top();
}

// ======================================================================================
// BONUS

String prefix(stack<String> infix)
{
    String left;
    String right;
    String oper;

    String token = infix.pop();
    stack<String> prefix;

    // loop through each item in the stack
    while (token != ";")
    {
        // if the token is a close parenthesis, and begins the conversion process
        if (token == ")")
        {
            // extract the expression from the stack
            right = prefix.pop();
            oper = prefix.pop();
            left = prefix.pop();

            // add the new prefix expression to the top of stack
            prefix.push((oper + ' ' + left + ' ' + right));
        }
        else
        {
            // do not push ")" tokens
            if (token != "(")
            {
                prefix.push(token);
            }
        }
        // get next token for the loop
        token = infix.pop();
    }
    // the complete prefix expression is at the top of stack,
    // return String value of top node
    return prefix.top();
}

stack<String> preAssembly(String postfixString)
{
    stack<String> postfix;  // store the expression in a stack
    stack<String> assembly; // store the resulting assembly values
    stack<String> result;   // store the asasembly steps to return
    int tempCount = 0;      // count number of temp variables for variable naming.
    String token;           // store current expression character
    String rhs;             // store right hand side object in expression
    String lhs;             // store left hand side object in expression.
    String op;              // store operator code

    // separate string into expression operators and operands
    for (String i : postfixString.split(' '))
    {
        postfix.push(i);
    }
    // reverse the order of the expression, moving to postfix and clearing assembly
    //while (!assembly.empty()) { postfix.push(assembly.pop()); }

    // read until all nodes in postfix have been added to assmebly
    while (!postfix.empty())
    {
        // get token
        token = postfix.pop();

        // if token is one of the operators
        if (token == "*" || token == "/" || token == "+" || token == "-")
        {
            // pop the 2 off and add it into the assembler list

            rhs = assembly.pop();
            lhs = assembly.pop();

            // determine operator code
            if (token == "*")
            {
                op = "MU";
            }
            else if (token == '/')
            {
                op = "DV";
            }
            else if (token == "+")
            {
                op = "AD";
            }
            else if (token == "-")
            {
                op = "SB";
            }
            else
            {
                exit(1);
            }

            // replace expression in assembly stack with new variable
            ++tempCount;
            assembly.push(String("TMP" + String('0' + (tempCount))));

            // add assembly instructions to result stack
            String r = result.top();
            //std::cerr << "\tbefore if, rhs = " << rhs << std::endl;
            //if (r.substr(0,8) != "ST    TMP" && rhs.substr(0,2) == "TMP")
            result.push("LD    " + rhs);
            result.push(op + "    " + lhs);
            result.push(String("ST    TMP" + String('0' + (tempCount))));
        }
        else
        {
            // push character to assembly stack
            assembly.push(token);
        }
    }

    // return stack with list of assembly expressions.
    return result;
}
