/**
 * William Craig
 * string - project 2
 * CS 23001 
 */

#include <iostream>
#include "string_milestone1.hpp"

/**
 * @brief Construct a new null String
 * Default Constructor 
 */
String::String()
{
    // set every character in the array to be null
    for (int i = 0; i < STRING_SIZE; i++)
    {
        str[i] = '\0';
    }
}

/**
 * @brief Construct a String from a Char
 * 
 * @param inCh - char to create String from
 */
String::String(char inCh) : String()
{
    str[0] = inCh;
    // all other characters have already been set to null.
}

/**
 * @brief Construct a String from const char[]
 * 
 * @param inStr - const char[] to create string from
 */
String::String(const char inStr[]) : String()
{
    // counter
    int i = 0;

    // while end of inStr has not been found and while i less than string size
    while (inStr[i] != '\0' && i < STRING_SIZE)
    {
        // copy values of inStr into this.str
        str[i] = inStr[i];
        ++i;
    }
}

/**
 * @brief Get max character capacity of the String
 * 
 * @return int max capacity
 */
int String::capacity() const
{
    return STRING_SIZE;
}

/**
 * @brief Get length of String
 * 
 * @return int number of characters in string
 */
int String::length() const
{
    int charCount = 0;

    // while end of string not found.
    while (str[charCount] != '\0')
    {
        ++charCount;
    }

    return charCount;
}

/**
 * @brief Subscript[] overload operator
 * 
 * Accessor and Modifier
 * 
 * @param index obj[index]
 * @return char& - address of character in array
 */
char &String::operator[](int index)
{
    return str[index];
}

/**
 * @brief Subscript[] overload operator
 * 
 * Accessor only
 * 
 * @param index - String[index]
 * @return char - character at index
 */
char String::operator[](int index) const
{
    return str[index];
}

/**
 * @brief Plus Equals Overload Operator
 * 
 * @param obj - right hand side String object
 * @return String& - *this after modification
 */
String &String::operator+=(const String &obj)
{
    // concatenate strings.
    if ((length() + obj.length()) > STRING_SIZE)
    {
        // the resulting String will be larger than the largest size.
        return *this;
    }
    else if (length() == 0 && obj.length() != 0)
    {
        *this = obj;
        return *this;
    }
    else if (obj.length() == 0)
    {
        return *this;
    }
    else
    {
        for (int i = 0; i < obj.length(); i++)
        {
            // length returns 1 more than the index of the last int
            // then when another character is added to the length, then the length will increase by 1 naturally.
            str[length()] = obj.str[i];
        }

        return *this;
    }
}

/**
 * @brief Comparative Overload Operator ==
 * 
 * @param obj - right hand side object
 * @return true - if String objects are equal
 * @return false - if String objects are not equal
 */
bool String::operator==(const String &obj) const
{
    int i = 0;

    // while neither string is at the end and count is less than stringsize
    while (str[i] != '\0' && obj.str[i] != '\0' && i < STRING_SIZE)
    {

        if (str[i] != obj.str[i])
        {
            return false;
        }

        ++i;
    }

    return true;
}

/**
 * @brief Overload Less Than Operator <
 * 
 * @param obj - right hand side String object
 * @return true - if lhs < rhs
 * @return false if lhs >= rhs
 */
bool String::operator<(const String &obj) const
{
    if (length() < obj.length())
    {
        // lhs length less than rhs length
        return true;
    }
    else if (length() == obj.length())
    {

        int selfValueCount = 0;
        int objValueCount = 0;

        for (int i = 0; i < length(); i++)
        {
            if (str[i] < obj.str[i])
            {
                //
                ++objValueCount;
            }
            else if (str[i] > obj.str[i])
            {
                ++selfValueCount;
            }
        }

        if (selfValueCount < objValueCount)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        //length > obj.length
        return false;
    }
}

/**
 * @brief Extract string from startIndex to stopIndex
 * 
 * @param startIndex 
 * @param endIndex 
 * @return String - Substring
 */
String String::substr(int startIndex, int endIndex) const
{

    String n;

    for (int i = startIndex; i <= endIndex; i++)
    {
        n[(startIndex - i)] = str[i];
    }

    return n;
}

/**
 * @brief Find Character starting at index in this String
 * 
 * @param index - search starting index
 * @param searCH - character to look for
 * @return int - return index of desired character location or -1 for not found
 */
int String::findch(int index, char searCH) const
{
    // location of a character given starting index for search
    for (int i = index; i < STRING_SIZE; ++i)
    {
        // if desired character == currect character, return true;
        if (str[i] == searCH)
        {
            return i;
        }
    }
    // -1 to signal nothing was found.
    return -1;
}

