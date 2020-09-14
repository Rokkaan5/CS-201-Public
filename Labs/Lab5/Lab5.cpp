// File Name: Lab5.cpp
// Author: Jasmine Kobayashi
// Date: 9/13/2020
// Description: Program that uses switch and does one of three things when a number is inputted

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int number = 1;
	cout << "This program will output a certain message depending on the integer inputted. Enter 0 to exit the program" << endl;
	while (true)
	{
		cout << "Please input a integer (enter 0 to exit): ";
		cin >> number;

		if (number == 0)
		{
			break;
		}
		
		switch (number % 10)
		{
		case 1:
			cout << "Bark bark" << endl;
			break;
		case 5:
			cout << "Go! Go! Go!" << endl;
			break;
		case 4:
			cout << "Shhhh" << endl;
			break;
		case 8:
			cout << "Ha ha ha" << endl;
			break;
		default:
			cout << "Meh, not interesting" << endl;
			break;
		}
	}
	return 0;
}