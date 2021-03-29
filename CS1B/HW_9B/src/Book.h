#ifndef BOOK_H_
#define BOOK_H_

#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
	string isbn;
	int year;
	double price;
	static int bookCount;

public:
	Book();

	Book(string isbn, int year, double price);

	~Book();

	void displayBook();

	int getCount();

	bool operator> (Book & book);

	bool operator==(Book & book);

	bool operator> (double amt);

	double operator+ (Book & book);

	bool operator< (int year);

	friend ostream & operator<< (ostream &outstream, const Book & book);

	friend istream & operator>> (istream &instream, Book & book);

};




#endif /* BOOK_H_ */
