//
//
// File:        logentry.cpp
//
// Version:     1.0
// Date:        10/29/2021
// Author:      William Craig
//
// Description: Class implementation for a log entry.
//
//

////////////////////////////////////////////////////////////
#include <iostream>
#include <vector>
#include <iomanip>

#include "string.hpp"
#include "logentry.hpp"

///
/// @brief Date String Constructor
///
/// @param d - string to derive date from
///
Date::Date(String d)
{
    // date will follow the same pattern
    day = d.substr(1, 2);
    month = d.substr(4, 6);
    year = toInt(d.substr(8, 11));
}

///
/// @brief Overload Date ostream operator
///
std::ostream &operator<<(std::ostream &out, const Date &obj)
{
    out << obj.month << "/" << obj.day << "/" << obj.year;
    return out;
}

///
/// Time String Constructor
///
Time::Time(String t)
{
    // follows the same pattern for all times
    hour = toInt(t.substr(13, 14));
    minute = toInt(t.substr(16, 17));
    second = toInt(t.substr(19, 20));
}

///
/// Overload ostream operator for Time
///
std::ostream &operator<<(std::ostream &out, const Time &obj)
{
    // setw() and setfill() to display in (00:00:00) format
    out << std::right << std::setfill('0') << std::setw(2) << obj.hour << ':';
    out << std::right << std::setfill('0') << std::setw(2) << obj.minute << ':';
    out << std::right << std::setfill('0') << std::setw(2) << obj.second;
    out << std::setfill(' ');
    return out;
}

///
/// Convert String to int
///
int toInt(String obj)
{
    int result = 0;

    // starting with the first number, multiply by 10 to setup for next digit, skipped if first since result=0;
    for (int i = 0; i < obj.capacity(); i++)
    {
        result *= 10;
        result += (obj[i] - '0');
    }
    return result;
}

//////////////////////////////////////////////////////////
// REQUIRES:
// ENSURES:
//
LogEntry::LogEntry(String s)
{
    // ...
    std::vector<String> vec = s.split(' ');

    if (vec.size() != 10)
    {
        // empty
        host = '\0';
        date = Date();
        time = Time();
        request = '\0';
        status = '\0';
        number_of_bytes = -1;
    }
    else
    {

        host = vec[0];
        date = vec[3];
        time = vec[3];
        request = vec[6] + ' ' + vec[6] + ' ' + vec[7];
        status = vec[8];

        if (vec[9] == '-')
        {
            number_of_bytes = 0;
        }
        else
        {
            number_of_bytes = toInt(vec[9]);
        }

        // Formatting stays the same luckily.
    }
}

///
/// Overload ostream operator for LogEntry
///
std::ostream &operator<<(std::ostream &out, const LogEntry &obj)
{
    String hostSpace;
    for (int i = 0; i < (2 + (15 - obj.host.length())); i++)
    {
        hostSpace += " ";
    }

    // handle host spaces
    out << obj.host << hostSpace;
    out << obj.date << "  ";
    out << obj.time << "  ";
    out << obj.request << "  ";
    out << obj.status << "     ";
    out << obj.number_of_bytes;

    return out;
}

//////////////////////////////////////////////////////////
// REQUIRES:  istream&
// ENSURES:   a list of logs in a file.
//
std::vector<LogEntry> parse(std::istream &in)
{
    std::vector<LogEntry> result;
    // buffer to store the text stored on the line.
    char buffer[200] = {'\0'};
    // while able to read line
    while (in.getline(buffer, 200))
    {
        // pass buffer into string, then into LogEntry
        result.push_back(LogEntry(String(buffer)));
    }
    return result;
}

//////////////////////////////////////////////////////////
// REQUIRES:  ostream, vector of LogEntry objects
// ENSURES:   display all Logentry content to console.
//
void output_all(std::ostream &out, const std::vector<LogEntry> &obj)
{
    // "host             date         time      request                  status bytes"
    // "131.123.472.176  18/Sep/2002  12:05:25  "GET /~darci/ HTTP/1.0"  200    5625"
    //                17|
    out << std::left << std::setw(17) << "host";
    out << std::left << std::setw(13) << "date";
    out << std::left << std::setw(10) << "time";
    out << std::left << std::setw(50) << "requests";
    out << "status  bytes\n";

    for (unsigned i = 0; i < obj.size(); i++)
    {
        out << obj[i] << std::endl;
    }
}

//////////////////////////////////////////////////////////
// REQUIRES:  a list of logentry objects
// ENSURES:   the host displayed one per line for each logentry in obj
//
void by_host(std::ostream &out, const std::vector<LogEntry> &obj)
{
    for (LogEntry items : obj)
    {
        out << items.getHost() << std::endl;
    }
}

//////////////////////////////////////////////////////////
// REQUIRES:  a list of logentry objects
// ENSURES:   the total byte count for the vector obj
//
int byte_count(const std::vector<LogEntry> &obj)
{
    int total = 0;
    for (LogEntry items : obj)
    {
        total += items.getBytes();
    }
    return total;
}
