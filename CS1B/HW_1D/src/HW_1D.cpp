// Attached:
// ============================================================================
// Program: HW_1d
// ============================================================================
// Programmer: Wesley Chok
// Class: CS 1B
// ============================================================================

#include <iostream>

using namespace std;

int main()
{
	int userInput;

	const int SIZE = 5;
	int idNumbers[SIZE] = {1, 2, 3, 4, 5};

	cout << "Enter an ID number to be searched: " << endl;
	cin >> userInput;

	for(int i = 0; i < SIZE; i++)
	{
	if(idNumbers[i] == userInput)
	{
		cout << "The number " << userInput << " exists!" << endl;
		cout << "The index number is found at " << i + 1<< endl;
	}
	}

	return 0;
}

//// ============================================================================
///* OUTPUT:
// *Enter an ID number to be searched:
// *1
// *The number 1 exists!
// *The index number is found at 1
// *
//// ============================================================================
