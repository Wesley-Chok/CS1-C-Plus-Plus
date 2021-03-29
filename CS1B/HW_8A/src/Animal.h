#ifndef ANIMAL_H_
#define ANIMAL_H_

#include <iostream>
#include <string>
using namespace std;

class Animal
{
protected:
	string name;
	double weight;

public:

	Animal(string name, double weight);

	~Animal();
};





#endif
