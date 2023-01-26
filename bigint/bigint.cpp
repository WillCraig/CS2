/**
 * William Craig
 * bigint
 * CS 23001 
 */

#include <iostream>

#include "bigint.hpp"


// move all items in array from [i] to [i+1]
void bigint::pushBack(int digitsInRepresent) {
    for (int i = digitsInRepresent; i > 0; i--) {
        // begin at end of array to re-arrange dynamically
        represent[i] = represent[i - 1];

        if (i == 0) {
            represent[0] = 0;
        }
    }
}


// Default Constructor
// populate represent array with 0
bigint::bigint() {
    for (int index = 0; index < CAPACITY; index++) {
        bigint::represent[index] = 0;
    }
}



// INT constructor
// calls default constructor to zero out represent
// convert int to bigint
bigint::bigint(int inNum) : bigint() {
    // check for negative numbers (unnecessary)
    if (inNum >= 0) {

        int digitCount = 0;
        
        while (inNum > 0) {
            // extract rightmost digit from integer and set in bigint
            represent[digitCount] = inNum % 10;

            // remove rightmost digit from integer
            inNum /= 10;

            ++digitCount; 
        }
    }
}



// CHAR[] constructor
// calls default constructor to zero out represent
// conver char represented integer to bigint
bigint::bigint(const char inChar[]) : bigint::bigint() {
    int currentDigit = 0;
    
    // continue until the end of the char array is reached or until the bigint digit limit has been reached.
    while (inChar[currentDigit] != '\0' && currentDigit < CAPACITY) {

        // prepare represent for appending next digit
        // move all populated cells from [i] to [i+1]
        pushBack(currentDigit);

        // set first index of the array to the next digit to populate in proper order
        represent[0] = inChar[currentDigit] - '0';


        // ensure that no out of range digits are going to be added.
        // program will exit on a non-single digit positive integer.
        if (represent[0] < 0 && represent[0] > 9) {
            // if last added integer was outside the allowed range of (0-9), quit program.
            exit(0);
        }

        ++currentDigit;
    }
}


// print all digits in bigint with a pipe ("|") in between.
void bigint::debugPrint(std::ostream &output) const {
    output << "\n\n";
    for (int index = (CAPACITY - 1); index >= 0; index--) {
        output << represent[index] << "|";
    }
    output << "\n\n";
}




// overload the << ostream operator to output bigint number
// will print 80 characters per line
std::ostream &operator << (std::ostream &output, const bigint &obj) {
    const int digitOutputLimit = 80; // number of digits to display per line

    int digitCount = 0; // track number of digits to insert newline at digitOutputLimit

    bool keepChecking = true;

    // start at end of array, count back until a non-zero integer was found
    for (int i = CAPACITY-1; i >= 0; i--) {

        // if non-zero number has not been found
        if (keepChecking) {
            
            // check to see if index was found
            if (obj.represent[i] != 0) {
                // starting index found
                keepChecking = false; // stop program from checking for non-zero digits.

                ++i; // add one to i so current digit/first digit is printed
            }
            

            // when the end of array has been reached and no digit was found
            // or when the array is of value 0
            if (i == 0) {
                output << obj.represent[0];
                // no need to break, loop will not continue 
            }
        }
        else {
            // Once the starting index was found and the position for output is set, output digits in bigint.
            output << obj.represent[i];

            ++digitCount;

            if (digitCount == digitOutputLimit) {
                // if 80 characters have been printed, insert newline 
                // reset digitCount to track next output line
                output << "\n";
                digitCount = 0;
            }


        }
    }
    
    return output;
}


// take cin input of number to populate bigint number
// reads input until a semicolon (;) is read
std::istream &operator >> (std::istream &input, bigint &obj) {
    char num;
    char buffer[CAPACITY];
    int digitCount = 0;

    // do while to collect number before first while loop test
    do {
        // read in character
        input >> num;

        // add current character to buffer
        buffer[digitCount] = num;
        ++digitCount; 

    } while (num != ';' && !input.eof()); // read until read in character is semicolon or end of input is reached

    // remove semicolon from buffer
    buffer[digitCount - 1] = 0; 

    // Convert char buffer[] to bigint
    obj = bigint(buffer); // Convert char buffer[] to bigint

    return input;
}