/**
 * @brief Find starting location of String within another String object
 * 
 * @param index - starting search index
 * @param obj - String to look for
 * @return int - index of of start of desired string or -1 for not found
 */
int String::findstr(int index, const String &obj) const
{
    String comp;

    while ((index + obj.length()) <= 256)
    {
        int start = findch(index, obj.str[0]);
        if (start == -1)
        {
            return -1;
            break;
        }
        else
        {
            if ((start + obj.length()) <= 256)
            {
                // if there is space available to find it
                comp = substr(start, obj.length());

                if (comp == obj)
                {
                    return start;
                    break;
                }
                else
                {
                    // go back around to find next character
                    ++index;
                }
            }
        }
    }
    return -1;
}

/**
 * @brief Input overload operator
 * 
 * @param input istream object
 * @param obj - object to write to
 * @return std::istream& return istream
 */
std::istream &operator>>(std::istream &input, String &obj)
{
    // overload input operator
    char buffer[STRING_SIZE] = {'\0'};

    input >> buffer;

    obj = String(buffer);

    return input;
}

/**
 * @brief Output overload operator
 * 
 * @param output - ostream object
 * @param obj - object to output
 * @return std::ostream& ostream object
 */
std::ostream &operator<<(std::ostream &output, String &obj)
{
    // overload output operator.
    int i = 0;
    while (obj.str[i] != '\0')
    {
        output << obj.str[i];
        ++i;
    }
    return output;
}

// --------- FREE FUNCTIONS -----------------------

/**
 * @brief Overload + operator (free)
 * 
 * @param lhs - left side object
 * @param rhs - right side object
 * @return String result of addition 
 */
String operator+(String lhs, const String &rhs)
{
    return lhs.operator+=(rhs);
}

/**
 * @brief Overload == operator (free)
 * 
 * @param lhs - left side object
 * @param rhs - right side object
 * @return true - if lhs==rhs
 * @return false - if lhs!=rhs
 */
bool operator==(const char lhs[], const String &rhs)
{
    String n(lhs);

    if (n == rhs)
    {
        return true;
    }
    else
    {
        return false;
    }
}

/**
 * @brief Overload == operator (char, free)
 * 
 * @param lhs - left side object
 * @param rhs - right side object 
 * @return true 
 * @return false 
 */
bool operator==(char lhs, const String &rhs)
{
    if (rhs.length() == 1 && lhs == rhs[0])
    {
        return true;
    }
    else
    {
        return false;
    }
}

/**
 * @brief Overload < operator (free)
 * 
 * @param lhs - left side object
 * @param rhs - right side object
 * @return true 
 * @return false 
 */
bool operator<(const char lhs[], const String &rhs)
{
    return String(lhs).operator<(rhs);
}

/**
 * @brief Overload < operator(free, char)
 * 
 * @param lhs - left side object
 * @param obj - right side object 
 * @return true 
 * @return false 
 */
bool operator<(char lhs, const String &obj)
{
    if (obj.length() == 1 && lhs == obj[0])
    {
        return true;
    }
    else
    {
        return false;
    }
}

/**
 * @brief Overload <= operator (free)
 * 
 * @param lhs - left side object
 * @param rhs - right side object
 * @return true 
 * @return false 
 */
bool operator<=(const String &lhs, const String &rhs)
{
    if (lhs.operator==(rhs) || lhs.operator<(rhs))
    {
        return true;
    }
    else
    {
        return false;
    }
}

/**
 * @brief Overload != Operator (free)
 * 
 * @param lhs - left side object
 * @param rhs - right side object
 * @return true 
 * @return false 
 */
bool operator!=(const String &lhs, const String &rhs)
{
    return !(lhs.operator==(rhs));
}

/**
 * @brief Overload > operator (free)
 * 
 * @param lhs - left side object
 * @param rhs - right side object
 * @return true 
 * @return false 
 */
bool operator>(const String &lhs, const String &rhs)
{
    return rhs.operator<(lhs); // x < 0 (same as) 0 > x
}

/**
 * @brief Overload >= operator (free)
 * 
 * @param lhs - left side object
 * @param rhs - right side object
 * @return true 
 * @return false 
 */
bool operator>=(const String &lhs, const String &rhs)
{
    // same logic as > for rhs/lhs swap
    if ((rhs.operator<(lhs)) || (lhs.operator==(rhs)))
    {
        return true;
    }
    else
    {
        return true;
    }
}
