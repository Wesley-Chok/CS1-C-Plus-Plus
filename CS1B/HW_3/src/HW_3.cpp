// Attached: HW_3
// ============================================================================
// Program: HW_3
// ============================================================================
// Programmer: Wesley Chok
// Class: CS 1B
// ============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

struct Time
{
	int hours;
	int minutes;
	int seconds;
};

void getTime(Time *time);
bool isTimeValid(Time *time);
void addOneSecond(Time *time);
void displayTime(Time *time);

const int MAX_HOURS = 23;
const int MAX_MINS = 59;
const int MAX_SECS = 59;
int main()
{
	Time time;

	char userChoice;

	do
	{
	system("CLS");
	getTime(&time);
	addOneSecond(&time);
	displayTime(&time);


	cout << "Do it again? (Y/N)";
	cin >> userChoice;

	cout << endl << endl;

	}while(userChoice != 'N' && userChoice != 'n');

	return 0;
}

void getTime(Time *time)
{
	do
	{

	cout << "Enter the time in \"military time\", (24-hour format), in the "
		 <<	endl << "following order: HH:MM:SS, (Hours, Minutes, Seconds)."
		 << endl << endl;

	cout << "Hours: ";
	cin >> time->hours;

	cout << "Minutes: ";
	cin >> time->minutes;

	cout << "Seconds: ";
	cin >> time->seconds;

	cout << endl;

	}while(isTimeValid(time) != true);


}

bool isTimeValid(Time *time)
{
	if ((time->hours >= 0) && (time->hours <= MAX_HOURS) &&
		(time->minutes >= 0) && (time->minutes <= MAX_MINS) &&
		(time->seconds >= 0) && (time->seconds <= MAX_SECS))
	{
		return true;
	}
	else
	{
		cout << "Invalid Time" << endl << endl;
		return false;
	}
}

void addOneSecond(Time *time)
{
	time->seconds++;

	if(time->seconds > MAX_SECS)
	{
		time->seconds = 0;
		time->minutes++;
	}

	if(time->minutes > MAX_MINS)
	{
		time->minutes = 0;
		time->hours++;
	}

	if(time->hours > MAX_HOURS)
	{
		time->hours = 0;
	}
}

void displayTime(Time *time)
{
	if(isTimeValid(time) != false)
		{
			cout << "After adding one second, the time is " << setw(2)
				 << cout.fill('0') << time->hours << ":" << setw(2)
				 << time->minutes << ":" << setw(2) << time->seconds << "."
				 << endl << endl;
		}
		else
		{
			cout << "Invalid Time" << endl << endl;
		}
}
//// ============================================================================
///* OUTPUT # 1:
//* Enter the time in "military time", (24-hour format), in the
//* following order: HH:MM:SS, (Hours, Minutes, Seconds).
//*
//* Hours: 14
//* Minutes: 44
//* Seconds: 22
//*
//* After adding one second, the time is 0 14:44:23.
//*
//* Do it again? (Y/N)y
//*
//*  OUTPUT #2:
//* Enter the time in "military time", (24-hour format), in the
//* following order: HH:MM:SS, (Hours, Minutes, Seconds).
//*
//* Hours: 1
//* Minutes: 9
//* Seconds: 59
//*
//* After adding one second, the time is 001:10:00.
//*
//* Do it again? (Y/N)y
////  ===========================================================================
//*  OUTPUT #3:
//*Enter the time in "military time", (24-hour format), in the
//*following order: HH:MM:SS, (Hours, Minutes, Seconds).
//*
//* Hours: 21
//* Minutes: 59
//* Seconds: 59
//*
//* After adding one second, the time is 0022:00:00.
//*
//* Do it again? (Y/N)y
////  ===========================================================================
//*  OUTPUT #4:
//* Enter the time in "military time", (24-hour format), in the
//* following order: HH:MM:SS, (Hours, Minutes, Seconds).
//*
//* Hours: 23
//* Minutes: 59
//* Seconds: 59
//*
//* After adding one second, the time is 000:00:00.
//*
//* Do it again? (Y/N)y
////  ===========================================================================
//*  OUTPUT #5:
//* Enter the time in "military time", (24-hour format), in the
//* following order: HH:MM:SS, (Hours, Minutes, Seconds).
//*
//* Hours: 27
//* Minutes: 23
//* Seconds: 11
//*
//* Invalid Time
//*
//* Enter the time in "military time", (24-hour format), in the
//* following order: HH:MM:SS, (Hours, Minutes, Seconds).
//// ============================================================================
