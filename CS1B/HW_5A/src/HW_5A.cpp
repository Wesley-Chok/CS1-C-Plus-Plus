// Attached: HW_5a, HW_5b, HW_5c
// ============================================================================
// Program: HW_5a
// ============================================================================
// Programmer: Wesley Chok
// Class: CS 1B
// ============================================================================


#include <iostream>
using namespace std;

void decToBinary(int userNum);

int main()
{
	int userNum;

	cout << "Enter a non-negative integer value: " << endl;
	cin >> userNum;

	if (userNum >= 0)
	{
		cout << "Decimal " << userNum << " = ";
		decToBinary(userNum);
		cout << " binary. " << endl;
	}
	else
	{
		cout << "Decimal " << userNum << " = " << "Invalid entry binary. "
			 << endl;
	}

	system("pause");

	return 0;
}

void decToBinary(int userNum)
{
	int numRemainder;

	numRemainder = userNum % 2;

	userNum = userNum / 2;

	if(userNum > 0)
	{
		cout << numRemainder;
		decToBinary(userNum);

	}
	else if(userNum == 0)
	{
		cout << numRemainder;
		return;
	}

}

//// ============================================================================
///* OUTPUT:
///* Enter a non-negative integer value:
///* 0
///* Decimal 0 = 0 binary.
///* Press any key to continue . . .

///* Enter a non-negative integer value:
///* 37
///* Decimal 37 = 0100101 binary.
///* Press any key to continue . . .

///* Enter a non-negative integer value:
///* -1
///* Decimal -1 = Invalid entry binary.
///* Press any key to continue . . .
//// ============================================================================
