#include "Book.h"

int Book::bookCount = 0;

Book::Book()
{
	string isbn = "";
	int year = 0;
	double price = 0;
}

Book::Book(string isbn, int year, double price)
{
	this->isbn = isbn;
	this->year = year;
	this->price = price;
	bookCount++;
}

Book::~Book(){}

void Book::displayBook()
{
	cout << "ISBN: " << isbn << endl;
	cout << "Year: " << year << endl;
	cout << "Price: " << price << endl << endl;
}

int Book::getCount()
{
	return bookCount;
}

