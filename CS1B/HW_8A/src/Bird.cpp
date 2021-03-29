#include "Bird.h"

Bird::Bird(string name, double weight, string featherColor)
			: Animal(name, weight)
{
	this->featherColor = featherColor;
}

Bird::~Bird(){}

void Bird::showAnimal()
{
	cout << "Birds are vertebrates in the Aves class " << endl;

	cout << "This " << name << " has " << featherColor << " feathers and weighs "
		 << weight << " pounds " << endl << endl;
}

