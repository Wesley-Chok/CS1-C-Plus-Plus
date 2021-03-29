// Attached: HW_6a, HW_6b, HW_6c, HW_6d, HW_6e
// ============================================================================
// Program: HW_6c
// ============================================================================
// Programmer: Wesley Chok
// Class: CS 1B
// ============================================================================


#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
	ifstream inFile;
	ofstream oFile;
	int number;
	int userNum;

	inFile.open("data.txt");
	oFile.open("results.txt", ios::app);



	if(inFile.is_open())
	{
		cout << "Here are the numbers in the file: " << endl;

		while(!inFile.eof())
		{
			inFile >> number;
			cout << number << endl;

			if(!oFile.eof())
			{
				oFile << number << endl;
			}

		}

		cout << "Enter 3 more numbers: " << endl;

		for(int i = 0; i < 3; i++)
		{
			cin >> userNum;
			oFile << userNum << endl;
		}

		cout << "The numbers have been written (appended) to results.txt "
			 << endl << endl;
	}
	else
	{
		cout << "Error opening file! " << endl;
	}

	inFile.close();
	system("pause");
	return 0;
}

//// ============================================================================
///* OUTPUT:
///* Here are the numbers in the file:
///* 3
///* 4
///* 5
///* Enter 3 more numbers:
///* 6
///* 7
///* 8
///* The numbers have been written (appended) to results.txt
///*
///* Press any key to continue . . .
//// ============================================================================
