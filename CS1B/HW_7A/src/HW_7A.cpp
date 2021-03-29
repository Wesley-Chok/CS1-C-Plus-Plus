// Attached: HW_7a, HW_7b
// ============================================================================
// Program: HW_7a
// ============================================================================
// Programmer: Wesley Chok
// Class: CS 1B
// ============================================================================

#include <iostream>
#include "Date.h"
using namespace std;

int main()
{
	int day;
	int month;
	int year;

	Date today(7, 17, 2019);

	cout << "Today's Date is ";

	today.displayDate();

	Date payDay;

	cout << "Please enter the month, day and year " << endl;
	cin >> month >> day >> year;

	payDay.setDate(month, day, year);

	cout << endl;

	cout << "Date of pay day: " << endl;

	payDay.displayDate();

	payDay.addDays(7);

	cout << endl;

	cout << "Adding one week (7 days) " << endl;

	payDay.displayDate();

	system("pause");
	return 0;
}

//// ============================================================================
///* OUTPUT:
///* Today's Date is July 17,2019
///* Please enter the month, day and year
///* 7 17 2019
///*
///* Date of pay day:
///* August 17,2019
///*
///* Adding one week (7 days)
///* August 24,2019
///* Press any key to continue . . .
//// ============================================================================
