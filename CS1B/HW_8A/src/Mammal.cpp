#include "Mammal.h"

Mammal::Mammal(string name, double weight, string hairColor)
			: Animal(name, weight)
{
	this->hairColor = hairColor;
}

Mammal::~Mammal(){}

void Mammal::showAnimal()
{
	cout << "Mammals are vertebrates in the Mammalia class. " << endl;
	cout << "This " << hairColor << " and white dairy "  << name << " weighs "
		 << weight << " pounds. " << endl;
}
