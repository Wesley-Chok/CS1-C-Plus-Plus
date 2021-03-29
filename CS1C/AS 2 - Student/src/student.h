#ifndef STUDENT_H_
#define STUDENT_H_

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
const int ROW = 7;
const int COL = 5;

class student
{
protected:

	string nameStudent; // this variable holds the student's name

	string idStudent;  // this variable holds the student's id number

	string numPhone;  // this variable holds the student's phone number

	int ageStudent;   // this variable holds the student's age

	char genStudent;  // this variable holds the student's gender

	string classStudent; // this variable holds the student's class standing

	double gpaStudent; // this variable holds the student's grade point average

public:

	student(); // default constructor

	student(string nameStudent, string idStudent, string numPhone,
			int ageStudent, int genStudent, string classStudent,
			double gpaStudent); // overloaded constructor

	~student(); // destructor

	void getStudents();

	/***************************************************************************
	 * FUNCTION getStudents
	 * ____________________________________________________________________________
	 *	This function is to receive the student name, student's id,
	 *	phone, age, gender, class standing and gpa.The variables start their
	 *	process going through the three constructors: default constructor,
	 *	overloaded constructor and finally the destructor. The getline and
	 *	cin.ignore functions are used so that the information does not override
	 *	one another through each loop it goes through. The function is called
	 *	through main through array of objects. The array object studentArray[4]
	 *	is used to call this function.
	 *	_________________________________________________________________________
	 *
	 * ***********************************************************************/

	void displayStudents();

	/***************************************************************************
	* FUNCTION displayStudents
	* ____________________________________________________________________________
	*	This function is to display the name, student id, phone, age, gender,
	*	class standing and gpa processed in the function getStudents. The
	*	setw function is used to assist with the formatting. The function is
	*	called through main through array of objects. The array object
	*	studentArray[4] is used to call this function.
	*	_________________________________________________________________________
	*
	* ***********************************************************************/



};



#endif /* STUDENT_H_ */
