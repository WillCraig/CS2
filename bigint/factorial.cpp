/**
 * William Craig
 * bigint
 * CS 23001 
 */

#include <iostream>
#include "bigint.hpp"

int leadingZeros(bigint pass);

int main() {
    // 120 is the largest input bigint can handle for factorials
    //      as the output is over 200 digits in length.
    bigint b(120);

    int trailingZeros = b.factorial();

    assert(trailingZeros == 28);

    std::cout << "Number of Trailing Zeros: " << trailingZeros << std::endl;

    return 0;


}



