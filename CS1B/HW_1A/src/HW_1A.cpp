// Attached: HW_1a, 1b, 1c, 1d
// ============================================================================
// Program: HW_1a
// ============================================================================
// Programmer: Wesley Chok
// Class: CS 1B
// ============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

void getSalesAmt(float& monAmount);
void calcCommission(float monAmount, float& usrComm);
void calcPay(float& basPay, float& totPay, float usrComm);
void displayPay(float monAmount, float basPay, float totPay, float usrComm);

int main()

{
	char userChoice;

	float monAmount;
	float usrComm;
	float basPay;
	float totPay;

	do
	{
		getSalesAmt(monAmount);

		calcCommission(monAmount, usrComm);

		calcPay(basPay, totPay, usrComm);

		displayPay(monAmount, basPay, totPay, usrComm);

		cout << "Do it again? (Y/N)";
		cin >> userChoice;

	}while(userChoice != 'N' && userChoice != 'n');

	return 0;
}


void getSalesAmt(float& monAmount)
{
	cout << "Enter monthly sales amount: " << endl;
	cin >> monAmount;
}

void calcCommission(float monAmount, float& usrComm)
{
	usrComm = 0;

	if(monAmount > 50000)
	{
		usrComm = monAmount * .02;
	}
	else if(monAmount >= 25000 && monAmount <= 50000)
	{
		usrComm = monAmount * .015;
	}
	else
	{
		usrComm = 0;
	}


}

void calcPay(float& basPay, float& totPay, float usrComm)
{
	if(usrComm > 0)
	{
		basPay = 2500;
	}
	else
	{
		basPay = 0;
	}
	totPay = usrComm + basPay;
}

void displayPay(float monAmount, float basPay, float totPay, float usrComm)
{
	cout << "Monthly Sales:   $" << fixed << setprecision(2) << showpoint
		 << monAmount << endl;
	cout << "Commission:      $" << fixed << setprecision(2) << showpoint
		 << usrComm << endl;
	cout << "Base Pay:        $" << fixed << setprecision(2) << showpoint
		 << basPay << endl;
	cout << "Total Pay:       $" << fixed << setprecision(2) << showpoint
		 << totPay << endl << endl;
}
//// ============================================================================
///* OUTPUT:
// * Enter monthly sales amount:
// * 65000
// * Monthly Sales:   $65000.00
// * Commission:      $1300.00
// * Base Pay:        $2500.00
// * Total Pay:       $3800.00
// *
// * Do it again? (Y/N)n
// *
// */
//// ============================================================================
