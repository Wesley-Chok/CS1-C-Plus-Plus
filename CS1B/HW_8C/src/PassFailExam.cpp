#include "PassFailExam.h"

PassFailExam::PassFailExam()
{
	int numQuestions = 0.0;
	double pointsEach = 0.0;
	int numMissed = 0.0;
}

PassFailExam::PassFailExam(int numQuestions, int missed, double mps)
							: PassFailActivity(mps)
{
	set(numQuestions, missed);
}

PassFailExam::~PassFailExam(){}

void PassFailExam::set(int questions, int missed)
{
	double numericScore;

	numQuestions = questions;
	numMissed = missed;

	pointsEach = 100.0 / numQuestions;

	numericScore = 100.0 - (missed * pointsEach);
}

double PassFailExam::getNumQuestions()
{
	return numQuestions;
}

double PassFailExam::getPointsEach()
{
	return pointsEach;
}

double PassFailExam::getNumMissed()
{
	return numMissed;
}


