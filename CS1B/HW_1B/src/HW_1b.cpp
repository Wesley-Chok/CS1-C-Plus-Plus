// Attached: HW_1a, 1b, 1c, 1d
// ============================================================================
// Program: HW_1b
// ============================================================================
// Programmer: Wesley Chok
// Class: CS 1B
// ============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

void getTemps(double& tempOne, double& tempTwo, double& tempThree);
void calcAvg(double& tempAvg, double& tempOne, double& tempTwo, double&
			 tempThree);
void displayAvg(double tempOne, double tempTwo, double tempThree, double
		        tempAvg);

int main()
{
	double tempOne;
	double tempTwo;
	double tempThree;
	double tempAvg;

	getTemps(tempOne, tempTwo, tempThree);

	calcAvg(tempAvg, tempOne, tempTwo, tempThree);

	displayAvg(tempOne, tempTwo, tempThree, tempAvg);


	return 0;
}
void getTemps(double& tempOne, double& tempTwo, double& tempThree)
{
	cout << "Enter temperatures of 3 cities." << endl << endl;

			cout << "#1: ";
			cin >> tempOne;
			cin.ignore();

			cout << "#2: ";
			cin >> tempTwo;


			cout << "#3 ";
			cin >> tempThree;

}

void calcAvg(double& tempAvg, double& tempOne, double& tempTwo, double&
		     tempThree)
{
	tempAvg = 0;

	tempAvg = (tempOne + tempTwo + tempThree) / 3;
}

void displayAvg(double tempOne, double tempTwo, double tempThree, double
                tempAvg)
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

