#include "cs1cStudents.h"

cs1cStudent::cs1cStudent()
{
	string nameStudent = "";
	string idStudent = "";
	string numPhone = "";
	int ageStudent = 0;
	int genStudent = 0;
	string classStudent = "";
	double gpaStudent = 0.0;
	int assignScore = 0;
	string pythonKnow = "";
	string gradDate = "";

}

cs1cStudent::cs1cStudent(string nameStudent, string idStudent, string numPhone,
					int ageStudent, int genStudent, string classStudent,
					double gpaStudent,  int assignScore, string pythonKnow,
					string gradDate)
{
	this->nameStudent = nameStudent;
	this->idStudent = idStudent;
	this->numPhone = numPhone;
	this->ageStudent = ageStudent;
	this->genStudent = genStudent;
	this->classStudent = classStudent;
	this->gpaStudent = gpaStudent;
	this->assignScore = assignScore;
	this->pythonKnow = pythonKnow;
	this->gradDate = gradDate;

}

cs1cStudent::~cs1cStudent(){}

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
 *	PRE-CONDITIONS:
 *				  The following parameters need to have a defined value prior
 *				  to calling the function:
 *
 *				  string nameStudent		: Assignment Name
 *				  string idStudent			: Assignment Name
 *				  string numPhone			: Assignment Name
 *				  int ageStudent			: Assignment Name
 *				  int genStudent			: Assignment Name
 *				  string classStudent		: Assignment Name
 *				  double gpaStudent			: Assignment Name
 *				  int assignScore			: Assignment Name
 *				  string pythonKnow			: Assignment Name
 *				  string gradDate			: Assignment Name
 *
 *  POST-CONDITIONS:
 *  			  The function will output the class heading
 * ***********************************************************************/

void cs1cStudent::getcs1cStudents()
{

		cout << "Enter CS1C Student's Name: ";
		getline(cin, nameStudent);

		cout << "Enter CS1C Student's ID: ";
		getline(cin, idStudent);

		cout << "Enter CS1C Student's Phone Number: ";
		getline(cin, numPhone);

		cout << "Enter CS1C Student's Age: ";
		cin >> ageStudent;
		cin.ignore();

		cout << "Enter CS1C Student's Gender(m/f): ";
		cin >> genStudent;
		cin.ignore();

		cout << "Enter CS1C Student's Class Standing: ";
		getline(cin, classStudent);

		cout << "Enter CS1C Student's GPA: ";
		cin >> gpaStudent;
		cin.ignore();

		cout << endl;





}

/***************************************************************************
 * FUNCTION displaycs1cStudents
 * ____________________________________________________________________________
 *	This function is to display the name, student id, phone, age, gender,
 *	class standing and gpa processed in the function getcs1cStudents. The
 *	setw function is used to assist with the formatting. The function is
 *	called through main through array of objects. The array object
 *	cs1cStudent[3] is used to call this function.
 *	_________________________________________________________________________
 *	PRE-CONDITIONS:
 *				  The following parameters need to have a defined value prior
 *				  to calling the function:
 *
 *				  string nameStudent		: Assignment Name
 *				  string idStudent			: Assignment Name
 *				  string numPhone			: Assignment Name
 *				  int ageStudent			: Assignment Name
 *				  int genStudent			: Assignment Name
 *				  string classStudent		: Assignment Name
 *				  double gpaStudent			: Assignment Name
 *				  int assignScore			: Assignment Name
 *				  string pythonKnow			: Assignment Name
 *				  string gradDate			: Assignment Name
 *
 *  POST-CONDITIONS:
 *  			  The function will output the class heading
 * ***********************************************************************/
void cs1cStudent::displaycs1cStudents()
{
	cout << left << setw(15) << nameStudent  << setw(13) << idStudent
		 << setw(14) << numPhone << setw(7) << ageStudent << setw(7)
		 << genStudent << setw(16) << classStudent << gpaStudent << endl;

}

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
 *	PRE-CONDITIONS:
 *			  	  The following parameters need to have a defined value prior
 *				  to calling the function:
 *
 *				  string nameStudent		: Assignment Name
 *				  int assignScore			: Assignment Name
 *				  string pythonKnow			: Assignment Name
 *				  string gradDate			: Assignment Name
 *
 *  POST-CONDITIONS:
 *  			  The function will output the class heading
 *
 * ***********************************************************************/
void cs1cStudent::getcs1cPython()
{
	cout << "Enter CS1C student's assignment score:";
	cin >> assignScore;
	cin.ignore();

	cout << "Enter CS1C student's python knowledge:";
	getline(cin, pythonKnow);

	cout << "Enter CS1C student's graduation date:";
	getline(cin, gradDate);

	cout << endl;

}

/***************************************************************************
 * FUNCTION displaycs1cPython
 * ____________________________________________________________________________
 *	This function is to display the contents of the user driven information
 *	processed in the function getcs1cStudents. The setw function is used
 *	to assist with the formatting. The function is called through main
 *	through array of objects. The array object cs1cStudent[3] is used to
 *	call this function.
 *	_________________________________________________________________________
 *	PRE-CONDITIONS:
 *				  The following parameters need to have a defined value prior
 *				  to calling the function:
 *
 *				  string nameStudent		: Assignment Name
 *				  int assignScore			: Assignment Name
 *				  string pythonKnow			: Assignment Name
 *				  string gradDate			: Assignment Name
 *
 *  POST-CONDITIONS:
 *  			  The function will output the class heading
 *
 * ***********************************************************************/

void cs1cStudent::displaycs1cPython()
{
	cout << left << setw(15) << nameStudent << setw(20) << assignScore
		 << setw(17) << pythonKnow << gradDate << endl;
}
