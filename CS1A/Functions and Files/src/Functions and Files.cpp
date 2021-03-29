#include "Myheader.h"
/******************************************************************************
 * LAB #12 - Functions and Files
 * ----------------------------------------------------------------------------
 * This program will output the class heading
 * ----------------------------------------------------------------------------
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
	 * ASN_NUM    : 8
	 * ASN_NAME   : Arrays in C++
	 *************************************************************************/
    const char  PROGRAMMER[]  = "Wesley Chok";
    const char  CLASS[]       = "CS1A";
    const char  SECTION[]     = "MW 5 - 7:20p";
    const int   ASN_NUM       = 8;
    const char  ASN_NAME[]    = "Functions and Files";

    //OUTPUT - Class Heading
    cout << left;
    cout << "*************************************************************\n";
    cout << "* PROGRAMMED BY : " << PROGRAMMER << endl;
    cout << "* "      << setw(14) << "CLASS"    << ": " << CLASS    << endl;
    cout << "* "      << setw(14) << "SECTION"  << ": " << SECTION  << endl;
    cout << "* LAB #" << setw(9)  << ASN_NUM    << ": " << ASN_NAME << endl;
    cout << "*************************************************************\n\n";
    cout << right;


	/**************************************************************************
    * INPUT - calls a function from the header file (GetInput)
	**************************************************************************/

    GetInput();
    return 0;
}




