// Attached: HW_2a, 2b, 2c
// ============================================================================
// Program: HW_2a
// ============================================================================
// Programmer: Wesley Chok
// Class: CS 1B
// ============================================================================

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void getScores(double testScores[], const int SIZE, double& testSum);
void showMenu();
void getChoice(char& userChoice);
void displayResult(char& userChoice, double testAverage, double& testSum
				  ,double testScores[], const int SIZE);

int main()
{
	const int SIZE = 5;
	double testScores[SIZE];

	double testSum;
	double testAverage;

	char userChoice;

	getScores(testScores, SIZE, testSum);

	showMenu();

	getChoice(userChoice);

	displayResult(userChoice, testAverage, testSum, testScores, SIZE);



	return 0;
}

void getScores(double testScores[], const int SIZE, double& testSum)
{
	cout << "Enter 5 test scores: " << endl;
	for(int i = 1; i <= SIZE; i++)
	{
		cin >> testScores[i];

		testSum = testSum + testScores[i];
	}
}




void showMenu()
{
	cout << string(50, '\n');

	cout << "A.) Calculate the average of the test scores." << endl;
	cout << "B.) Display all test scores. " << endl << endl;

}

void getChoice(char& userChoice)
{
		cout << "Enter your choice: ";
		cin >> userChoice;
}

void displayResult(char& userChoice, double testAverage, double& testSum,
				   double testScores[], const int SIZE)
{

	cout << string(50, '\n');

	if(userChoice == 'A')
	{
		testAverage = testSum / SIZE;

		cout << fixed << setprecision(2) << "The average is " << testAverage;
	}
	else if(userChoice == 'B')
	{
		for(int i = 1; i <= SIZE; i++)
		{
			cout << testScores[i] << endl;
		}
	}
	else
	{
		cout << "Invalid entry!";
	}

}


//// ============================================================================
///* OUTPUT:
// *Enter 5 test scores:
// *99
// *77
// *86
// *59
// *92
// *(note screen clears 50 lines)
// *A.) Calculate the average of the test scores.
// *B.) Display all test scores.
// *
// *Enter your choice: A
// *(note screen clears 50 lines)
// *
// *The average is 82.60
//// ============================================================================