// compares represent values of 'this' bigint object and comp bigint object
bool bigint::operator == (const bigint &comp) {
    // Check every value of the array
    for (int i = 0; i < CAPACITY; i++) {
        if (represent[i] != comp.represent[i]) {
            // Value at [i] was not the same, not equal
            return false;
        }
    }
    return true;
}


// overload of + operator, will add two bigint objects together
// if sum of bigint objects is large than 200 digits, number will be cut off at 200 digits.
bigint bigint::operator + (const bigint &obj) const {
    int next = 0; // placeholder for sum of bigint objects.

    bigint nn; // placeholder for sum of biging objects.

    for (int i = 0; i < CAPACITY; i++) {
        // add self and obj bigint together.
        next = (represent[i] + obj.represent[i]) + next;

        // add 1's digit to bigint
        nn.represent[i] = next % 10;

        // if digit larger than 9, add 10's place integer to be added to next place in array.
        next /= 10;
    }

    return nn;
}


// overload subscript operator to access digits of bigint
int& bigint::operator [] (int index) {
    if (index < 0 && index >= CAPACITY) {
        exit(0); // if index out of range, exit
    }

    // return index of represent
    return represent[index];
}



// move the 1 space to the left, n times.
// [i] will become [i+n] 
bigint bigint::times10(int n) const {
    // create copy of this class in moved
    bigint moved = *this;

    // ensure array is not already full
    if (n == 0) {
        return moved;
    }
    else if (represent[(CAPACITY - 1)] == 0) {

        while (n > 0) {
            for (int i = (CAPACITY - 1); i > 0; i--) {
                // begin at end of array to re-arrange dynamically

                // replace indexes in the array
                moved.represent[i] = moved.represent[i - 1];
            }

            // index will hold its value, replace with 0 for proper functionality
            moved[0] = 0;
            
            // subtract from number of trailing zeros to be added.
            n--;
        }
    }
    
    return moved;
}





// multiply a bigint number by a single digit, return product
bigint bigint::timesDigit(int digit) const {
    // multiply each digit and add the remainder
    // similar to the addition operator

    int next = 0; // placeholder for sum of bigint objects.

    bigint nn; // placeholder for sum of biging objects.

    for (int i = 0; i < CAPACITY; i++) {
        // add self and obj bigint together.
        next = (represent[i] * digit) + next;

        // add 1's digit to bigint
        nn.represent[i] = next % 10;

        // if digit larger than 9, add 10's place integer to be added to next place in array.
        next /= 10;
    }

    return nn;

}


// Multiply 2 bigint objects together and return product.
bigint bigint::operator * (const bigint &obj) {
    bigint product;

    for (int i = 0; i < CAPACITY; i++) {
        // The following line, will multiply the lhs side of bigint with each digit of rhs bigint
        // The above number is then shifted left i times.
        product = product + (obj.timesDigit(represent[i])).times10(i);
    }
    return product;
}


// calculate the factorial of bigint and return the number of trailing zeros.
int bigint::factorial() const {
    // works up to 120

    // easier solution
    bigint fact(1);
    bigint counter;   

    // calculates the factorial 
    while (!(counter == *this)) { //while counter is not equal to *this class
        counter = counter + 1; // add one to counter for next number in factorial calculation

        fact = fact * counter; // calculate factorial to counter limit.

    }

    
    // count the number of 0 values at the end of the number.
    int trailingZeroCount = 0;
    while (fact[trailingZeroCount] == 0) {
        ++trailingZeroCount;
    }

    return trailingZeroCount;


    // way of performing mathematically by essentially diving the bigint number by 5.
    // could not work out the code.
    // example: 123
    // see how many times 5 goes into 1 (largest digit)
    // put the number as the {1 ... } part of the answer (will possibly get to use the pushback method again)
    // drop the next digit into the new number (12)
    // how many times 5 goes into (12)
    // put ansewr in { 1, 2 ... } answer thing (pushback)
    // repeat until the remainder < 5
}
