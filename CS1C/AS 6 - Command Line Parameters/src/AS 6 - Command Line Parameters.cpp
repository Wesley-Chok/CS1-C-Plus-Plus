//============================================================================
// Name        : AS.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main(int argc, char*argv[])
{
	int index;

	cout << "There were" << argc << "arguments on the command line" << endl;

	cout << "They are" << endl;

	for(index = 0; index < argc; index++)
	{
		cout << argv[index] << "" << endl;
	}


	cout << "This is the second character of the first and last name" << endl;

	cout << argv[1][1] << endl;
	cout << argv[2][1] << endl;

	return 0;
}
