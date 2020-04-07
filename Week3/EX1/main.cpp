//*****************************************************************
// Author: Shawn Gibbons
// Class: CS206
// Instructor: Dr. Brian Ameling
// Date: March 15, 2020
// Week 1 Assignment 1 Programming Exercise 2
//******************************************************************

#include <iostream>
#include "clockType.h"
#include "extClockType.h"

using namespace std;

int main()
{
	extClockType myClock(5, 4, 30, "EST");
	
	int hours;
	int minutes;
	int seconds;
	string timeZone;
	
	cout << "Current Time:";
	myClock.printTime();  // print the time of myClock
	cout << endl;

	// Set a new time
	cout << "Enter the hours, minutes and "
		 << "seconds and time zone: " ;
		 
	cin >> hours >> minutes >> seconds >> timeZone;
	cout << endl;
	
	//Set the time of myClock using the value of the
	//variables hours, minutes, and seconds
	myClock.setTime(hours, minutes, seconds, timeZone);

	cout << "Current Time is now: ";
	myClock.printTime();	// print the time of myClock
	cout << endl;
	
	// Increment the time of myClock by one second
	myClock.incrementSeconds();
	
	cout << "After incrementing time by "
		 << "one second, current time is: ";
	myClock.printTime();	//print the time of myCloc
	cout << endl;
	
	// Retrieve the hours, minutes and seconds
	cout << "hours = " << hours
		 << ", minutes = " << minutes
		 << ", seconds = " << seconds
		 << ", time zone = " << timeZone << endl;
	
	return 0;
}

