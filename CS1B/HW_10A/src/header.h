#include <iostream>
#include <algorithm>
using namespace std;

#ifndef HEADER_H_
#define HEADER_H_

template <class T> const T & max(const T& a, const T& b)
{
	return (a<b)?b:a;
}







#endif /* HEADER_H_ */
