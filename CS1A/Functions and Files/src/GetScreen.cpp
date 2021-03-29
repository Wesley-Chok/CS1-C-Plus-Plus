/*************************************************************
* PROGRAMMED BY : Wesley Chok
* CLASS         : CS1A
* SECTION       : MW 5 - 7:20p
* ASN #8        : Functions and Files
*************************************************************/
#include "Myheader.h"
/******************************************************************************
 * FUNCTION GetScreen
 * ____________________________________________________________________________
 *
 * This function question the user of which file to use.
 * ____________________________________________________________________________
 *
 * PRE-CONDITIONS:
 * 				 InFile - ASSIGNMENT NAME
 * 				 OFile  - ASSIGNMENT NAME
 *_____________________________________________________________________________
 *POST-CONDITIONS:
 *				This function will output the class heading
 *****************************************************************************/

void GetScreen(string &InFile, string &OFile)
{
	cout << "What input file would you like to use?  ";
	cin >> InFile;

	cout << "What output file would you like to use? ";
	cin >> OFile;



}
