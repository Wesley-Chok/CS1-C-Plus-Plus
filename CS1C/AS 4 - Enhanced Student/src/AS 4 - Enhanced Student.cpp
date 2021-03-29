#include "student.h"
#include "software.h"

/******************************************************************************
 * ASN #4 - Enhanced Student
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
	* ASN_NUM    : 4
	* ASN_NAME   : Enhanced Student
	*************************************************************************/

	student studentArray[3]; // student array object



	cout << "Enter the information for Students: " << endl;

		for(int i = 0; i < 3; i++)
		{
			studentArray[i].getStudents(); // student array calls the getStudents
										   // function 3 times
		}


		cout << "Name" << setw(23) << "Student's Id" << setw(6) << "Phone"
			 << setw(12) << "Age" << setw(10) << "Gender" << setw(15)
			 << "Class Standing" << setw(5) << "GPA" << endl;

		for(int i = 0; i < 3; i++)
		{
			studentArray[i].displayStudents(); // student array calls the
											   // displayStudents function 3 times
		}

		cout << endl << endl;



		cout << "Enter the software student information " << endl;

		cout << left << setw(13) << "Name" << setw(21) << "Address" << setw(14)
			 << "City" << setw(6) << "State" << "Zip Code" << endl;

		software obj1("Joe Calculus", "1234 Main Avenue", "Laguna Niguel",
					  "CA" ,"92677");	// first deep copy function

		software obj2 = obj1;			// sets it equal to the first deep copy
										// function

		obj2.change("Mary Algebra", "3333 Marguerite Pkwy", "Mission Viejo",
				    "CA", "92646");		// second deep copy function

		software obj3 = obj2;			// sets it equal to the second deep
										// copy function

		obj3.change("Jo Trig","9876 Elm Street", "San Clemente", "CA",
					"92672");			// third deep copy function


		obj1.displaySoftware();			// first deep copy calls displaySoftware
		obj2.displaySoftware();			// second deep copy calls
										// displaySoftware
		obj3.displaySoftware();			// third deep copy calls displaySoftware

	return 0;
}
