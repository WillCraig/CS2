//|=======================|
//|     William Craig     |
//| assembler - project 3 |
//|  CS 23001 Fall 2021   |
//|=======================|

#ifndef CS2_UTILITIES_HPP_
#define CS2_UTILITIES_HPP_

#include "string.hpp"
#include "stack.hpp"

String postfix(stack<String>);

stack<String> assembly(String);

String prefix(stack<String>);
stack<String> preAssembly(String);

#endif
