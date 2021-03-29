#include "myheader.h"
void validateInput()
{
	cout << "Let's play the rolling dice game!" << endl << endl << endl;

	int numGuess;		// IN, CALC, OUT		- the number that the user
						//						  guesses.
	do
	{
		cout << "Enter an integer greater than or equal to 1 and less than "
			 << "or equal to 12: ";
		cin >> numGuess;
	if(numGuess >= 2 && numGuess <= 12)
	{
		break;
	}
	}while(true);

	rollDice(numGuess);


}



