//? EXERCISE 3: STRING MANIPULATIONS
//? file: custom_string.cpp

//!----------------------------------------------------------------------------------------
//! This is the only file that you will need to modify in this exercise.
//! Also, you will submit only this file.
//! This file is the implementation for the class CustomString.
//!----------------------------------------------------------------------------------------

// Programming Technique II
// Semester 2, 2021/2022

// Section: 01
// Member 1's Name: CHERYL CHEONG KAH VOON (A23CS0060)   Location: ____________ (i.e. where are you currently located)
// Member 2's Name: _____________    Location: ____________

// Log the time(s) your pair programming sessions
//  Date         Time (From)   To             Duration (in minutes)
//  15/5/2024    ___________   ___________    ________
//  _________    ___________   ___________    ________
//  _________    ___________   ___________    ________

// Video link:
//   _________



#include <iostream>
#include <string>
using namespace std;

#include "custom_string.hpp"

//?----------------------------------------------------------------------------------------
//? The following methods are fully given: a constructor, getData() and setData()
//?----------------------------------------------------------------------------------------

CustomString::CustomString(const string &_data) : data(_data) {}
string CustomString::getData() const { return data; }
void CustomString::setData(const string &_data) { data = _data; }

//! Task 1: Complete the implementation of the following mutator methods:
//!        (a) pushFront()
//!        (b) pushBack()
//!        (c) pop()
//!        (d) popFront()
//!        (e) popBack()

void CustomString::pushFront(const string &s)
{    
	data.insert(0, s);
}

void CustomString::pushBack(const string &s)
{
	    data.append(s);
}

string CustomString::pop(int index, int count)
{
	string temp = data.substr(index, count);
    data.erase(index, count);
    return temp;
}

string CustomString::popFront(int count)
{
    return pop(0, count);
}

string CustomString::popBack(int count)
{
    return pop(data.size() - count, count);
}

//! Task 2: Complete the implementation of the following overloaded operators:
//!        (a) operator !
//!        (b) operator *

CustomString CustomString::operator!() const
{
    string tmp = data;
    int len = data.size();
    for (int i = 0, j = len - 1; i < len; i++, j--)
        tmp[j] = data[i];

    return CustomString(tmp);
}

CustomString CustomString::operator*(int count) const
{
   string tmp = "";
    int length = data.size();
    for (int i = 0; i < count; i++) {
        tmp += data;
        //if (i < count - 1) // Add space after every repetition except the last one
            //tmp += " ";
    }
    return CustomString(tmp);
}

//! Task 3: Complete the implementation of the following conversion methods:
//!        (a) toDouble()
//!        (b) toUpper()

double CustomString::toDouble() const
{
    return stod(data);
}

CustomString CustomString::toUpper() const
{
    string temp=data;
    for(int i=0;i<temp.size();i++){
    	temp[i]=toupper(temp[i]);}
	return CustomString(temp);
}