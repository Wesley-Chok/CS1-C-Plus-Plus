#include "GradeActivity.h"

GradedActivity::GradedActivity()
{
	double score = 0;
}

GradedActivity::GradedActivity(double testScore)
{
	this->score = testScore;
}

GradedActivity::~GradedActivity(){}

void GradedActivity::setScore(double testScore)
{
	this->score = testScore;
}

double GradedActivity::getScore(int questions, int missed)
{
	double temp = questions - missed;
	return (temp / questions) * 100;
}

char GradedActivity::getLetterGrade()
{
	if(score >= 90)
	{
		return 'A';
	}

	else if(score >= 80)
	{
		return 'B';
	}

	else if(score >= 70)
	{
		return 'C';
	}

	else if(score >= 60)
	{
		return 'D';
	}

	else if (score >= 0)
	{
		return 'F';
	}
}
