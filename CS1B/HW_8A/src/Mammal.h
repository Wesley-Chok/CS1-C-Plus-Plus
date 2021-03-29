#ifndef MAMMAL_H_
#define MAMMAL_H_

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

#include "Animal.h"

class Mammal : public Animal
{
private:
	string hairColor;

public:
	Mammal(string name, double weight, string hairColor);

	~Mammal();

	void showAnimal();
};



#endif /* MAMMAL_H_ */
