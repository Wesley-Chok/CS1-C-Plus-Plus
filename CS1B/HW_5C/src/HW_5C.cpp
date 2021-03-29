// Attached: HW_5a, HW_5b, HW_5c
// ============================================================================
// Program: HW_5c
// ============================================================================
// Programmer: Wesley Chok
// Class: CS 1B
// ============================================================================

#include <iostream>
#include <stdio.h>
using namespace std;

void showInUpper(int index, char alphabet[]);

const int SIZE = 27;

int main()
{

	int index = 0;
	char alphabet[SIZE] = "abcdefghijklmnopqrstuvwxyz";
	showInUpper(index, alphabet);

	cout << endl << endl;
	return 0;
}
void showInUpper(int index, char alphabet[])
{
	if(index != SIZE)
	{
		(char)putchar(toupper( alphabet[index] ));
		index+=1;

		showInUpper(index, alphabet);
	}
	else
	{
		return;
	}
}

//// ============================================================================
///* OUTPUT:
///* ABCDEFGHIJKLMNOPQRSTUVWXYZ-
//// ============================================================================
