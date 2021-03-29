#ifndef CLOCKTYPE_H_
#define CLOCKTYPE_H_

class ClockType
{
private:
	int hrs;
	int mins;
	int secs;

public:

	ClockType();

	ClockType(int hrs, int mins, int secs);

	~ClockType();


	void setTime(int hrs, int mins, int secs);

	void incrementSeconds();

	void incrementMinutes();

	void incrementHours();

	void printTime();

	bool areTimesEqual(ClockType other);

};




#endif /* CLOCKTYPE_H_ */
