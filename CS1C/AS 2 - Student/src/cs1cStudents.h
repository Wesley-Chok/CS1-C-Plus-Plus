#ifndef CS1CSTUDENTS_H_
#define CS1CSTUDENTS_H_

#include "student.h"

// cs1cStudents.h, the specification file for the class cs1cStudent derived
// from the class student
class cs1cStudent : public student
{
private:

	int assignScore; // this variable holds the assignment score value
					 // which is user inputed

	string pythonKnow; // this variable holds whether or not the cs1c student
					   // has python knowledge

	string gradDate;   // this variable holds the date for the cs1c student's
					   // graduation date
public:

	cs1cStudent(); // default constructor

	cs1cStudent(string nameStudent, string idStudent, string numPhone,
			int ageStudent, int genStudent, string classStudent,
			double gpaStudent,  int assignScore, string pythonKnow, string
			gradDate); // overloaded constructor

	~cs1cStudent(); // destructor

	void getcs1cStudents();

	/***************************************************************************
	 * FUNCTION getcs1cStudents
	 * ____________________________________________________________________________
	 *	This function is to receive the new cs1c student name, student's id,
	 *	phone, age, gender, class standing and gpa. The variables that were
	 *	derived from the student class are overwritten so the same information
	 *	won't appear. The variables start their process going through the three
	 *	constructors: default constructor, overloaded constructor and finally
	 *	the destructor. The getline and cin.ignore functions are used so that
	 *	the information does not override one another through each loop it goes
	 *	through. The function is called through main through array of objects.
	 *	The array object cs1cStudent[3]is used to call this function.
	 *	_________________________________________________________________________
	 *
	 * ***********************************************************************/

	void displaycs1cStudents();

	/***************************************************************************
	* FUNCTION displaycs1cStudents
	* ____________________________________________________________________________
	*	This function is to display the name, student id, phone, age, gender,
	*	class standing and gpa processed in the function getcs1cStudents. The
	*	setw function is used to assist with the formatting. The function is
	*	called through main through array of objects. The array object
	*	cs1cStudent[3] is used to call this function.
	*	_________________________________________________________________________
	*
	* ***********************************************************************/

	void getcs1cPython();

	/***************************************************************************
	* FUNCTION getcs1cPython
	* ____________________________________________________________________________
	*	This function is to receive the cs1c student assignment score, python
	*	knowledge and graduation date. The variables start their process
	*	going through the three constructors: default constructor, overloaded
	*	destructor and finally the destructor. The getline and cin.ignore
	*	functions are used so that the information does not override one
	*	another through each loop it goes through. The function is called
	*	through main through array of objects. The array object cs1cStudent[3]
	*	is used to call this function. Furthermore, the names do not need to be
	*	called as they are already stored inside of the array.
    *	_________________________________________________________________________
	*
	* ***********************************************************************/

	void displaycs1cPython();

	/***************************************************************************
	* FUNCTION displaycs1cPython
	* ____________________________________________________________________________
	*	This function is to display the contents of the user driven information
	*	processed in the function getcs1cStudents. The setw function is used
	*	to assist with the formatting. The function is called through main
	*	through array of objects. The array object cs1cStudent[3] is used to
	*	call this function.
	*	_________________________________________________________________________
	*
	* ***********************************************************************/
};


#endif /* CS1CSTUDENTS_H_ */
