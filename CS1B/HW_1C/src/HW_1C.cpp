// Attached:
// ============================================================================
// Program: HW_1c
// ============================================================================
// Programmer: Wesley Chok
// Class: CS 1B
// ============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

void getTemps(const int SIZE, double tempNum[], double& sum);
void calcAvg(double& tempAvg, double tempNum[], double& sum);
void displayAvg(double& tempAvg, double tempNum[]);

int main()
{

	const int SIZE = 4;
	double tempNum[SIZE];

	double sum;
	double tempAvg;


	getTemps(SIZE, tempNum, sum);

	calcAvg(tempAvg, tempNum, sum);

	displayAvg(tempAvg, tempNum);


	return 0;
}
void getTemps(const int SIZE, double tempNum[], double& sum)
{
	cout << "Enter temperatures of 3 cities." << endl << endl;

	for(int i = 1; i < SIZE; i++)
	{
		cout << "#" << i << " ";

		cin >> tempNum[i];

		sum = sum + tempNum[i];
	}
}

void calcAvg(double& tempAvg, double tempNum[], double& sum)
{
	tempAvg = sum / 3;
}

void displayAvg(double& tempAvg, double tempNum[])
{
	cout << "The average temperature is " << setprecision(1) << fixed
		 << tempAvg << " degrees";
}

//// ============================================================================
///* OUTPUT:
// *Enter temperatures of 3 cities.
// *
// *#1: 77.5
// *#2: 82.5
// *#3 71.0
// *The average temperature is 77.0 degrees
// *
// */
//// ============================================================================

