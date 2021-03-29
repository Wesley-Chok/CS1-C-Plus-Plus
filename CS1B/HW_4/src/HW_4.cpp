// Attached: HW_4
// ============================================================================
// Program: HW_4
// ============================================================================
// Programmer: Wesley Chok
// Class: CS 1B
// ============================================================================

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Box
{
	int id;
	char boxWidth[30];
	char boxHeight[30];
	char boxLength[30];
	Box *next;
	Box *back;
};

typedef Box * ptrType;

bool insertDimensions(ptrType & head);
void displayDimensions(const ptrType head);
void deleteDimensions(ptrType & head);

int main()
{
	char answer;

	do
	{
		system("cls");

		ptrType head = NULL;

		cout << "Enter the specifications of different types of boxes." << endl;
		cout << "Include the number of boxes presently in inventory. " << endl;

		cout << "Enter boxes - (-1 to quit): " << endl << endl;
		bool doAgain = true;

		do
		{
			doAgain = insertDimensions(head);

		}while (doAgain == true);

		cout << "Would you like to see the list of boxes Y/N? ";
		cin >> answer;


		if (toupper(answer) == 'Y')
			displayDimensions(head);
			deleteDimensions(head);

			displayDimensions(head);

		cout << "Do again Y/N? ";
		cin >> answer;

	} while (toupper(answer) == 'Y');

	return 0;
}


bool insertDimensions(ptrType & head)
{
	ptrType temp = new(Box);
	bool doAgain = true;
	int idNum = 0;

	cout << left << setw(10)<< "ID:  ";
	cin >> idNum;

	if (idNum == -1)
		doAgain = false;

	else
	{
		temp->id = idNum;
		cin.ignore();
		cout << left << setw(10)<< "width:  ";
		cin.getline(temp->boxWidth, 30);

		cout << left << setw(10)<< "height:  ";
		cin.getline(temp->boxHeight, 30);

		cout << left << setw(10)<< "length:  ";
		cin.getline(temp->boxLength, 30);

		cout << endl;

		doAgain = true;

		if (head == NULL)
		{
			temp->next = head;
			temp->back == NULL;
			head = temp;
		}
		else
		{
			temp->next = head;
			temp->back = NULL;
			head->back = temp;
			head = temp;
		}

	}
	return doAgain;
}

void displayDimensions(const ptrType head)
{

	system("cls");
	if (head == NULL)
	{
		cout << "List is empty.\n";
		return;
	}
	ptrType temp = head;

	cout << "Types of boxes: " << endl << endl;

	cout << right << "ID#" << setw(13) << "Width" << setw(13)<< "Height"
			 << setw(13) << "Length" << endl;
	cout << "------------------------------------------" << endl;

	while (temp != NULL)
	{
		cout << fixed << showpoint << setprecision(2)
			 << right << temp->id << setw(13)
			 << temp->boxWidth << setw(13)
			 << temp->boxHeight << setw(13) << temp->boxLength << endl;

		temp = temp->next;
	}
}

void deleteDimensions(ptrType & head)
{
	int id;
	ptrType temp = new(Box);
	temp = head;

	if(head == NULL)
	{
		cout << "List is empty. " << endl << endl;
		return;
	}

	cout << "Enter the ID of the box to be deleted: ";
	cin >> id;

	while(temp->id != id)
	{
		temp = temp->next;
	}
	if(temp->id == id)
	{
		head=temp;
		head = head->next;
		while(head->next!=NULL)
		{
			head->next = head->next->next;
		}


	}
	else {
		cout << id << " is not in the list. " << endl << endl;
	}


}

//// ============================================================================
///* OUTPUT:
// * Enter the specifications of different types of boxes.
// * Include the number of boxes presently in inventory.
// * Enter boxes - (-1 to quit):

// * ID:       103
// * width:    2.75
// * height:   3.75
// * length:   9.00

// * ID:       102
// * width:    3.50
// * height:   5.00
// * length:   7.75

// * ID:       101
// * width:    4.00
// * height:   8.50
// * length:   6.50
//
// * ID:       100
// * width:    3.25
// * height:   2.50
// * length:   3.50
//
// * ID:       -1
// * Would you like to see the list of boxes Y/N? Y
// * Types of boxes:
//
// * ID#        Width       Height       Length
// * ------------------------------------------
// * 100         3.25         2.50         3.50
// * 101         4.00         8.50         6.50
// * 102         3.50         5.00         7.75
// * 103         2.75         3.75         9.00
// * Enter the ID of the box to be deleted: 101
// * Types of boxes:
//
// * ID#        Width       Height       Length
// * ------------------------------------------
// * 100         3.25         2.50         3.50
// * 102         3.50         5.00         7.75
// * 103         2.75         3.75         9.00
// * Do again Y/N? N
//// ============================================================================
