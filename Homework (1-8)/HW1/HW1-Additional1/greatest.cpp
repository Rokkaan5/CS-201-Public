// File Name: greatest.cpp
// Author: Jasmine Kobayashi
// Date: 9/11/2020
// Description: A program that user to input positive integers until they input 0 or a negative number, and will output the greatest number

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	cout << "Enter a sequence of positive integers, ending with zero. \n I will print the greatest positive number entered." << endl;
	int user_input = 1;
	int greatest = 0;

	while (user_input > 0)
	{
		cout << "Enter a positive integer (0 or negative # to end): " ;
		cin >> user_input;

		if (user_input > greatest)
		{
			greatest = user_input;
		}

		if (user_input <= 0 and greatest == 0)
		{
			cout << endl;
			cout << "No positive integers were entered." << endl;
			break;
		}
		
		if (user_input <= 0 and greatest != 0)
		{
			cout << endl;
			cout << "The greatest number entered: " << greatest << endl;
			break;
		}

	}

	return 0;
}