#ifndef PASSFAILEXAM_H_
#define PASSFAILEXAM_H_

#include "PassFailActivity.h"
#include <iostream>
using namespace std;

class PassFailExam : public PassFailActivity
{
private:
	int numQuestions;
	double pointsEach;
	int numMissed;

public:
	PassFailExam();

	PassFailExam(int numQuestions, int missed, double mps);

	~PassFailExam();

	void set(int questions, int missed);

	double getNumQuestions();

	double getPointsEach();

	double getNumMissed();

};



#endif /* PASSFAILEXAM_H_ */
