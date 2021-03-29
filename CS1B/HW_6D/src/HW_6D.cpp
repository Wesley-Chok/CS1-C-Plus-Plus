// Attached: HW_6a, HW_6b, HW_6c, HW_6d, HW_6e
// ============================================================================
// Program: HW_6d
// ============================================================================
// Programmer: Wesley Chok
// Class: CS 1B
// ============================================================================


#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct Cat
{
	char name[30];
	int age;
};
int main()
{
	int i = 0;
	fstream oFile("critters.bin", ios::out | ios::in | ios::binary);

	Cat cat;

	cout << "Enter 3 cat records. " << endl;


	while(i < 3)
	{
		cout << "Enter information about a cat: " << endl;

		cout << "NAME: ";
		cin.getline(cat.name, 30);


		oFile.write(cat.name, sizeof(Cat));

		cat.name[30] =  { '\0' } ;

		cout << "AGE: ";
		cin >> cat.age;
		cin.ignore();


		i++;
	}

	cout << "Record written to file. " << endl;


	system("pause");
	return 0;
}

//// ============================================================================
///* OUTPUT:
///* (Used eclipse and installed the hex editor but it outputted very odd
///*  letters so instead installed a binary editor which seemed to work a
///*  little better. There's still a bit of oddly placed letters but it does
///*  output the names as well as null out characters. Same problem occurs
///*  on 6E)

///* Enter 3 cat records.
///* Enter information about a cat:
///* NAME: Tom
///* AGE: 5
///* Enter information about a cat:
///* NAME: Fluffy
///* AGE: 3
///* Enter information about a cat:
///* NAME: Sweet Pea
///* AGE: 2
///* Record written to file.
///* Press any key to continue . . .
//// ============================================================================
