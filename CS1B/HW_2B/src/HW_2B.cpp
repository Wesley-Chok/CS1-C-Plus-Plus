// Attached:
// ============================================================================
// Program: HW_2b
// ============================================================================
// Programmer: Wesley Chok
// Class: CS 1B
// ============================================================================


#include <iostream>
#include <iomanip>
using namespace std;

void getData(float numArray[3][4], const int ROW, const int COL);
void displayArray(float numArray[3][4], const int ROW, const int COL);

int main()
{
	const int ROW = 3;
	const int COL = 4;
	float numArray[ROW][COL];

	getData(numArray, ROW, COL);
	displayArray(numArray, ROW, COL);


	return 0;
}
void getData(float numArray[3][4], const int ROW, const int COL)
{
	cout << "Enter integers into the 2-Dimensional array:" << endl << endl;

	for(int i = 0; i < ROW; i++)
	{
		for(int j = 0; j < COL; j++)
		{
			cout << "Enter a number:" ;
			cin >> numArray[i][j];
		}
	}
}

void displayArray(float numArray[3][4], const int ROW, const int COL)
{
	cout << "Here is the data for the 2 dimensional array" << endl;
	for(int i = 0; i < ROW; i++)
	{
		for(int j = 0; j < COL; j++)
		{
			cout << setw(6) << right << numArray[i][j];
		}
		cout << endl;
	}

}

//// ============================================================================
///* OUTPUT:
// *Enter integers into the 2-Dimensional array:
// *
// *Enter a number:1
// *Enter a number:45
// *Enter a number:765
// *Enter a number:6
// *Enter a number:32
// *Enter a number:45
// *Enter a number:789
// *Enter a number:343
// *Enter a number:22
// *Enter a number:64
// *Enter a number:12
// *Enter a number:555
// *Here is the data for the 2 dimensional array
// *     1    45   765     6
// *    32    45   789   343
// *    22    64    12   555
//// ============================================================================
