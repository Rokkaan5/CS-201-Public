// File Name: MTEQ1.cpp (Midterm Exam Question 1)
// Author: Jasmine Kobayashi
// Date: 10/18/2020
// Description: Convert given for-loop into a while-loop

#include <iostream>
using std::cout;
using std::endl;

int main()
{
	/*for (int i = -20; i < 1999; i += 3)
	{
		cout << i << " ";
	}*/

	int i = -20;
	while ( i < 1999)
	{
		cout << i << " ";         // Just added the space, so that numbers in output are easier to distinguish from each other
		i += 3;
	}

	return 0;

}