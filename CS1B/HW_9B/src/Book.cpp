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

bool Book::operator> (Book & book)
{
	if (price > book.price)
		return true;
	else
		return false;
}

bool Book::operator==(Book & book)
{
	if (price == book.price)
		return true;
	else
		return false;
}

bool Book::operator> (double amt)
{
	if(this->price > amt)
		return true;
	else
		return false;
}

double Book::operator+ (Book & book)
{
	return (price + book.price);
}

bool Book::operator< (int year)
{
	if(this->year < year)
		return true;
	else
		return false;
}

ostream & operator<< (ostream &outstream, const Book & book)
{
	outstream << "ISBN: " << book.isbn << endl
		   << "Year: " << book.year << endl
		   << "Price: " << book.price << endl;
	return outstream;
}

istream & operator>> (istream &instream, Book & book)
{
	cout << "ISBN: ";
	instream >> book.isbn;

	cout << "Year: ";
	instream >> book.year;

	cout << "Price: ";
	instream >> book.price;

	return instream;
}
