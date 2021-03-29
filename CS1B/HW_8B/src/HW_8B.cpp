// Attached: HW_8a, HW_8b, HW_8c
// ============================================================================
// Program: HW_8b
// ============================================================================
// Programmer: Wesley Chok
// Class: CS 1B
// ============================================================================

#include "FamousPeople.h"

int main()

{
	FamousPeople arraySize[3];
	string name;
	string quote;
	int month;
	int day;
	int year;

	for(int i = 1; i < 4; i++)
	{
		FamousPeople object;

		if (i == 1)
		{
			cout << "Enter the first famous person: ";
		}

		if (i == 2)
		{
			cout << "Enter the second famous person: ";
		}

		if (i == 3)
		{
			cout << "Enter the third famous person: ";
		}

		cin >> name;
		object.setName(name);

		cout << endl;

		cin.ignore();

		cout << "Enter the quotation: " << endl;
		getline(cin, quote);
		object.setQuote(quote);

		cout << endl;

		cout << "Enter the birthdate: " << endl;

		cout << "Month: ";
		cin >> month;

		cout << "Day: ";
		cin >> day;

		cout << "Year: ";
		cin >> year;

		object.setDate(month, day, year);

		arraySize[i-1] = object;

		cout << endl;

	}

	cout << "Here are the famous people: " << endl;

	for(int j = 1; j < 4; j++)
	{
		arraySize[j-1].displayPerson();

		arraySize[j-1].displayDate();

		cout << "Enter the quotation: " << endl;

		cout << arraySize[j-1]._quote;

		cout << endl << endl;
	}

	system("pause");
	return 0;
}

//// ============================================================================
///* OUTPUT:
///* Enter the first famous person: DaVinci
///*
///* Enter the quotation:
///* I have from an early age abjured the use of meat, and the time will come
///* when men such as I will look upon the murder of animals as they now look
///* upon the murder of men.
///*
///* Enter the birthdate:
///* Month: 4
///* Day: 15
///* Year: 1452
///*
///* Enter the second famous person: Einstein
///*
///* Enter the quotation:
///* The pioneers of a warless world are the youth who
///* refuse military service.
///*
///* Enter the birthdate:
///* Month: 3
///* Day: 14
///* Year: 1879
///*
///* Enter the third famous person: Hitler
///*
///* Enter the quotation:
///* What luck for the rulers that men do not think.
///*
///* Enter the birthdate:
///* Month: 4
///* Day: 20
///* Year: 1889
///*
///* Here are the famous people:
///*
///* Name: DaVinci
///* Birth Date: 4/15/1452
///* Enter the quotation:
///* "I have from an early age abjured the use of meat, and the time will come
///* when men such as I will look upon the murder of animals as they
///* now look upon the murder of men."
//
///* Name: Einstein
///* Birth Date: 3/14/1879
///* Enter the quotation:
///* "The pioneers of a warless world are the youth who refuse military
///* service."
///*
///* Name: Hitler
///* Birth Date: 4/20/1889
///* Enter the quotation:
///* "What luck for the rulers that men do not think."
///*
///* Press any key to continue . . .
//// ============================================================================
