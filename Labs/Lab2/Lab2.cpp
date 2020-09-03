// File Name: Lab2.cpp
// Author: Jasmine Kobayashi
// Date: 9/2/2020
// Description: A program that asks the user to input an integer and the output will give the square of the next integer.

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int n;
	cout << "Type an integer: " << endl;
	cin >> n;
	cout << "You typed the integer: " << n << endl;
	int m;
	m = pow((n + 1), 2);                            // comment from professor: typically when just squaring, mult. is more efficient
	cout << "Square of next integer is: " << m << endl;

	return 0;
}