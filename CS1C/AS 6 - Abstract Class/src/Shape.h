#ifndef SHAPE_H_
#define SHAPE_H_

#include <iostream>
using namespace std;

class Shape
{
	float length;
public:
	virtual void calcPerimeter() = 0;
	virtual void calcArea() = 0;

	Shape(float initial)
	{
		length = initial;
	}
};

class Square : public Shape
{

public:

	void calcPerimeter()
	{
		cout << length * 4;
	}
	void calcArea()
	{
		cout << length * 2;
	}
};

//class Triangle : public Shape
//{
//public:
//	void calcPerimeter();
//	void calcArea();
//};

//void printPerimeter()
//{
//	cout << "This is the perimeter of a square: " << square.calcPerimeter();
//}
//
//void printArea()
//{
//
//}




#endif /* SHAPE_H_ */
