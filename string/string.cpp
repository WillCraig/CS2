/**
 * William Craig
 * string - project 2
 * CS 23001 
 */

#include <iostream>
#include <vector>
#include "string.hpp"

///
/// @brief Construct an empty String object
///        Default Constructor
///
String::String()
{
	stringSize = 1;
	str = new char[stringSize];
	str[0] = '\0';
}

///
/// @brief Construct a String object from char
///        char Constructor
///
/// @param inChar - character to convert to String
///
String::String(char inChar)
{
	// Check to see if character is lime delimiter
	if (inChar == '\0')
	{
		// create a new array of size 1 since the char is just the line delimiter
		stringSize = 1;
		str = new char[stringSize];
		str[0] = '\0';
	}
	else
	{
		// create a new array of size 2 for the character and terminator
		stringSize = 2;
		str = new char[stringSize];
		str[0] = inChar;
		str[1] = '\0';
	}
}

///
/// @brief Construct a new String object from const char[]
///        const char[] Constructor
///
/// @param inS - const char[] to convert to string
///
String::String(const char inS[])
{
	// Get the size of the const char[] and add 1 for the '\0' character
	stringSize = 0;
	while (inS[stringSize] != '\0')
	{
		++stringSize;
	}
	++stringSize;

	// create the new array and populate
	str = new char[stringSize];
	for (int i = 0; i < stringSize; i++)
	{
		str[i] = inS[i];
	}

	// set last character as '\0'
	str[stringSize - 1] = '\0';
}

///
/// @brief String Copy Constructor
///
/// @param rhs - String to copy to (this)
///
String::String(const String &rhs)
{
	stringSize = rhs.stringSize;
	str = new char[stringSize];
	for (int i = 0; i < stringSize; i++)
	{
		str[i] = rhs.str[i];
	}
}

///
/// @brief Destroy the String object
///        Destructor
///
String::~String()
{
	delete[] str;
	str = 0;
	stringSize = 0;
}

///
/// @brief Swap values of string objects
///
/// @param rhs - string to be come (this), will become *this after running
///
void String::swap(String &rhs)
{
	int sizeTemp = rhs.stringSize;
	rhs.stringSize = stringSize;
	stringSize = sizeTemp;

	char *temp = rhs.str;
	rhs.str = str;
	str = temp;
}

///
/// @brief Assignment Overload Operator
///
/// @param rhs      - object to copy to (this)
/// @return String& - return (*this=rhs)
///
String &String::operator=(String rhs)
{
	//
	if (str == rhs.str)
	{
		return *this;
	}

	delete[] str;
	stringSize = rhs.stringSize;
	str = new char[stringSize];
	for (int i = 0; i < stringSize; i++)
	{
		str[i] = rhs.str[i];
	}

	return *this;
}

///
/// @brief Get Capacity of String
///
/// @return int - the capacity of String
///
int String::capacity() const
{
	return stringSize - 1;
}

///
/// @brief Get Length of String
///
/// @return int - length of this object
///
int String::length() const
{
	int len = 0;
	while (str[len] != '\0')
	{
		++len;
	}

	return len;
}

///
/// @brief Overload subscript operator (accessor and modifier)
///
/// @param index  - character index of string to return
/// @return char& - address of character in String object at index
///
char &String::operator[](int index)
{
	//accessor modifier
	return str[index];
}

///
/// @brief Overload subscript operator (accessor and modifier)
///
/// @param index - character index of string to return
/// @return char - character in String object at index
///
char String::operator[](int index) const
{
	return str[index];
}

///
/// @brief Overload plus equals operator
///
/// @param rhs      - object to add to (this)
/// @return String& - return (this + rhs)
///
String &String::operator+=(const String &rhs)
{

	char temp[((stringSize + rhs.stringSize) - 1)];

	int i;
	for (i = 0; i < (stringSize - 1); i++)
	{
		temp[i] = str[i];
	}

	for (int j = 0; j <= (rhs.stringSize - 1); j++)
	{
		temp[j + i] = rhs.str[j];
	}

	return (*this = String(temp));
}

///
/// @brief Overload equality operator
///
/// @param rhs    - object to compare (this) to
/// @return true  - if equal
/// @return false - if not equal
///
bool String::operator==(const String &rhs) const
{
	if (length() != rhs.length())
	{
		return false;
	}
	else
	{
		for (int i = 0; i < length(); i++)
		{
			if (str[i] != rhs.str[i])
			{
				return false;
			}
		}
	}
	return true;
}

///
/// @brief Overload less than operator
///
/// @param rhs    - object to compare (this) to
/// @return true  - if (this) < rhs
/// @return false - if not (this) < rhs
///
bool String::operator<(const String &rhs) const
{
	int i = 0;
	while (str[i] != 0 && str[i] == rhs.str[i])
	{
		++i;
	}

	return str[i] < rhs.str[i];
}

///
/// @brief Substring
///
/// @param startIndex - index of first character wanted in substring
/// @param endIndex   - index of last character wanted in substring
/// @return String    - characters in string from startIndex to endIndex
///
String String::substr(int startIndex, int endIndex) const
{
	String result;

	for (int i = startIndex; i <= endIndex; i++)
	{
		if (i > stringSize)
		{
			break;
		}
		result += str[i];
	}

	return result;
	//
}

