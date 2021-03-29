// Attached: HW_10a, HW_10b, HW_10c, HW_10d
// ============================================================================
// Program: HW_10d
// ============================================================================
// Programmer: Wesley Chok
// Class: CS 1B
// ============================================================================

#include <list>
#include <iostream>
#include <string>
using namespace std;

int main()
{
	list<char> characters;
	string word;
	bool diff;

	cout << "Enter a word: ";
	getline(cin, word);

	for (int i = 0; word[i] != '\0'; i++)
	{
		characters.push_back(word[i]);
	}

	list<char>::iterator it = characters.begin();
	list<char>::reverse_iterator rit = characters.rbegin();



	while(it != characters.end())
	{

		if(*it == *rit)
		{
			diff = false;
		}
		else
		{
			diff = true;
		}

		it++;
		rit++;
	}

	cout << word << " is " << (diff ? "not " : "") << "a palindrome. "
		 << endl;




return 0;
}

//// ============================================================================
///* OUTPUT #1:
///* Enter a word: racecar
///* racecar is a palindrome.
///*
///* OUTPUT #2:
///* Enter a word: yellow
///* yellow is not a palindrome.
//// ============================================================================
