
#include <iostream>
#include <iomanip>
#include <cstring>
#include<string>
using namespace std;

/******************************************************************************
 * ASN #7 - Banquet Planner
 * ----------------------------------------------------------------------------
 * This program will output the class heading
 * ----------------------------------------------------------------------------
 * INPUT:
 *     vegChoice   -	value to determine if the vegetarian option has
 *     						been picked or not.
 *     redChoice   -	value to determine if the red meat option has
 *     						been picked or not.
 *     bevChoice   -	value to determine if the beverage option has
 *     						been picked or not.
 *     winChoice   -	value to determine if the wine option has
 *     						been picked or not.
 *     name		   - user's both first and last name.
 * OUTPUT:
 * 	   total 	   - sum of all of the user's desired orders.
 * 	   totAverage  - the average of the calculated total.
 *****************************************************************************/
int main()
{
	/**************************************************************************
	 * CONSTANT
	 * ------------------------------------------------------------------------
	 * OUTPUT - USED FOR CLASS HEADING
	 * ------------------------------------------------------------------------
	 * PROGRAMMER : Wesley Chok
	 * CLASS      : CS 1A
	 * SECTION    : MW 5p - 7:20p
	 * LAB_NUM    : 9
	 * ASN_NAME   : C++ Selection
	 *************************************************************************/
    const char  PROGRAMMER[]  = "Wesley Chok";
    const char  CLASS[]       = "CS1A";
    const char  SECTION[]     = "MW 5 - 7:20p";
    const int   ASN_NUM       = 11;
    const char  ASN_NAME[]    = "Arithmetic in C++";


    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int ignVariable;

    a = 0;


    //OUTPUT - Class Heading
    cout << left;
    cout << "*************************************************************\n";
    cout << "* PROGRAMMED BY : " << PROGRAMMER << endl;
    cout << "* "      << setw(14) << "CLASS"    << ": " << CLASS    << endl;
    cout << "* "      << setw(14) << "SECTION"  << ": " << SECTION  << endl;
    cout << "* ASN #" << setw(9)  << ASN_NUM    << ": " << ASN_NAME << endl;
    cout << "*************************************************************\n\n";
    cout << right;

	/*********************************************************************
    * INPUT - reads in an input that requires no calculation (name) and
    * 		  4 variables that is required for the calculation (vegChoice,
    * 		  redChoice, bevChoice and winChoice). The program then
    * 		  approaches these 4 variables with asking yes or no.
	*********************************************************************/
    while (true)
    	{

    ignVariable = a;
    cout << "Enter in integer a: ";
    cin >> a;

    if (a < 0)
    {
    	a = ignVariable;
    	break;
    }

    cout << "Enter in integer b: ";
    cin >> b;

    cout << "Enter in integer c: ";
    cin >> c;

    cout << "Enter in integer d: ";
    cin >> d;




	/**********************************************************************
	* PROCESSING - calculates the the sum (total) and then divides the sum
	* 			   by 8 to get the average (totAverage).
	*********************************************************************/
      a *= c;
      d += --a * c++;
      e = --c * (a += 6);
      f = --a + --b * c++ + --d;
      cout << "a =" << a << endl;
             cout << "b =" << b << endl;
             cout << "c =" << c << endl;
             cout << "d =" << d << endl;
    	}


	/**********************************************************************
	* OUTPUT - outputs the sum (total) and the average (totAverage).
	*
	* 		TEST CASE #1:
	*
	* 		Welcome to the Banquet Planner! Please input each guest's
	* 		information.
	*
	*		Guest # 1:
	*		What is your guest's name?             Austin Vaday
	*		Vegetarian (Y/N)?                      N
	*		Does he/she like red meat (Y/N)?       Y
	*		Alcoholic beverage (Y/N)?              Y
	*		Does he/she like red wine (Y/N)?       Y
	*
	*		Austin Vaday will be having Roasted Prime Rib with Red Wine for
	*		dinner!
	*
	*********************************************************************/

    cout << "a =" << a << endl;
    cout << "b =" << b << endl;
    cout << "c =" << c << endl;
    cout << "d =" << d << endl;
    cout << "e =" << e << endl;
    cout << "f =" << f << endl;




    return 0;
}




