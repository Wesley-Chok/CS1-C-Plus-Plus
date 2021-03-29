// Attached: HW_6a, HW_6b, HW_6c, HW_6d, HW_6e
// ============================================================================
// Program: HW_6e
// ============================================================================
// Programmer: Wesley Chok
// Class: CS 1B
// ============================================================================
#include <iostream>
#include <iomanip>
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

	Cat cat[4];

	fstream oFile("critters.bin", ios::out | ios::in | ios::binary);

	cout << "Enter 3 cat records. " << endl;



	while(i < 3)
	{
		cout << "Enter information about a cat: " << endl;

		cout << "NAME: ";
		cin.getline(cat[i].name, 30);

		oFile.write(cat[i].name, sizeof(Cat));

		cat[i].name[30] =  { '\0' } ;

		cout << "AGE: ";
		cin >> cat[i].age;
		cin.ignore();


		i++;
	}

	cout << "Record written to file. " << endl << endl;

	cout << "Enter one more cat " << endl;

	cout << "NAME:";
	cin.getline(cat[3].name, 30);

	cat[3].name[30] = { '\0' };

	cout << "AGE: ";
	cin >> cat[3].age;
	cin.ignore();

	oFile.write(cat[3].name, sizeof(Cat));


	oFile.seekg(0, ios::beg);
	oFile.read(cat[3].name, sizeof(Cat));

	i = 0;

	while(i < 4)
	{
		cout << setw(10) << left << cat[i].name << setw(10) << cat[i].age
			 << endl;

		i++;
	}


	system("pause");
	return 0;
}

//// ============================================================================
///* OUTPUT:
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
///*
///* Enter one more cat
///* NAME:Jasmin
///* AGE: 4
///* Tom       5
///* Fluffy    3
///* Sweet Pea 2
///* Tom       4
///* Press any key to continue . . .
//// ============================================================================
