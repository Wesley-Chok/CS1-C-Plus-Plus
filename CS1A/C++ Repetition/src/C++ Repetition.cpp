
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

/******************************************************************************
 * LAB #10 - C++ Repetition
 * ----------------------------------------------------------------------------
 * This program will output the class heading
 * ----------------------------------------------------------------------------
 * INPUT:
 *     numGuess	   - the number value the user inputs.
 *     numRandom   - the number value that is randomized by the computer.
 *****************************************************************************/
int main()
{
	/**************************************************************************
	 * CONSTANT
	 * ------------------------------------------------------------------------
	 * OUTPUT - USED FOR CLASS HEADING
	 * ------------------------------------------------------------------------
	 * PROGRAMMER : Wesley Chok & Zaid Khan
	 * CLASS      : CS 1A
	 * SECTION    : MW 5p - 7:20p
	 * LAB_NUM    : 9
	 * ASN_NAME   : C++ Selection
	 *************************************************************************/
    const char  PROGRAMMER[]  = "Wesley Chok & Zaid Khan";
    const char  CLASS[]       = "CS1A";
    const char  SECTION[]     = "MW 5 - 7:20p";
    const int   LAB_NUM       = 10;
    const char  LAB_NAME[]    = "C++ Repetition";


    float numGuess;			// IN, CALC, OUT 	- the number that the user
    						//					  guesses.
    float numRandom;		// CALC & OUT		- the number that is being
    						//					  randomly generated.

    bool isGuessedRight;	// IN, CALC, OUT	- value to determine if the
    						//					  guessed value is equivalent
    						//					  to the random number is true.

    //OUTPUT - Class Heading
    cout << left;
    cout << "*************************************************************\n";
    cout << "* PROGRAMMED BY : " << PROGRAMMER << endl;
    cout << "* "      << setw(14) << "CLASS"    << ": " << CLASS    << endl;
    cout << "* "      << setw(14) << "SECTION"  << ": " << SECTION  << endl;
    cout << "* LAB #" << setw(9)  << LAB_NUM    << ": " << LAB_NAME << endl;
    cout << "*************************************************************\n\n";
    cout << right;

    cout << "Let's play the number guessing game! " << endl;
	/**************************************************************************
    * INPUT - reads in an input (numGuess).
	**************************************************************************/

    srand (time(NULL));


    numRandom = rand() % 100;

    do {
    	cout << "Enter an integer greater than or equal to 0 and less than "
    			 << "100: ";
    		cin >> numGuess;

	/**************************************************************************
	* PROCESSING - calculates two variables (numGuess and numRandom).
	* 			   Determines if numGuess is less than, greater than, or equal
	* 			   to numRandom. Also determines if numRandom makes the boolean
	* 			   expression (isGuessedRight) true.
	**************************************************************************/
    cout << numRandom << endl;
    if(numGuess < 0 || numGuess > 100)
    {
    	cout << "Please enter again, an integer greater than or equal to 0 "
    		 << "and less than 100!" << endl << endl;
    }
    else {
    	 if(numGuess > numRandom)
    	    {
    	    	cout << "Your guess is higher than the number. " << endl << endl;
    	    }
    	    else if(numGuess < numRandom)
    	    {
    	    	cout << "Your guess is lower than the number. " << endl << endl;
    	    }
    	    else
    	    {
    	    	cout << "Your guess the correct number, Congratulations!"
    	    	     << endl << endl;
    	    	isGuessedRight = true;
    	    }

    	}

    } while(isGuessedRight != true);



	/**************************************************************************
	* OUTPUT - outputs the sum (total) and the average (totAverage).
	*
	* 		TEST CASE #1:
	*
	* 		Welcome to the Banquet Planner! Please input each guest's
	* 		information.
	*
	*		Guest # 1:
	*		What is your guest's name?             Austin Vaday
	*		Vegetarian (Y/N)?                      N
	*		Does he/she like red meat (Y/N)?       Y
	*		Alcoholic beverage (Y/N)?              Y
	*		Does he/she like red wine (Y/N)?       Y
	*
	*		Austin Vaday will be having Roasted Prime Rib with Red Wine for
	*		dinner!
	*
	**************************************************************************/
    cout << "Thank you for playing the number guessing game!";
    return 0;
}




