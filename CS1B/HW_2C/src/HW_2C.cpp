// Attached: HW_2c
// ============================================================================
// Program: HW_2c
// ============================================================================
// Programmer: Wesley Chok
// Class: CS 1B
// ============================================================================

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

void readFile(char gradesArray[5][3], const int ROW, const int COL);
void displayTable(char gradesArray[5][3], const int ROW, const int COL);


int main()
{
	const int ROW = 5;
	const int COL = 3;
	char gradesArray[ROW][COL];

	readFile(gradesArray, ROW, COL);

	displayTable(gradesArray, ROW, COL);



	return 0;
}

void readFile(char gradesArray[5][3], const int ROW, const int COL)
{
	ifstream inputStream;

	inputStream.open("grades.txt");

	if(inputStream.is_open())
	{

	for(int i = 0; i < ROW; i++)
	{
		for(int j = 0; j < COL; j++)
		{
			inputStream >> gradesArray[i][j];
		}
	}
	}
}

void displayTable(char gradesArray[5][3], const int ROW, const int COL)
{

	double positionTotal = 0;

	cout << "All Grades" << endl;

	cout << "Student" << setw(10) << "English" << setw(9) << "History"
		 << setw(6) << "Math" << endl;

	for(int i = 0; i < ROW; i++)
	{
		cout << left << setw(10) << i+1;
			for(int j = 0; j < COL; j++)
			{
				cout << setw(9) << left << gradesArray[i][j];

			}

	cout << endl;
	}
	cout << endl;

	cout << "Student GPAs" << endl;
	cout << "Student" << endl;

	for(int i = 0; i < ROW; i++)
	{
		positionTotal = 0;
		cout << left << setw(10) << i+1;
			for(int j = 0; j < COL; j++)
			{

				switch(gradesArray[i][j])
				{
				case 'A':
					positionTotal += 4;
									break;
				case 'B':
					positionTotal += 3;
									break;
				case 'C':
					positionTotal += 2;
									break;
				case 'D':
					positionTotal += 1;
									break;
				default:
					positionTotal += 0;
									break;

				}

			}
	positionTotal = positionTotal / 3;

	cout << fixed << setprecision(2) << positionTotal << endl;
	}

	cout << endl;

	cout << "Average GPA by Subject " << endl;

	cout << "English" << setw(10) << right << "History"  << setw(7)
		 << "Math" << endl;

	for(int i = 0; i < COL; i++)
	{
		positionTotal = 0;
			for(int j = 0; j < ROW; j++)
			{

				switch(gradesArray[j][i])
								{
								case 'A':
									positionTotal += 4;
													break;
								case 'B':
									positionTotal += 3;
													break;
								case 'C':
									positionTotal += 2;
													break;
								case 'D':
									positionTotal += 1;
													break;
								default:
									positionTotal += 0;
													break;

								}

			}
			positionTotal = positionTotal / 5;

			cout << fixed << setprecision(2)  << left << setw(10)
				 << positionTotal;

	}


}

//// ============================================================================
///* OUTPUT:
// * All Grades
// * Student   English  History  Math
// * 1         A        A        B
// * 2         C        C        F
// * 3         C        D        B
// * 4         B        A        C
// * 5         B        A        B

// * Student GPAs
// * Student
// * 1         3.67
// * 2         1.33
// * 3         2.00
// * 4         3.00
// * 5         3.33

// * Average GPA by Subject
// * English   History   Math
// * 2.80      3.00      2.20
//// ============================================================================







