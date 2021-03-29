#include <iostream>
#include "ClockType.h"
using namespace std;

ClockType::ClockType()
{
	hrs = 00;
	mins = 00;
	secs = 00;
}

ClockType::ClockType(int hrs, int mins, int secs)
{
	this->hrs = hrs;
	this->mins = mins;
	this->secs = secs;
}

ClockType::~ClockType(){}

void ClockType::setTime(int hrs, int mins, int secs)
{
	this->hrs = hrs;
	this->mins = mins;
	this->secs = secs;
}

void ClockType::incrementSeconds()
{
	secs++;
}

void ClockType::incrementMinutes()
{
	mins++;
}

void ClockType::printTime()
{
	cout << cout.fill('0') << hrs << ":" <<
			cout.fill('0') << mins << ":" <<
			cout.fill('0') << secs << endl;
}

bool ClockType::areTimesEqual(ClockType other)
{
	if(this->hrs == other.hrs &&
	   this->mins == other.mins &&
	   this->secs == other.secs)
	{
		cout << "The time of my clock and your clock are equal " << endl
			 << endl;
		return true;
	}
	else
	{
		cout << "The time of my clock and your clock are not equal " << endl
			 << endl;
		return false;
	}
}


