// File Name: Lab7.cpp
// Author: Jasmine Kobayashi
// Date: 9/16/2020
// Description:

#include <iostream>
#include "intio.hpp"
using std::cout;
using std::endl;


int main()
{
	cout << "Type an integer(1/3): ";
	int num1 = getInt();
	cout << "Type another integer(2/3): ";
	int num2 = getInt();
	cout << "Type another integer(3/3): ";
	int num3 = getInt();

	putInt(num1, 10);
	cout << endl;
	putInt(num2, 10);
	cout << endl;
	putInt(num3, 10);
	cout << endl;
	return 0;
}