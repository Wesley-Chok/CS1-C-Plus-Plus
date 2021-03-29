#ifndef DATE_H_
#define DATE_H_



class Date
{
private:
	int month;
	int day;
	int year;

public:

	Date();

	Date(int month, int day, int year);

	~Date();


	void setDate(int month, int day, int year);

	void addDays(int day);

	void displayDate();

};





#endif /* DATE_H_ */
