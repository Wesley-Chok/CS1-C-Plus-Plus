#include "FamousPeople.h"

FamousPeople::FamousPeople()
{
	string _name = "";
	string _quote = "";
	Date _birthdate;
}

FamousPeople::~FamousPeople(){}

void FamousPeople::setName(string name)
{
	this->_name = name;
}

void FamousPeople::setQuote(string quote)
{
	this->_quote = quote;
}

void FamousPeople::setDate(int month, int day, int year)
{
	_birthdate.setDate(month, day, year);
}

void FamousPeople::displayPerson()
{
	cout << "Name: " << _name << endl;
}

void FamousPeople::displayDate()
{
	_birthdate.displayDate();
}



