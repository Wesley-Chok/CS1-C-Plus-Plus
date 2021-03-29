// Attached: HW_7a, HW_7b
// ============================================================================
// Program: HW_7b
// ============================================================================
// Programmer: Wesley Chok
// Class: CS 1B
// ============================================================================


#include <iostream>
#include "ClockType.h"
using namespace std;

int main()
{
	ClockType myClock(3, 30, 0);
	ClockType yourClock(10, 0, 15);
	ClockType myOtherClock(0, 0, 0);


	cout << "The time on my clock is: ";
	myClock.printTime();

	cout << endl;

	cout << "The time on your clock is: ";
	yourClock.printTime();

	cout << endl;

	myClock.areTimesEqual(yourClock);


	cout << "The time on my other clock is: ";
	myOtherClock.printTime();

	cout << endl;


	cout << "I am going to add 1 minute and 1 "
		 << endl <<	"second to my other clock " << endl;

	cout << "The time on my other clock is: ";
	myOtherClock.incrementSeconds();
	myOtherClock.incrementMinutes();
	myOtherClock.printTime();

	return 0;
}

//// ============================================================================
///* OUTPUT:
///* The time on my clock is: 03:30:00

///* The time on your clock is: 10:00:15

///* The time of my clock and your clock are not equal

///* The time on my other clock is: 00:00:00

///* I am going to add 1 minute and 1
///* second to my other clock
///* The time on my other clock is: 00:01:01
//// ============================================================================
