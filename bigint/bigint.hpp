/**
 * William Craig
 * bigint
 * CS 23001 
 */

#ifndef CS2_BIGINT_HPP_
#define CS2_BIGINT_HPP_

#include <iostream>


// Global Variables

// number of digits(0-9) that can be stored in bigint
const int CAPACITY = 200;


class bigint {
private:

    // used to represent bigint 'number'
    int represent[CAPACITY];

public:

    /**
     * @brief move all elements in the array 1 position to the right
     * index [2] takes value of [1]
     * [1] takes value of [0]
     * [0] set to value 0
     * @param digitsInBigint Number of digits that are currently in represent array
     */
    void pushBack(int digitsInRepresent);


    /**
     * @brief Construct a new bigint object with value 0
     */
    bigint();


    /**
     * @brief Construct a new bigint object with value of inNum.
     * 
     * @param inNum - positive integer to convert to bigint number.
     */
    bigint(int inNum);


    /**
     * @brief Construct a new bigint object with value of inChar
     * 
     * @param inChar - array of characters (ex: "123") to convert to bigint number
     */
    bigint(const char inChar[]);


    // debug output
    /**
     * @brief Output all number in bigint with | between each digit.
     * 
     * @param output - ostream object (std::cout).
     */
    void debugPrint(std::ostream &output) const;


    /**
     * @brief Overload << bigint
     * 
     * @param output - ostream object
     * @param obj - bigint object being displayed
     * @return std::ostream - return formatted output
     */
    friend std::ostream &operator << (std::ostream &output, const bigint &obj);


    /**
     * @brief Overload >> operator
     * 
     * @param input - istream object to pass
     * @param obj - object to write number to 
     * @return std::istream& 
     */
    friend std::istream &operator >> (std::istream &input, bigint &obj);


    /**
     * @brief overload addition operator
     * 
     * @param obj - bigint object to add to self
     * @return bigint sum of passed bigint object and self bigint object
     */
    bigint operator + (const bigint &obj) const;


    /**
     * @brief overload subscript operator to return digit at index of bigint
     * 
     * @param index - digit position of the bigint object
     * @return int& - return digit found at index
     */
    int& operator [] (int index);


    /**
     * @brief Overload == operator
     * 
     * @param comp - bigint object to compare to 'this' object
     * @return true - true if values are the same
     * @return false - false if values differ
     */
    bool operator == (const bigint &comp);

    
    /**
     * @brief multiply bigint by a single digit
     * 
     * @param digit - digit to multiply bigint number 
     * @return bigint
     */
    bigint timesDigit(int digit) const;


    /**
     * @brief Multiply bigint by 10^n
     * 
     * @param n - 10^n or number of trailing zeros to add 
     * @return bigint 
     */
    bigint times10(int n) const;


    /**
     * @brief overload multiplication operator
     * 
     * @param obj - right hand side bigint object
     * @return bigint 
     */
    bigint operator * (const bigint &obj);



    /**
     * @brief return the number of trailing zeros on bigint number
     * 
     * @return int - number of trailing zeros
     */
    int factorial() const;



};


#endif