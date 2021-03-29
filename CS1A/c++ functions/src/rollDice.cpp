#include "myheader.h"
void rollDice(int numGuess)
{
	 int numSum;			// CALC 		- program calculates and adds
	 	 	 	 	 	 	//				  two integers.

	 int oneRandom;			// CALC 		- first integer to calculate.

	 int twoRandom;			// CALC 		- second integer to calculate.

	 int numCount;		    // CALC & OUT	- counts how much times the program
	 	 	 	 	 	 	//				  randomizes numbers.

	 bool isGuessedRight;	// IN & CALC	- value to determine if the
	 	 	 	 	 	 	//				  guessed value is equivalent
	 	 	 	 	 	 	//				  to the random number is true.


	 numCount = 0;

    srand (time(NULL));
    isGuessedRight = false;

    while(!isGuessedRight)
    {
    	numCount++;

    	oneRandom = rand() % 7 + 1;
    	twoRandom = rand() % 7 + 1;

    	numSum = oneRandom + twoRandom;

    	cout << "Dice roll sum equal to " << numSum << endl;
    	if(numGuess == numSum)
    	{
    	cout << "The number of times the dice were rolled to get the sum "
    		 << numGuess << " is " << numCount << "!" << endl << endl;

    	cout << "Thank you for playing the rolling dice game!" << endl;

    	isGuessedRight = true;
    	}
    }




}


