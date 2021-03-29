// Attached: HW_10a, HW_10b, HW_10c, HW_10d
// ============================================================================
// Program: HW_10c
// ============================================================================
// Programmer: Wesley Chok
// Class: CS 1B
// ============================================================================


#include <iostream>
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;


int main()
{

	const int NUM_EMPLOYEES = 5;

	vector<int>hours(NUM_EMPLOYEES);

	vector<double>wage(NUM_EMPLOYEES);

	cout << "Enter hours worked and hourly wage of each employee:\n\n";

	for(int i = 0; i < hours.size(); i++)
	{
		cout << "Hours for Employee #" << i + 1 << ": ";
		cin >> hours[i];
		hours[i]++;

		cout << "Wage for Employee #" << i + 1 << ": ";
		cin >> wage[i];
		wage[i];

		cout << endl;
	}

	for(int i = 0; i < hours.size(); i++)
	{
		hours[i] = hours[i] - 1;
	}

	system("cls");

	cout << fixed << setprecision(2);

	cout << "Gross pay for each employee:\n\n ";

	for(int j = 0; j < wage.size(); j++)
	{
		cout << setw(11) << "Employee #" << j + 1 << setw(5) << "$"
			 << setw(7) << hours[j] * wage[j] << endl;
	}

	cout << endl;

	cout << "Employee #1 hours = " << hours.front() << endl;

	cout << "Employee #5 hours = " << hours.back() << endl;

	system("pause");
	return 0;
}

//// ============================================================================
///* OUTPUT:
///*
///* Enter hours worked and hourly wage of each employee:
///*
///* Hours for Employee #1: 30
///* Wage for Employee #1: 9
///*
///* Hours for Employee #2: 49
///* Wage for Employee #2: 3
///*
///* Hours for Employee #3: 73
///* Wage for Employee #3: 5
///*
///* Hours for Employee #4: 20
///* Wage for Employee #4: 10
///*
///* Hours for Employee #5: 30
///* Wage for Employee #5: 9
///*
///* Gross pay for each employee:
///*
///*  Employee #1    $ 270.00
///*  Employee #2    $ 147.00
///*  Employee #3    $ 365.00
///*  Employee #4    $ 200.00
///*  Employee #5    $ 270.00
///*
///* Employee #1 hours = 30
///* Employee #5 hours = 30
///* Press any key to continue . . .
//// ============================================================================


