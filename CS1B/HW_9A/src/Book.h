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
};





#endif /* BOOK_H_ */
