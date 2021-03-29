// Attached: HW_5a, HW_5b, HW_5c
// ============================================================================
// Program: HW_5b
// ============================================================================
// Programmer: Wesley Chok
// Class: CS 1B
// ============================================================================

#include <iostream>
using namespace std;

const int SIZE = 10;

void showEvens(int index, int values[]);

int main()
{
	int index = 0;
	int values[SIZE] = {2, 5, 7, 8, 11, 14, 17, 18, 22, 23};

	showEvens(index, values);

	cout << endl << endl;

	return 0;
}

void showEvens(int index, int values[])
{
	if(index != SIZE)
	{
		if(values[index] % 2 == 0)
		{
			cout << values[index] << endl;
		}
		index+= 1;
		showEvens(index, values);
	}
	else
	{
		return;
	}

}

//// ============================================================================
///* OUTPUT:
///* 2
///* 8
///* 14
///* 18
///* 22

//// ============================================================================
