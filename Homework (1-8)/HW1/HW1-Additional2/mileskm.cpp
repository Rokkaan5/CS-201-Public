// File Name: mileskm.cpp
// Author: Jasmine Kobayashi
// Date: 9/11/2020
// Description: A program that converts miles to kilometers. 

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	float mile;
	float km;
	cout << "Enter number of miles to convert to kilometers: ";
	cin >> mile;
	km = mile / 1.609;

	cout << endl;
	cout << mile << " miles = " << km << " kilometers" << endl;

	return 0;
}