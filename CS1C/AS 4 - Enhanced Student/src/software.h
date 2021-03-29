#ifndef SOFTWARE_H_
#define SOFTWARE_H_
#include "student.h"

class software : public student
{

private:

	char * nameStudent;		// pointer variable for the student's name
	char * address;			// pointer variable for the student's address
	char * city;			// pointer variable for the student's city
	char * state;			// pointer variable for the student's state
	char * zipCode;			// pointer variable for the student's zip code


	int nameSize;			// pointer variable to determine the character size
	int addSize;			// pointer variable to determine the character size
	int citySize;			// pointer variable to determine the character size
	int stateSize;			// pointer variable to determine the character size
	int zipSize;			// pointer variable to determine the character size


public:



	software(const char *name,const char *add, const char *cit, const char *stat
			 , const char *zip);
	/***************************************************************************
	* CONSTRUCTOR software
	* ____________________________________________________________________________
	*	Every time this constructor is called, it outputs the statement
	*	"Normal constructor allocating pointer". The nameSize, addSize, citySize
	*	stateSize and zipSizeis first set equal to strlen(name) where it will
	*	return each of its length. This is necessary because there is an unfixed
	*	amount of characters for each data. The nameStudent, address, city,
	*	state and zipCode pointers are then set equal to the new char variable
	*	and the size variable will also be allocated. The pointer variables are
	*	then set equal to strcpy where it will copy the variable and the
	*	constant char pointers enlisted inside of the prototype. The code will
	*	output "Normal constructor allocating ptr" at the beginning for testing
	*	purposes only.
    * _________________________________________________________________________
    *
    * ***********************************************************************/
	~software();
	/***************************************************************************
	*  DESTRUCTOR software
	* ____________________________________________________________________________
	*	Every time this destructor is called, it outputs the statement
	*	"Freeing memory". The destructor frees it's memory by deleting the
	*	pointers. The function deletes the nameStudent, address, city, state and
	*	the zipCode pointers.
	* _________________________________________________________________________
	*
	* ***********************************************************************/
	software(const software&);
	/***************************************************************************
	* COPY CONSTRUCTOR software
	* ____________________________________________________________________________
	*	Every time this copy constructor is called, it outputs the statement
	*	"Copy constructor allocating ptr" for testing purposes only. First,
	*	the nameSize, addSize, citySize, stateSize and zipSize are set equal
	*	to the object size. After this the nameStudent, address, city, state,
	*	and zipCode pointer variables are set equal to a new char and the size
	*	variables will also be allocated. The pointer and the object size
	*	variables will all be contained in a strcpy to copy the values.
	* _________________________________________________________________________
	*
	* ***********************************************************************/

	 void change(const char *name,const char *add, const char *cit
			     ,const char *stat,const char *zip);
	 /***************************************************************************
	 * FUNCTION change
	 * ____________________________________________________________________________
	 *	This function changes the deep copy function's values each time it is
	 *	called. First the function deletes the nameStudent, address, city,
	 *	state and zipCode new char values in order for new values are to be
	 *	inputted. After this the nameSize, addSize, citySize, stateSize and
	 *	zipSize is first set equal to strlen(name) where it will return each of
	 *	its length. This is necessary because there is an unfixed amount of
	 *	characters for each data. The nameStudent, address, city, state and
	 *	zipCode pointers are then set equal to the new char variable and the
	 *	size variable will also be allocated. The pointer variables are then set
	 *	equal to strcpy where it will copy the variable and the constant char
	 *	pointers enlisted inside of the prototype.
	 *	_________________________________________________________________________
	 *
	 *************************************************************************/

	void displaySoftware();
	/***************************************************************************
	* FUNCTION displaySoftware
	* ____________________________________________________________________________
	*	This function is to display the name, address, city, state and zip
	*	code. The setw function is used to assist with the formatting. This
	*	function is called by the copy constructor object instantiated in the
	*	main.cpp file.
	* _________________________________________________________________________
	*
	*************************************************************************/





};




#endif /* SOFTWARE_H_ */
