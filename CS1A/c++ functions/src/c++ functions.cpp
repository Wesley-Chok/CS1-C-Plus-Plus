#include "myheader.h"
/******************************************************************************
 * LAB #12 - C++ Functions
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
	 * LAB_NUM    : 12
	 * ASN_NAME   : C++ Functions
	 *************************************************************************/
    const char  PROGRAMMER[]  = "Wesley Chok & Zaid Khan";
    const char  CLASS[]       = "CS1A";
    const char  SECTION[]     = "MW 5 - 7:20p";
    const int   LAB_NUM       = 12;
    const char  LAB_NAME[]    = "C++ Functions";

    //OUTPUT - Class Heading
    cout << left;
    cout << "*************************************************************\n";
    cout << "* PROGRAMMED BY : " << PROGRAMMER << endl;
    cout << "* "      << setw(14) << "CLASS"    << ": " << CLASS    << endl;
    cout << "* "      << setw(14) << "SECTION"  << ": " << SECTION  << endl;
    cout << "* LAB #" << setw(9)  << LAB_NUM    << ": " << LAB_NAME << endl;
    cout << "*************************************************************\n\n";
    cout << right;


	/**************************************************************************
    * INPUT - calls a function from the header file (validateInput())
	**************************************************************************/

    validateInput();




	/**************************************************************************
	* PROCESSING -
	**************************************************************************/





	/**************************************************************************
	* OUTPUT -
	**************************************************************************/
    return 0;
}




