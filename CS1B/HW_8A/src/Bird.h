#ifndef BIRD_H_
#define BIRD_H_

#include "Animal.h"

class Bird : public Animal
{
private:
	string featherColor;

public:
	Bird(string name, double weight, string featherColor);

	~Bird();

	void showAnimal();
};





#endif /* BIRD_H_ */
