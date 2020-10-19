// File Name: MTEQ7.cpp      (Midterm Exam Question 7)
// Author: Jasmine Kobayashi
// Date: 10/18/20
// Description: A function that takes two integers and prints each integer in the range between them. 

#include <iostream>
using std::cout;
using std::endl;


int print_range(int x, int y)
{
	for (int i = x + 1; i < y; ++i)
	{
		cout << i << ' ';
	}
	cout << endl;
	return 1;
}


int main()
{
	print_range(3, 8);
	print_range(-10, 5);
	print_range(20, 40);
	print_range(0, 30);
	return 0;
}