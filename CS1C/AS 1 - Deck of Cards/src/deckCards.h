#ifndef DECKCARDS_H_
#define DECKCARDS_H_

#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;

//deckCards.h, the specification file for the class clockType
class deckCards
{
private:

	int count = 0;	// this variable counts the number of times a perfect
					// shuffle is needed


	vector<string>firstHalf;	// this vector dictates the first 26 cards
								// (1-26)

	vector<string>secondHalf;	// this vector dictates the last 26 cards
								// (27-52)

	vector<string>cards {"A CLUB", "A DIAMONDS", "A HEARTS", "A SPADES",
						 "K CLUB", "K DIAMONDS", "K HEARTS", "K SPADES",
						 "J CLUB", "J DIAMONDS", "J HEARTS", "J SPADES",
						 "Q CLUB", "Q DIAMONDS", "Q HEARTS", "Q SPADES",
						 "10 CLUB", "10 DIAMONDS", "10 HEARTS", "10 SPADES",
						 "9 CLUB", "9 DIAMONDS", "9 HEARTS", "9 SPADES",
						 "8 CLUB", "8 DIAMONDS", "8 HEARTS", "8 SPADES",
						 "7 CLUB", "7 DIAMONDS", "7 HEARTS", "7 SPADES",
						 "6 CLUB", "6 DIAMONDS", "6 HEARTS", "6 SPADES",
						 "5 CLUB", "5 DIAMONDS", "5 HEARTS", "5 SPADES",
						 "4 CLUB", "4 DIAMONDS", "4 HEARTS", "4 SPADES",
						 "3 CLUB", "3 DIAMONDS", "3 HEARTS", "3 SPADES",
						 "2 CLUB", "2 DIAMONDS", "2 HEARTS", "2 SPADES"};
						 // this vector holds the original format of the deck,
						 // it remains to be unchanged throughout the whole
						 // program

	vector<string>firstPerfect; // this vector is intended to hold and
								// later on output the instance where the deck
								// undergoes it's first perfect shuffle

	vector<string>temp;			// this vector is to copy the contents of the
								// vector, vector<string>cards, and is intended
								// to go through change
	public:

	void shuffleDeck();

	/***************************************************************************
	 * FUNCTION shuffleDeck
	 * ____________________________________________________________________________
	 *	This function is to calculate the perfect shuffle and counts how many
	 *	times necessary to perfect shuffle. The function starts out to set temp
	 *	equal cards. Temp will be the vector that undergoes the perfect
	 *	shuffles. The perfect shuffle code are all stored inside of a do while
	 *	loop where the condition is while temp is not equal to cards. The first
	 *	half and second half of the deck is cleared out in order to prevent
	 *	previous perfect shuffles to override the current perfect shuffle. The
	 *	last card of the first half is sent to the front. In the second half,
	 *	the iteration gets added by 26 and the last card is sent to the front.
	 *	The temp is cleared to avoid overriding. The last decks are being
	 *	pushed to the front. After this, when the count passes it's first count
	 *	it is then set equal to the first perfect shuffle. The count is
	 *	incremented by one each time it loops.
	 *	_________________________________________________________________________
	 *
	 * ***************************************************************************/
	void displayDeck();

	/***************************************************************************
	 * FUNCTION displayDeck
	 * ____________________________________________________________________________
	 *	This function displays the initial deck, first perfect shuffle and the
	 *	final deck. For formatting, every time the iteration passes four cards,
	 *	it goes to the next line.
	 *	_________________________________________________________________________
	 *
	 * ***************************************************************************/


};




#endif /* DECKCARDS_H_ */
