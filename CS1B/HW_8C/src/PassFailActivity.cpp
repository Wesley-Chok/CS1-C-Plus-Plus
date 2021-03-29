#include "PassFailActivity.h"

PassFailActivity::PassFailActivity()
{
	minPassingScore = 0;
}

PassFailActivity::PassFailActivity(double mps)
{
	this->minPassingScore = mps;
}

PassFailActivity::~PassFailActivity(){}

void PassFailActivity::setMinPassingScore(double mps)
{
	this->minPassingScore = mps;
}

double PassFailActivity::getMinPassingScore()
{
	return minPassingScore;
}

char PassFailActivity::getLetterGrade()
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