///
/// @brief Find Character in Array
///
/// @param startIndex - index to start looking for desired character
/// @param desired    - character to look for in String
/// @return int       - (-1) for not found OR index of first found occurance of that letter
///
int String::findch(int startIndex, char desired) const
{
	for (int i = startIndex; i <= stringSize; i++)
	{
		if (str[i] == desired)
		{
			return i;
		}
	}
	return -1; //not found
}

///
/// @brief Find String
///
/// @param index - index to start looking for the desired string
/// @param obj   - string to look for in (this)
/// @return int  - (-1) for not found OR index of beggining of substring obj in (this)
///
int String::findstr(int index, const String &obj) const
{

	index = findch(index, obj.str[0]); // index of first occurance of first letter
	String compare = substr(index, (index + obj.length()) - 1);
	while (compare != obj && index < obj.length() && index != -1)
	{
		++index;
		index = findch(index, obj.str[0]); // index of first occurance of first letter
		compare = substr(index, (index + obj.length()));
	}

	if (compare == obj)
	{
		return index;
	}
	else
	{
		return -1;
	}
}

///
/// @brief Outstream overload operator
///
/// @param output         - ostream object
/// @param obj            - object to output
/// @return std::ostream& - ostream object
///
std::ostream &operator<<(std::ostream &output, const String &obj)
{
	for (int i = 0; i < obj.length(); i++)
	{
		output << obj.str[i];
	}
	return output;
}

///
/// @brief Instream overload operator
///
/// @param input - istream object
/// @param obj   - object to write to
/// @return std::istream&
///
std::istream &operator>>(std::istream &input, String &obj)
{
	obj = String();

	char buffer;
	input.get(buffer);
	while (!input.eof() && buffer != ' ' && buffer != '\n' && buffer != '\r' && buffer != '\t' && buffer != ';')
	{
		obj.operator+=(buffer);
		input.get(buffer);
	}
	return input;
}

// ---FREE FUNCTIONS---

///
/// @brief Free: Overload plus operator
///
/// @param lhs - left hand side String object
/// @param rhs - right hand side String object - right hand side String object
/// @return String
///
String operator+(String lhs, const String &rhs)
{
	return (lhs += rhs);
}

///
/// @brief Free: Overload equality operator (const char[])
///
/// @param lhs - left hand side const char[]
/// @param rhs - right hand side String object
/// @return true
/// @return false
///
bool operator==(const char lhs[], const String &rhs)
{
	return String(lhs) == rhs;
}

///
/// @brief Free: Overload equality operator (char)
///
/// @param lhs - left hand side char
/// @param rhs - right hand side String object
/// @return true
/// @return false
///
bool operator==(char lhs, const String &rhs)
{
	return String(lhs) == rhs;
}

///
/// @brief Free: Overload less than operator (const char[])
///
/// @param lhs - left hand side const char[]
/// @param rhs - right hand side String object
/// @return true
/// @return false
///
bool operator<(const char lhs[], const String &rhs)
{
	return String(lhs) < rhs;
}

///
/// @brief Free: Overload less than operator (char)
///
/// @param lhs - left hand side char
/// @param rhs - right hand side String object
/// @return true
/// @return false
///
bool operator<(char lhs, const String &rhs)
{
	return String(lhs) < rhs;
}

///
/// @brief Free: Overload less equals operator
///
/// @param lhs - left hand side String object
/// @param rhs - right hand side String object
/// @return true
/// @return false
///
bool operator<=(const String &lhs, const String &rhs)
{
	return (lhs < rhs) || (lhs == rhs);
}

///
/// @brief Free: Overload not equals operator
///
/// @param lhs - left hand side String object
/// @param rhs - right hand side String object
/// @return true
/// @return false
///
bool operator!=(const String &lhs, const String &rhs)
{
	return !(lhs == rhs);
}

///
/// @brief Free: Overload greater equals operator
///
/// @param lhs - left hand side String object
/// @param rhs - right hand side String object
/// @return true
/// @return false
///
bool operator>=(const String &lhs, const String &rhs)
{
	return (rhs < lhs) || (lhs == rhs);
}

///
/// @brief Free: Overload greater than operator
///
/// @param lhs - left hand side String object
/// @param rhs - right hand side String object
/// @return true
/// @return false
///
bool operator>(const String &lhs, const String &rhs)
{
	return rhs < lhs;
}

///
/// @brief Split string by given character
///
/// @param separator - character to split up (this) String by
/// @return std::vector<String> - Vector of strings after separation.
// 								if no separator is found,
///                             return this as vector size 1
///   ",a, b, c," (by ',')-> {"", "a", " b", " c", ""}
///
std::vector<String> String::split(char separator) const
{
	std::vector<String> result;

	// if no separating characters are found
	if (findch(0, separator) == -1)
	{
		// vector will only be of size 1 with the whole string in 1 element.
		result.push_back(*this);
	}
	else
	{
		//
		int start = 0;
		int sepOccurance;
		while (start <= length())
		{
			sepOccurance = findch(start, separator);
			if (sepOccurance == -1)
			{
				// no separator left in String, adding last section to vector
				result.push_back(substr(start, length()));
				break;
			}

			// add section to vector
			result.push_back(substr(start, sepOccurance - 1));

			// set to first occurance, add 1 to find the next one.
			start = sepOccurance + 1;
		}
	}

	return result;
}