// Attached: HW_8a, HW_8b, HW_8c
// ============================================================================
// Program: HW_8a
// ============================================================================
// Programmer: Wesley Chok
// Class: CS 1B
// ============================================================================


#include "Mammal.h"
#include "Bird.h"

int main()
{
	Bird bird("pelican", 8.5, "gray");
	bird.showAnimal();

	Mammal mammal("cow", 500, "black");
	mammal.showAnimal();

	system("pause");
	return 0;
}

//// ============================================================================
///* OUTPUT:
///* Birds are vertebrates in the Aves class
///* This pelican has gray feathers and weighs 8.5 pounds
///*
///* Mammals are vertebrates in the Mammalia class.
///* This black and white dairy cow weighs 500 pounds.
///* Press any key to continue . . .
//// ============================================================================
