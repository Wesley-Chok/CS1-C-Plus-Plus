#ifndef PASSFAILACTIVITY_H_
#define PASSFAILACTIVITY_H_

#include "GradeActivity.h"

class PassFailActivity : public GradedActivity
{
protected:
	double minPassingScore;

public:
	PassFailActivity();

	PassFailActivity(double mps);

	~PassFailActivity();

	void setMinPassingScore(double mps);

	double getMinPassingScore();

	char getLetterGrade();
};





#endif /* PASSFAILACTIVITY_H_ */
