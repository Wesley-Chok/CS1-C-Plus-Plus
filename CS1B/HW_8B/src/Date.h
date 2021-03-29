#ifndef DATE_H_
#define DATE_H_

#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

class Date
{
private:
	int _month;
	int _day;
	int _year;

public:

	Date();

	Date(int month, int day, int year);

	~Date();

	void setDate(int month, int day, int year);

	void displayDate();

};



#endif
