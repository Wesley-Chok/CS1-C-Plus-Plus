// Attached: HW_10a, HW_10b, HW_10c, HW_10d
// ============================================================================
// Program: HW_10a
// ============================================================================
// Programmer: Wesley Chok
// Class: CS 1B
// ============================================================================

#include "header.h"

int main()
{
	cout << "The greater value of 1 and 2 = " << std::max(1,2) << endl;
	cout << "The greater value of 2 and 1 = " << std::max(2,1) << endl;
	cout << "The greater value of 'a' and 'z' = " << std::max('a','z') << endl;
	cout << "The greater value of 3.14 and 2.72 = " << std::max("3.14", "2.72")
	     << endl;

	system("pause");
	return 0;
}

//// ============================================================================
///* OUTPUT:
///*
///* The greater value of 1 and 2 = 2
///* The greater value of 2 and 1 = 2
///* The greater value of 'a' and 'z' = z
///* The greater value of 3.14 and 2.72 = 3.14
///* Press any key to continue . . .
//// ============================================================================
