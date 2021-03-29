/*************************************************************
* PROGRAMMED BY : Wesley Chok
* CLASS         : CS1A
* SECTION       : MW 5 - 7:20p
* ASN #8        : Functions and Files
*************************************************************/
#include "Myheader.h"

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
 *
 * PRE-CONDITIONS:
 * 				 The following parameters need to have a defined value prior
 * 				 to calling the function:
 *
 * 				 vector<userInfo>userList : Assignment Name
 * 				 userInput.nameFirst	  : Assignment Name
 * 				 userInput.nameSecond	  : Assignment Name
 * 				 userInput.userID		  : Assignment Name
 * 				 userInput.userBal		  : Assignment Name
 *_____________________________________________________________________________
 *POST-CONDITIONS:
 *				This function will output the class heading
 *****************************************************************************/

void GetInput()
{
	vector<userInfo>userList;

	ifstream readFile;

	string Line, temp;
	string InFile, OFile;

	int lineCount, userCount;

	userInfo userInput;


	lineCount = 0;

	GetScreen(InFile, OFile);

	readFile.open(InFile);

	if(readFile.is_open())
	{
		cout << endl << "Reading records from input file " << InFile << endl;
		while(getline(readFile, Line)){

			lineCount++;
		}
		userCount = lineCount / 2;
		readFile.close();
				readFile.open(InFile);
				for(int i = 0; i < userCount; i++)
				{
					readFile >> userInput.nameFirst;
					readFile >> userInput.nameSecond;
					readFile >> userInput.userID;
					readFile >> userInput.userBal;
					userList.push_back(userInput);
				}

				readFile.close();
				GetOutput(userList, userCount, OFile);

	}
	else
	{
		cout << "Could not open Input file. ";
	}

}


