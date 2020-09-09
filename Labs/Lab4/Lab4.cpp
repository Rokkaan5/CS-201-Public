// File name: Lab4.cpp
// Author: Jasmine Kobayashi
// Date: 9/9/2020
// Description: Program to print numbers 1-100, and prints a string at certain numbers divisible by a certain number

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	for (int i = 0; i <= 100; ++i)
		if (i % 3 == 0)
			cout << "Fizz" << endl;
		else
			cout << i << endl;
	return 0;
}