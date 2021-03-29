#include "software.h"

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
*	_________________________________________________________________________
*	PRE-CONDITIONS:
*				  The following parameters need to have a defined value prior
*				  to calling the function:
*
*				  char * nameStudent		: Assignment Name
*				  char * address			: Assignment Name
*				  char * city				: Assignment Name
*				  char * state				: Assignment Name
*				  char * zipCode			: Assignment Name
*  POST-CONDITIONS:
*  			  	  The function will output the class heading
*
*  			  	  const char * name			: Assignment Name
*  			  	  const char * add			: Assignment Name
*  			  	  const char * cit			: Assignment Name
*  			  	  const char * stat			: Assignment Name
*  			  	  const char * zip			: Assignment Name
*
*  			  	  int nameSize;				: Assignment Name
*				  int addSize;				: Assignment Name
*				  int citySize;				: Assignment Name
*				  int stateSize;			: Assignment Name
*				  int zipSize;				: Assignment Name
* ***********************************************************************/
software::software(const char *name,const char *add, const char *cit
				   ,const char *stat,const char *zip)
{
	cout << "Normal constructor allocating ptr" << endl;

	nameSize = strlen(name);
	nameStudent = new char[nameSize+1];
	strcpy(nameStudent, name);

	addSize = strlen(add);
    address = new char[addSize+1];
    strcpy(address, add);

    citySize = strlen(cit);
    city = new char[citySize+1];
    strcpy(city, cit);

    stateSize = strlen(stat);
    state = new char[stateSize+1];
    strcpy(state, stat);

    zipSize = strlen(zip);
    zipCode = new char[zipSize+1];
    strcpy(zipCode, zip);



}



/***************************************************************************
*  DESTRUCTOR software
* ____________________________________________________________________________
*	Every time this destructor is called, it outputs the statement
*	"Freeing memory". The destructor frees it's memory by deleting the
*	pointers. The function deletes the nameStudent, address, city, state and
*	the zipCode pointers.
* _________________________________________________________________________
*	PRE-CONDITIONS:
*				  The following parameters need to have a defined value prior
*				  to calling the function:
*
*				  char * nameStudent		: Assignment Name
*				  char * address			: Assignment Name
*				  char * city				: Assignment Name
*				  char * state				: Assignment Name
*				  char * zipCode			: Assignment Name
*  POST-CONDITIONS:
*  			  	  The function will output the class heading
*
* ***********************************************************************/
software::~software()
   {
		cout << "Freeing memory" << endl;

		delete [] nameStudent;
		delete [] address;
		delete [] city;
		delete [] state;
		delete [] zipCode;
   }


/***************************************************************************
* FUNCTION softwareCall
* ____________________________________________________________________________
*	This function asks the user for the name, address, state, city and
*	zip code. The address, state and city uses the new char variable to
*	input the values.
* _________________________________________________________________________
*	PRE-CONDITIONS:
*				  The following parameters need to have a defined value prior
*				  to calling the function:
*
*				  string nameStudent			: Assignment Name
*				  char * address				: Assignment Name
*				  char * city					: Assignment Name
*				  char * state					: Assignment Name
*				  int zipCode					: Assignment Name
*  POST-CONDITIONS:
*  			  	  The function will output the class heading
*
* ***********************************************************************/


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
*	_________________________________________________________________________
*	PRE-CONDITIONS:
*				  The following parameters need to have a defined value prior
*				  to calling the function:
*
*				  const software & obj		: Assignment Name
*				  char * nameStudent		: Assignment Name
*				  char * address			: Assignment Name
*				  char * city				: Assignment Name
*				  char * state				: Assignment Name
*				  char * zipCode			: Assignment Name
*  POST-CONDITIONS:
*  			  	  The function will output the class heading
*
*  			  	  const char * name			: Assignment Name
*  			  	  const char * add			: Assignment Name
*  			  	  const char * cit			: Assignment Name
*  			  	  const char * stat			: Assignment Name
*  			  	  const char * zip			: Assignment Name
*
*  			  	  int nameSize;				: Assignment Name
*				  int addSize;				: Assignment Name
*				  int citySize;				: Assignment Name
*				  int stateSize;			: Assignment Name
*				  int zipSize;				: Assignment Name
* ***********************************************************************/

software::software(const software & obj)
{
	cout << "Copy constructor allocating ptr." << endl;

	nameSize = obj.nameSize;
	nameStudent = new char[nameSize+1];
	strcpy(nameStudent, obj.nameStudent);

	addSize = obj.addSize;
	address = new char[addSize+1];
	strcpy(address, obj.address);

	citySize = obj.citySize;
	city = new char[citySize+1];
	strcpy(city, obj.city);

	stateSize = obj.stateSize;
	state = new char[stateSize+1];
	strcpy(state, obj.state);

	zipSize = obj.zipSize;
	zipCode = new char[zipSize+1];
	strcpy(zipCode, obj.zipCode);
}


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
*	PRE-CONDITIONS:
*				  The following parameters need to have a defined value prior
*				  to calling the function:
*
*				  const software & obj		: Assignment Name
*				  char * nameStudent		: Assignment Name
*				  char * address			: Assignment Name
*				  char * city				: Assignment Name
*				  char * state				: Assignment Name
*				  char * zipCode			: Assignment Name
*  POST-CONDITIONS:
*  			  	  The function will output the class heading
*
*  			  	  const char * name			: Assignment Name
*  			  	  const char * add			: Assignment Name
*  			  	  const char * cit			: Assignment Name
*  			  	  const char * stat			: Assignment Name
*  			  	  const char * zip			: Assignment Name
*
*  			  	  int nameSize;				: Assignment Name
*				  int addSize;				: Assignment Name
*				  int citySize;				: Assignment Name
*				  int stateSize;			: Assignment Name
*				  int zipSize;				: Assignment Name
* ***********************************************************************/
void software::change(const char *name,const char *add, const char *cit
	     	 	 	 ,const char *stat,const char *zip)
{
	delete [] nameStudent;
	nameSize = strlen(name);
	nameStudent = new char[nameSize+1];
	strcpy(nameStudent, name);

    delete [] address;
    addSize = strlen(add);
    address = new char[addSize+1];
    strcpy(address, add);

    delete [] city;
    citySize = strlen(cit);
    city = new char[citySize+1];
    strcpy(city, cit);

    delete [] state;
    stateSize = strlen(stat);
    state = new char[stateSize+1];
    strcpy(state, stat);

    delete [] zipCode;
    zipSize = strlen(zip);
    zipCode = new char[zipSize+1];
    strcpy(zipCode, zip);
}

/***************************************************************************
* FUNCTION displaySoftware
* ____________________________________________________________________________
*	This function is to display the name, address, city, state and zip
*	code. The setw function is used to assist with the formatting. This
*	function is called by the copy constructor object instantiated in the
*	main.cpp file.
* _________________________________________________________________________
*
*
*	PRE-CONDITIONS:
*				  The following parameters need to have a defined value prior
*				  to calling the function:
*
*				  char * nameStudent		: Assignment Name
*				  char * address			: Assignment Name
*				  char * city				: Assignment Name
*				  char * state				: Assignment Name
*				  char * zipCode			: Assignment Name
*  POST-CONDITIONS:
*  			  	  The function will output the class heading
*
* ***********************************************************************/
void software::displaySoftware()
{

	cout << left << setw(13) << nameStudent << setw(21) << address << setw(14)
		 << city << setw(6) << state << zipCode << endl;
}
