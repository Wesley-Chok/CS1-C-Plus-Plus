#ifndef FAMOUSPEOPLE_H_
#define FAMOUSPEOPLE_H_

#include "Date.h"
using namespace std;

class FamousPeople : public Date
{
private:
	string _name;
	Date _birthdate;

public:

	string _quote;

FamousPeople();

~FamousPeople();

void setName(string name);

void setQuote(string quote);

void setDate(int month, int day, int year);

void displayPerson();

void displayDate();

};

#endif
