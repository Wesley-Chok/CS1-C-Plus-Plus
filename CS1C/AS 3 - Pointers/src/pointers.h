#ifndef POINTERS_H_
#define POINTERS_H_
#include <iostream>
#include <iomanip>
using namespace std;

float taxRate = .0775;		// variable to set the tax rate
float * ptr;				// variable to declare the ptr variable

struct Equipment
{
	string askName;			// variable to ask the user the item name
	int askQuantity;		// variable to ask the user the number of items
};
void askCustomer();

/******************************************************************************
* FUNCTION askCustomer
* ____________________________________________________________________________
*	This function is to ask the customer of what products they want to buy, how
*	much they would want to buy and then calculates the items of which they
*	chose to buy. The program asks the customer what and how much they want to
*	buy in a do while loop. The name of items the customer wants is stored in
*	the askName variable which is called by the temp variable object. The
*	quantity of items the customer wants is stored in the askQuantity variable
*	which is called by the temp variable object. Every loop is goes through the
*	count variable gets increment by one. The do while loop breaks once
*	the customer enters in "No". Once is breaks out of the loop, the information
*	is then brought over to the for loop where the variables are calculated.
*	For example, if the user types in "Nike baseketball shoes", it adds the
*	total cost and the nike shoes namespace variable numCost and then multiplied
*	by the quantity. The total cost is outputed. The taxed cost is outputed
*	by the ptr, which at the beginning of the code was initialized to the
*	taxRate variable which was set equal to .0775
* _____________________________________________________________________________
*
* *****************************************************************************/


namespace nikeShoes				//namespace variable for nike basketball shoes
{
	float numCost = 179.99;		// cost for nike basketball shoes
	int numQuantity = 42;		// quantity for nike basketball shoes
}

namespace underShirt			//namespace variable for under armour T-shirt
{
	float numCost = 29.99;		// cost for under armour T-shirt
	int numQuantity = 44;		// quantity for under armour T-shirt
}

namespace brookShoes			// namespace variable for brooks running shoes
{
	float numCost = 123.44;		// cost for brooks running shoes
	int numQuantity = 13;		// quantity for brooks running shoes
}

namespace asicsShoes			// namespace variable for ascics running shoes
{
	float numCost = 123.44;		// cost for asics running shoes
	int numQuantity = 12;		// quantity for asics running shoes
}

namespace underShorts			// namespace variable for under armour shorts
{
	float numCost = 45.77;		// cost for under armour shorts
	int numQuantity = 35;		// quantity for under armour shorts
}

#endif /* POINTERS_H_ */


