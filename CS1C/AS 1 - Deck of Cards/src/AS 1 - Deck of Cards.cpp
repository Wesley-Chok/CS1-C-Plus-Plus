#include "deckCards.h"

/******************************************************************************
 * ASN #13 - Deck of Cards
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
	* ASN_NUM    : 2
	* ASN_NAME   : Student
	*************************************************************************/
	deckCards shuffle;		// defines the class variable
	shuffle.shuffleDeck();	// calls the function to calculate the perfect
							// shuffles

	shuffle.displayDeck();	// calls the function to display the card deck

	return 0;
}
