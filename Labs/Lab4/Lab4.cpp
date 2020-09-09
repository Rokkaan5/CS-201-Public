// File name: Lab4.cpp
// Author: Jasmine Kobayashi
// Date: 9/8/2020
// Description: Program to print numbers 1-100, and prints statement(s) at certain numbers divisible by a certain number(s)

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int required(int div)
{
	for (int i = 0; i <= 100; ++i)
		if (i % div == 0)
			cout << "Fizz" << endl;
		else
			cout << i << endl;
	return 0;
}

int additional(int div1, int div2)
{
	for (int i = 1; i <= 100; ++i)
		if (i % div1 == 0 and i % div2 == 0)
			cout << "Fizz Buzz" << endl;
		else if (i % div1 == 0)
			cout << "Fizz" << endl;
		else if (i % div2 == 0)
			cout << "Buzz" << endl;
		else
			cout << i << endl;
	return 0;
}

int main()
{
	//required(3);
	additional(3,5);

	return 0;
}