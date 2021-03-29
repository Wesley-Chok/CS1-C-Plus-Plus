#include "pointers.h"

/******************************************************************************
 * ASN #3 - Pointers
 * ----------------------------------------------------------------------------
 * This program will output the class heading
 * ----------------------------------------------------------------------------
 *
 *****************************************************************************/

int main()
{

	/**************************************************************************
	* CONSTANT
	* ------------------------------------------------------------------------
	* OUTPUT - USED FOR CLASS HEADING
	* ------------------------------------------------------------------------
	* PROGRAMMER : Wesley Chok
	* CLASS      : CS 1C
	* SECTION    : MW 2:30p - 4:50p
	* ASN_NUM    : 3
	* ASN_NAME   : Pointer
	*************************************************************************/

	using nikeShoes::numCost; // calls the namespace variable prior
	using nikeShoes::numQuantity;	// calls the namespace variable prior



	cout << "Here is the list of items we have currently: " << endl << endl;

	cout << left << setw(25) << "Name of equipment" << setw(15) << "Cost"
		 << setw(15) << "Quantity" << endl;

	cout << left << setw(25) << "Nike Basketball shoes" << "$"
		 << setw(15) << numCost << numQuantity << endl;

	cout << left << setw(25) << "Under Armour T-shirt" << "$"
		 << setw(15) << underShirt::numCost << underShirt::numQuantity
		 << endl;

	cout << left << setw(25) << "Brooks running shoes" << "$"
		 << setw(15) << brookShoes::numCost << brookShoes::numQuantity
		 << endl;

	cout << left << setw(25) << "Asics running shoes" << "$"
		 << setw(15) << asicsShoes::numCost << asicsShoes::numQuantity
		 << endl;

	cout << left << setw(25) << "Under Armour Shorts" << "$"
		 << setw(15) << underShorts::numCost << underShorts::numQuantity
		 << endl << endl;

	// outputs the list (name of item, cost of item, and quantity of item)

	askCustomer();	// calls the function to ask the customer what to buy

	return 0;
}

void askCustomer()
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
*	PRE-CONDITIONS:
*				  The following parameters need to have a defined value prior
*				  to calling the function:
*
*				  Equipment *equipArray		: Assignment Name
*				  ptr = &taxRate			: Assignment Name
*				  Equipment temp			: Assignment Name
*				  float totalCost			: Assignment Name
*				  int i						: Assignment Name
*				  int count					: Assignment Name
*				  new Equipment[]			: Assignment Name
*				  float taxRate			: Assignment Name
*				   float * ptr		: Assignment Name
*				     string askName			: Assignment Name
*				      int askQuantity[]			: Assignment Name
*				       new Equipment[]			: Assignment Name
*
*
*  POST-CONDITIONS:
*  			  	  The function will output the class heading
*
* ***********************************************************************/
{
	Equipment *equipArray;	// declares the object pointer array
	ptr = &taxRate;			// initializing the pointer equaling the tax rate
	Equipment temp;			// declaring the temp variable through an object
	float totalCost = 0;	// initializing the final cost
	int i = 0 ;				// initializing the i variable to 0 for the do
							// while loop
	int count = 0;			// initializing the count variable to 0 for the
							// for loop


	cout << endl;

	equipArray = new Equipment[146];	// initializing the equip array equal to
										// a new equipment array variable. It's
										// set to 146 because that is the total
										// amount of items listed in the prompt.

	do
	{


		cout << "What equipment would you like to purchase? ";
		getline(cin, temp.askName);		// uses the temp object to call the
										// asking the customer's name
										// object


		if (temp.askName == "No") 		// if the customer replies no to the
										// question then it breaks and the
										// count returns
		{
			break;
		}
		else
		{
			count++;
		}


		cout << "How much " << temp.askName << " would you like to buy? ";
		cin >> temp.askQuantity;		// asks customer how much items they
										// would like to buy.

		cin.ignore();


		cout << endl << endl;

		equipArray[i] = temp;			// the equip array is set equaled to
										// the temp object
		i++;


	}while(true);

	for(int i = 0; i < count; i++)
	{
		if(equipArray[i].askName == "Nike Basketball Shoes")
		{

			totalCost = totalCost +
			(nikeShoes::numCost * equipArray[i].askQuantity);
		}

		if(equipArray[i].askName == "Under Armour T-Shirt")
		{
			totalCost = totalCost +
			(underShirt::numCost * equipArray[i].askQuantity);
		}

		if(equipArray[i].askName == "Brooks Running Shoes")
		{
			totalCost = totalCost +
			(brookShoes::numCost * equipArray[i].askQuantity);
		}

		if(equipArray[i].askName == "Asics Running Shoes")
		{
			totalCost = totalCost +
			(asicsShoes::numCost * equipArray[i].askQuantity);
		}

		if(equipArray[i].askName == "Under Armour Shorts")
		{
			totalCost = totalCost +
			(underShorts::numCost * equipArray[i].askQuantity);
		}


	}

	cout << endl << endl;

	cout << "This is the total cost before the tax: " << totalCost << endl;

	cout << "This is the total cost after the tax: " << totalCost * *ptr
		 << endl;

	delete []equipArray;

}

