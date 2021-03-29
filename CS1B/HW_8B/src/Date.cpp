#include "Date.h"

Date::Date()
{
	int _month = 0;
	int _day = 0;
	int _year = 0;
}

Date::Date(int month, int day, int year)
{
	_month = month;
	_day = day;
	_year = year;
}

Date::~Date(){}

void Date::setDate(int month, int day, int year)
{
	this->_month = month;
	this->_day = day;
	this->_year = year;
}

void Date::displayDate()
{
	cout << "Birth Date: " << _month << "/" << _day << "/" << _year << endl;
}
