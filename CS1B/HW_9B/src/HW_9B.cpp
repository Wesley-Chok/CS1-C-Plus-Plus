// Attached: HW_9A, HW_9B
// ============================================================================
// Program: HW_9B
// ============================================================================
// Programmer: Wesley Chok
// Class: CS 1B
// ============================================================================
#include "Book.h"

int main()
{
	Book b1("0-12345-9", 1990, 12.50);
	Book b2("0-54321-9", 2001, 7.75);
	Book b3;
	double avg;

	cout << "Here is book #1:\n";
	b1.displayBook();

	cout << "Here is book #2:\n";
	b2.displayBook();

	cout << "There are " << b1.getCount() << " books.\n\n";

	if (b1 > b2)
		cout << "Book #1 has a higher price.\n\n";
	else
		cout << "Book #1 does not have a higher price.\n\n";


	if (b1 == b2)
		cout << "Same price.\n\n";
	else
		cout << "Not the same price.\n\n";


	if (b2 > 10.00)
		cout << "The price is more than $10.00.\n\n";
	else
		cout << "The price is not more than $10.00.\n\n";


	avg = (b1 + b2) / 2.0;


	cout << "The average book price is " << avg << ".\n\n";


	if (b1 < 2000)
		cout << "The book was published before 2000.\n\n";
	else
		cout << "The book was not published before 2000.\n\n";


	cout << b1;

	cout << "\nEnter Book #3 information.\n";
	cin >> b3;


	cout << "\nHere is what you entered for Book #3:\n";
	cout << b3;

	return 0;
}


//// ============================================================================
///* OUTPUT:
///* Here is book #1:
///* ISBN: 0-12345-9
///* Year: 1990
///* Price: 12.5
///*
///* Here is book #2:
///* ISBN: 0-54321-9
///* Year: 2001
///* Price: 7.75
///*
///* There are 2 books.
///*
///* Book #1 has a higher price.
///*
///* Not the same price.
///*
///* The price is not more than $10.00.
///*
///* The average book price is 10.125.
///*
///* The book was published before 2000.
///*
///* ISBN: 0-12345-9
///* Year: 1990
///* Price: 12.5
///*
///* Enter Book #3 information.
///* ISBN: 0-98765-9
///* Year: 2004
///* Price: 5.75
///*
///* Here is what you entered for Book #3:
///* ISBN: 0-98765-9
///* Year: 2004
///* Price: 5.75
//// ============================================================================
