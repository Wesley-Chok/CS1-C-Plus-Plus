// Attached: HW_10a, HW_10b, HW_10c, HW_10d
// ============================================================================
// Program: HW_10b
// ============================================================================
// Programmer: Wesley Chok
// Class: CS 1B
// ============================================================================

#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
	vector<int>values;

	values.push_back(1);
	values.push_back(2);
	values.push_back(4);
	values.push_back(9);
	values.push_back(5);

	cout << "Vector: ";

	for(int  i = 0; i < values.size(); i++)
	{
		cout << left << setw(3) << values[i]++;
	}

	for(int i = 0; i < values.size(); i++)
	{
		values[i] = values[i] - 1;
	}


	cout << endl;


	values.insert(values.begin(), 3);

	cout << "Vector: ";

	for(int j = 0; j < values.size(); j++)
	{

		cout << left << setw(3) << values[j];

	}

	cout << endl;


	values.erase(values.begin() + 0);

	cout << "Vector: ";

	for(int z = 0; z < values.size(); z++)
	{
		cout << left << setw(3) << values[z]++;
	}
	for(int z = 0; z < values.size(); z++)
	{
		values[z] = values[z] - 1;
	}


	cout << endl;


	values.pop_back();

	cout << "Vector: ";

	for(int y = 0; y < values.size(); y++)
	{
		cout << left << setw(3) << values[y]++;
	}

	cout << endl;


	cout << "There are " << values.size() << " values";

	return 0;
}

//// ============================================================================
///* OUTPUT:
///*
///* Vector: 1  2  4  9  5
///* Vector: 3  1  2  4  9  5
///* Vector: 1  2  4  9  5
///* Vector: 1  2  4  9
///* There are 4 values
//// ============================================================================
