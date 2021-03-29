#ifndef GRADEACTIVITY_H_
#define GRADEACTIVITY_H_

class GradedActivity
{
protected:
	double score;

public:
	GradedActivity();

	GradedActivity(double testScore);

	~GradedActivity();

	void setScore(double testScore);

	double getScore(int questions, int missed);

	char getLetterGrade();
};





#endif /* GRADEACTIVITY_H_ */
