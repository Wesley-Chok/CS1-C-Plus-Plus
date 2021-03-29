#include "student.h"

student::student()
{
	string nameStudent = "";
	string idStudent = "";
	string numPhone = "";
	int ageStudent = 0;
	int genStudent = 0;
	string classStudent = "";
	double gpaStudent = 0.0;
}

student::student(string _nameStudent, string _idStudent, string numPhone,
				 int ageStudent, int genStudent, string classStudent,
				 double gpaStudent)
{
	this->nameStudent = nameStudent;
	this->idStudent = idStudent;
	this->numPhone = numPhone;
	this->ageStudent = ageStudent;
	this->genStudent = genStudent;
	this->classStudent = classStudent;
	this->gpaStudent = gpaStudent;
}

student::~student(){}

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
*
*  POST-CONDITIONS:
*  			  	  The function will output the class heading
*
* ***********************************************************************/
void student::getStudents()
{

		cout << "Enter Student's Name: ";
		getline(cin, nameStudent);

		cout << "Enter Student's ID: ";
		getline(cin, idStudent);

		cout << "Enter Student's Phone Number: ";
		getline(cin, numPhone);

		cout << "Enter Student's Age: ";
		cin >> ageStudent;
		cin.ignore();

		cout << "Enter Student's Gender(m/f): ";
		cin >> genStudent;
		cin.ignore();

		cout << "Enter Student's Class Standing: ";
		getline(cin, classStudent);

		cout << "Enter Student's GPA: ";
		cin >> gpaStudent;
		cin.ignore();

		cout << endl;
}

/***************************************************************************
* FUNCTION displayStudents
* ____________________________________________________________________________
*	This function is to display the name, student id, phone, age, gender,
*	class standing and gpa processed in the function getStudents. The
*	setw function is used to assist with the formatting. The function is
*	called through main through array of objects. The array object
*	studentArray[4] is used to call this function.
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
*
*  POST-CONDITIONS:
*  			  	  The function will output the class heading
*
* ***********************************************************************/
void student::displayStudents()
{
	cout << left << setw(15) << nameStudent  << setw(13) << idStudent
		 << setw(14) << numPhone << setw(7) << ageStudent << setw(7)
		 << genStudent << setw(16) << classStudent << gpaStudent << endl;
}
