#include "deckCards.h"

/******************************************************************************
 * FUNCTION shuffleDeck
 * ____________________________________________________________________________
 *
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
 * ____________________________________________________________________________
 *
 * PRE-CONDITIONS:
 * 				 The following parameters need to have a defined value prior
 * 				 to calling the function:
 *
 * 				 vector<string>firstHalf 	  : Assignment Name
 * 				 vector<string>secondHalf	  : Assignment Name
 * 				 vector<string>cards	  	  : Assignment Name
 * 				 vector<string>firstPerfect	  : Assignment Name
 * 				 vector<string>temp		 	  : Assignment Name
 *_____________________________________________________________________________
 *POST-CONDITIONS:
 *				This function will output the class heading
 *****************************************************************************/
void deckCards::shuffleDeck()
{
	temp = cards;


	do
	{

		firstHalf.clear();
		secondHalf.clear();

		for(int i = 0; i < 26 ; i++)
		{
			firstHalf.push_back(temp[i]);
			secondHalf.push_back(temp[i+26]);

		}

		temp.clear();

		for(int i = 0; i < 26; i++)
		{
			temp.push_back(firstHalf[i]);
			temp.push_back(secondHalf[i]);
		}

		if(count == 0)
		{
			firstPerfect = temp;
		}

		count++;

	}while(cards != temp);
}

/******************************************************************************
 * FUNCTION displayDeck
 * ____________________________________________________________________________
 *
 *	This function displays the initial deck, first perfect shuffle and the
 *	final deck. For formatting, every time the iteration passes four cards,
 *	it goes to the next line.
 * ____________________________________________________________________________
 *
 * PRE-CONDITIONS:
 * 				 The following parameters need to have a defined value prior
 * 				 to calling the function:
 *
 * 				 vector<string>cards	  	  : Assignment Name
 * 				 vector<string>firstPerfect	  : Assignment Name
 * 				 vector<string>temp		 	  : Assignment Name
 *_____________________________________________________________________________
 *POST-CONDITIONS:
 *				This function will output the class heading
 *****************************************************************************/
void deckCards::displayDeck()
{

	cout << "Initial deck: " << endl;
	cout << "-------------------------------------------------" << endl;

	for (int i = 0; i < cards.size() ; i++)
	{


		cout << setw(13) << left << cards[i];

		if((i+1) % 4 == 0)
		{
			cout << endl << endl;
		}

	}

	cout << "-------------------------------------------------" << endl << endl;

	cout << "First perfect shuffle: " << endl;
	cout << "-------------------------------------------------" << endl;


	for ( int i = 0; i < cards.size(); i++)
	{
		cout << setw(13) << left << firstPerfect[i];

		if((i+1) % 4 == 0)
		{
			cout << endl << endl;
		}
	}

	cout << "-------------------------------------------------" << endl << endl;

	cout << "Final deck: " << endl;
	cout << "-------------------------------------------------" << endl;

	for (int i = 0; i < temp.size() ; i++)
	{
		cout << setw(13) << left << temp[i];

		if((i+1) % 4 == 0)
		{
			cout << endl << endl;
		}

	}

	cout << "-------------------------------------------------" << endl << endl;

	cout << count << " perfect shuffles are necessary to return the deck "
		 << endl << "to it's original configuration " << endl;

	cout << endl;
}
