/*************************************************************
* PROGRAMMED BY : Wesley Chok
* CLASS         : CS1A
* SECTION       : MW 5 - 7:20p
* ASN #8        : Functions and Files
*************************************************************/
#include "Myheader.h"

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

void GetOutput(vector<userInfo>userList, int userCount, string OFile)
{
	float larBalance;		//
	float smlBalance;

	userInfo userLarge;
	userInfo userSmall;

	ofstream fileOutput;

	float userSum;
	float userAverage;

	userSum = 0;

	larBalance, smlBalance = userList[0].userBal;

    fileOutput.open(OFile);

    if(fileOutput.is_open())
    {
    	fileOutput << "List of Entries: " << endl;

    	fileOutput << "ID #" << setw(9) << "NAME" << setw(31) << "BALANCE DUE"
    			   << endl;
    	fileOutput << "----" << setw(15) << "     --------------------"
    	    	 << setw(5) << "    -----------" << endl;

    	    for(int i = 0; i < userCount; i++)
    	    {
    	    	fileOutput << left << setw(9) << userList[i].userID;
    	    	fileOutput <<  left << setw(24)
    	    		 << userList[i].nameFirst + " " + userList[i].nameSecond
    	    		 << "$" << right << setw(10) << fixed << setprecision(2)
    				 << userList[i].userBal << endl << endl << endl;

    	    	userSum += userList[i].userBal;

    	    	if(larBalance < userList[i].userBal)
    	    	{
    	    		userLarge = userList[i];

    	    		larBalance = userList[i].userBal;
    	    	}
    	    	if(smlBalance > userList[i].userBal)
    	    	{
    	    		userSmall = userList[i];

    	    		smlBalance = userList[i].userBal;
    	    	}

    	    }

    	    cout << "Output records to output file " << OFile << endl << endl;

    	    fileOutput << "Larger Balance: " << endl;

    	    fileOutput << "ID #" << setw(9) << "NAME" << setw(31)
    	    		   << "BALANCE DUE" << endl;
    	    fileOutput << "----" << setw(15) << "     --------------------"
    	         << setw(5) << "    -----------" << endl;

    	    fileOutput << left << setw(9) << userLarge.userID;
    	    fileOutput <<  left << setw(24)
    	         << userLarge.nameFirst + " " + userLarge.nameSecond
    	         << "$" << right << setw(10) << fixed << setprecision(2)
    			 << userLarge.userBal << endl << endl << endl;

    	    cout << "Output records with larger balance! " << endl << endl;


    	    fileOutput << "Smaller Balance: " << endl;

    	    fileOutput << "ID #" << setw(9) << "NAME" << setw(31)
    	    		   << "BALANCE DUE" << endl;
    	    fileOutput << "----" << setw(15) << "     --------------------"
    	         << setw(5) << "    -----------" << endl;

    	    cout << "Output records with smaller balance! " << endl << endl;

    	    fileOutput << left << setw(9) << userSmall.userID;
    	    fileOutput <<  left << setw(24)
    	         << userSmall.nameFirst + " " + userSmall.nameSecond
    	         << "$" << right << setw(10) << fixed << setprecision(2)
    			 << userSmall.userBal << endl << endl << endl;



    	    fileOutput << "Sum of Balance for all persons: " << endl
    	    	 << left << setw(4) << "$" << userSum << endl << endl << endl;

    	    cout << "Output sum of all balances! " << endl << endl;

    	    userAverage = userSum / userCount;

    	    fileOutput << "Average Balance for all persons: " << endl
    	         << left << setw(4) << "$" << fixed << setprecision(2)
    			 << userAverage;

    	    cout << "Output average of all balances! " << endl << endl;

    	    cout << "Thank you for using my program.";
    }
    else
    {
    	cout << "Could not open Output File";
    }



}



