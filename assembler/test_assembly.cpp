//|=======================|
//|     William Craig     |
//| assembler - project 3 |
//|  CS 23001 Fall 2021   |
//|=======================|

#include <iostream>
#include <fstream>
#include <new>
#include <cassert>

#include "string.hpp"
#include "stack.hpp"
#include "utilities.hpp"

int main()
{
    String answers[12] = {
        "LD    B",
        "MU    C",
        "ST    TMP1",
        "LD    A",
        "AD    TMP1",
        "ST    TMP2",
        "LD    D",
        "SB    E",
        "ST    TMP3",
        "LD    TMP2",
        "DV    TMP3",
        "ST    TMP4"};

    String expr("A B C * + D E - /");
    String line;

    stack<String> assemb = assembly(expr);
    stack<String> two;
    while (!assemb.empty())
    {
        two.push(assemb.pop());
    }

    int i = 0;
    while (!two.empty())
    {
        line = two.pop();
        assert(line == answers[i]);
        i++;
    }

    std::cout << "Done testing " << __FILE__ << "." << std::endl;
    return 0;
}