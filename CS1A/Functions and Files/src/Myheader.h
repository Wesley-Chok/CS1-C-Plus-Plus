/*************************************************************
* PROGRAMMED BY : Wesley Chok
* CLASS         : CS1A
* SECTION       : MW 5 - 7:20p
* ASN #8        : Functions and Files
*************************************************************/

#ifndef MYHEADER_H_
#define MYHEADER_H_
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

struct userInfo{
	string nameFirst;			// first name of the guest.
	string nameSecond;			// second name of the guest.
	string userID;				// ID number of the guest.
	float userBal;				// amount of money the user possesses.


};
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

void GetScreen(string&, string&);

/******************************************************************************
 * FUNCTION GetInput
 * ____________________________________________________________________________
 *
 * This function uses a vector to determines the number of lines in the file,
 * opens the file, increments by one line, divides the line count by 2 to
 * determine the user count, closes then opens another file, and sets the
 * first name, second name, user ID and balance, closes the file then calls
 * the GetOutput function.
 * ____________________________________________________________________________
 * ***************************************************************************/

void GetInput();

/******************************************************************************
 * FUNCTION GetOutput
 * ____________________________________________________________________________
 *
 * This function uses a vector which determines the user balance, name and ID
 * and then outputs it onto a file.
 * ____________________________________________________________________________
 *
 * PRE-CONDITIONS:
 * 				 The following parameters need to have a defined value prior
 * 				 to calling the function:
 *
 * 				 userInput.nameFirst	  : Assignment Name
 * 				 userInput.nameSecond	  : Assignment Name
 * 				 userInput.userID		  : Assignment Name
 * 				 userInput.userBal		  : Assignment Name
 *_____________________________________________________________________________
 *POST-CONDITIONS:
 *				This function will output the class heading
 *****************************************************************************/

void GetOutput(vector<userInfo>, int, string);



#endif /* MYHEADER_H_ */
