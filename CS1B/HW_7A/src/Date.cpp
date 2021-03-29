#include <iostream>
#include <iomanip>
#include "Date.h"
using namespace std;

Date::Date()
{
	month = 0;
	day = 0;
	year = 0;
}

Date::Date(int month, int day, int year)
{
	if(month > 12 && month < 0)
	{
		this->month = 12;
	}
	else
	{
		this->month = 12;
	}

	if(day > 30 && day< 0)
	{
		this->day = 30;
	}
	else
	{
		this->day = day;
		this->year = year;
	}
}

Date::~Date(){}

void Date::setDate(int month, int day, int year)
{
	if(month > 12 && month < 0)
	{
		this->month = 12;
	}
	else
	{
		this->month = month;
	}

	if(day > 30 && day < 0)
	{
		this->day = 30;
	}
	else
	{
		this->day = day;
		this->year = year;
	}
}

void Date::addDays(int day)
{
	this->day = this->day + day;

	if(this->day > 30)
	{
		this->day = this->day - day;
		this->month = this->month + 1;
		this ->day = 1;
	}

	if(this->month>12)
	{
		this->year = this->year + 1;
		this->month = 1;
	}
}

void Date::displayDate()
{
	char *monthName[] = {"null", "January" , "February", "March", "April", "May"
						  "June", "July", "August", "September", "October",
						  "November","December"};

	cout << monthName[month] << right << setw(3) << day << "," << year << endl;

}
