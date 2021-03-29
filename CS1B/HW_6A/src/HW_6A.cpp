// Attached: HW_6a, HW_6b, HW_6c, HW_6d, HW_6e
// ============================================================================
// Program: HW_6a
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
	int number;

	inFile.open("data.txt");

	if(inFile.is_open())
	{
		cout << "Here are the numbers in the file: " << endl;
		while(!inFile.eof())
		{
			inFile >> number;
			cout << setw(6) << number << endl;
		}
	}
	else
	{
		cout << "Error opening file!" << endl;
	}

	inFile.close();

	system("pause");
	return 0;
}

//// ============================================================================
///* OUTPUT:
///* Here are the numbers in the file:
///*		  3
///*		  4
///*          5
///* Press any key to continue . . .
//// ============================================================================
