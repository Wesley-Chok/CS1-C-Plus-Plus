
#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

/******************************************************************************
 * LAB #8 - C++ INPUT AND OUTPUT
 * ----------------------------------------------------------------------------
 * This program will output the class heading
 * ----------------------------------------------------------------------------
 * INPUT:
 *     firstNum 		- first value to be summed.
 *     secondNum		- second value to be summed.
 *
 * OUTPUT:
 * 	   sum 				- the sum of the two values inputed.
 *****************************************************************************/
int main()
{
	/**************************************************************************
	 * CONSTANT
	 * ------------------------------------------------------------------------
	 * OUTPUT - USED FOR CLASS HEADING
	 * ------------------------------------------------------------------------
	 * PROGRAMMER : Wesley Chok
	 * CLASS      : CS 1A
	 * SECTION    : MW 5p - 7:20p
	 * LAB_NUM    : 9
	 * LAB_NAME   : C++ Selection
	 *************************************************************************/
    const char PROGRAMMER[] = "Wesley Chok";
    const char CLASS[]      = "CS1A";
    const char SECTION[]    = "MW 5 - 7:20p";
    const int  LAB_NUM      = 9;
    const char LAB_NAME[]   = "C++ Selection";

    float numValue;		//	IN, CALC, & OUT - numerical value
	float bigValue;		//  OUT				- greatest numerical value

    int numCount;		//  CALC 			- number of values inputed
    int serCount; 		//  CALC			- number of series total


    numCount = 0;
    serCount = 0;

    //OUTPUT - Class Heading
    cout << left;
    cout << "*************************************************************\n";
    cout << "* PROGRAMMED BY : " << PROGRAMMER << endl;
    cout << "* "      << setw(14) << "CLASS"    << ": " << CLASS    << endl;
    cout << "* "      << setw(14) << "SECTION"  << ": " << SECTION  << endl;
    cout << "* LAB #" << setw(9)  << LAB_NUM    << ": " << LAB_NAME << endl;
    cout << "*************************************************************\n\n";
    cout << right;

for(serCount = 1; serCount <= 3; serCount = serCount + 1)
{
		bigValue = 0;

   for(numCount = 1; numCount <= 5; numCount = numCount + 1)
    {
		/*********************************************************************
		 * INPUT
		 * Takes the user's name, age and chocolate preference
		 *********************************************************************/

		cout << "Input the number " << numCount << ": ";
		cin >> numValue;

		/**********************************************************************
		 * PROCESSING - uses the user's inputted preferences and age to get the
		 * 				beverage and snack choices
		 *********************************************************************/
		{
			if(numValue >= bigValue)
				bigValue = numValue;
		}
	}
		/**********************************************************************
		 * OUTPUT - describes to the viewer what the user should be served
		 *********************************************************************/
   cout << endl << "The large number is: " << bigValue << endl << endl;
}
    return 0;
}




