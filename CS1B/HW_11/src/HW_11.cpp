// Attached: HW_11
// ============================================================================
// Program: HW_11
// ============================================================================
// Programmer: Wesley Chok
// Class: CS 1B
// ============================================================================

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <fstream>
#include <ctime>
#include <thread>
#include <Windows.h>
using namespace std;

void writeRoots();
void writeSquares();

ofstream roots;
ofstream squares;


int main()
{
	roots.open("roots.txt");
	squares.open("squares.txt");

	clock_t start;
	clock_t end;

	start = clock();


	thread firstThread(writeRoots);

	firstThread.join();


	thread secondThread(writeSquares);

	secondThread.join();



	end = clock();


	cout << "Runtime = " << (end-start)/CLK_TCK << " seconds.\n\n";


	return 0;
}

void writeRoots()
{
	for(int i = 1; i <= 1000000; ++i)
	{
		if(!roots.eof())
		{
			roots << sqrt(double(i)) << endl;
		}
		else
		{
			roots << "File not found " << endl;
		}
	}
}

void writeSquares()
{
	for(int i = 1; i <= 1000000; ++i)
	{
		if(!squares.eof())
		{
			squares << (i*i) << endl;
		}
		else
		{
			squares << "File not found " << endl;
		}
	}
}
//// ============================================================================
///* OUTPUT FOR WITHOUT THREADS:
///* main: startup
///*
///* main: waiting for file thread
///*
///* Writing 1,000,000 square roots to a file
///*
///* The square roots are ready
///*
///* Squaring 1,000,000 numbers
///*
///* The squares are ready
///*
///* main: done
///*
///* Runtime = 12 seconds.
//// ============================================================================
