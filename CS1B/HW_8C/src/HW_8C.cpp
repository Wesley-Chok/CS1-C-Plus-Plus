// Attached: HW_8a, HW_8b, HW_8C
// ============================================================================
// Program: HW_8c
// ============================================================================
// Programmer: Wesley Chok
// Class: CS 1B
// ============================================================================

#include <iostream>
#include <iomanip>
#include "PassFailExam.h"
using namespace std;


	int main()
	{
	   int questions;
	   int missed;
	   double minPassing;

	   GradedActivity exam_1(88.0);


	   cout << "The student's grade on Exam #1 is "
	        << exam_1.getLetterGrade() << endl << endl
		   << "---------------------------\n\n";

	   cout << "How many questions are on the exam? ";
	   cin >> questions;


	   cout << "How many questions did the student miss? ";
	   cin >> missed;


	   cout << "Enter the minimum passing score for this test: ";
	   cin >> minPassing;


	   PassFailExam exam_2(questions, missed, minPassing);


	   cout << fixed << setprecision(1);
	   cout << "\nEach question counts "
	        << exam_2.getPointsEach() << " points.\n";
	   cout << "The minimum passing score is "
	        << exam_2.getMinPassingScore() << endl;
	   cout << "The student's exam score is "
	        << exam_2.getScore(questions, missed) << endl;


	   cout << "The student's grade on Exam #2 is "
	        << exam_2.getLetterGrade() << endl;
	   return 0;
	}

//// ============================================================================
///* OUTPUT:
///* The student's grade on Exam #1 is B
///*
///* ---------------------------
///*
///* How many questions are on the exam? 30
///* How many questions did the student miss? 3
///* Enter the minimum passing score for this test: 21
///*
///* Each question counts 3.3 points.
///* The minimum passing score is 21.0
///* The student's exam score is 90.0
///*  The student's grade on Exam #2 is P
//// ============================================================================
