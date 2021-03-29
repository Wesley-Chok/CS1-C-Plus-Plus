#include "student.h"
#include "cs1cStudents.h"

/******************************************************************************
 * ASN #2 - Student
 * ----------------------------------------------------------------------------
 * This program will output the class heading
 * ----------------------------------------------------------------------------
 *
 *****************************************************************************/
int main()
{
	int i; // used to initialize the arrays

	/**************************************************************************
	* CONSTANT
	* ------------------------------------------------------------------------
	* OUTPUT - USED FOR CLASS HEADING
	* ------------------------------------------------------------------------
	* PROGRAMMER : Wesley Chok
	* CLASS      : CS 1C
	* SECTION    : MW 2:30p - 4:50p
	* ASN_NUM    : 2
	* ASN_NAME   : Student
	*************************************************************************/

	student studentArray[4]; // student array object
	cs1cStudent cs1cStudent[3]; // cs1c array object


	cout << "Enter the information for Students: " << endl;

	for(int i = 0; i < 4; i++)
	{
		studentArray[i].getStudents(); // student array calls the getStudents
									   // function 4 times
	}


	cout << "Name" << setw(23) << "Student's Id" << setw(6) << "Phone"
		 << setw(12) << "Age" << setw(10) << "Gender" << setw(15)
		 << "Class Standing" << setw(5) << "GPA" << endl;

	for(i = 0; i < 4; i++)
	{
		studentArray[i].displayStudents(); // student array calls the
										   // displayStudents function 4 times
	}

	cout << endl << endl;



	cout << "Enter the information for CS1C Students: " << endl;

	for(int i = 0; i < 3; i++)
	{
		cs1cStudent[i].getcs1cStudents(); // cs1c student array calls the
										  // getcs1cStudents function 3 times
	}

	cout << left << setw(15) << "Name" << setw(13) << "Student's ID" << setw(14)
		 << "Phone" << setw(7) << "Age" << setw(7) << "Gender" << setw(16) <<
		 "Class standing" << "GPA" << endl;

	for(int i = 0; i < 3; i++)
	{
		cs1cStudent[i].displaycs1cStudents(); // cs1c student array calls the
											  // getcs1cStudents function 3
											  // times
	}

	cout << endl << endl;

	cout << "Enter academic information for CS1C Students: " << endl;

	for(int i = 0; i < 3; i++)
	{
		cs1cStudent[i].getcs1cPython();	// cs1c student array calls the
										// getcs1cPython function 3 times
	}

	cout << left << setw(15) << "Name" << setw(20) << "Assignment Score"
		 << setw(17) << "Python Knowledge" << "Graduation Date" << endl;

	for(int i = 0; i < 3; i++)
	{
		cs1cStudent[i].displaycs1cPython(); // cs1c student array calls the
											// displaycs1cPython function
											// 3 times
	}

	return 0;
}
