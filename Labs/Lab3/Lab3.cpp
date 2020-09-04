// File Name: Lab3.cpp
// Author: Jasmine Kobayashi
// Date: 9/4/2020
// Description: A program utilizing while-loops (printing numbers and boxes)

#include <iostream>
using std::cout;
using std::endl;

int numbers(int mini,int maxi)
{
	int i = 1;
	while (i >= mini and i <= maxi)
	{
		cout << i << endl;
		++i;
	}
	return 0;
}

int boxes(int width,int height)
{
	int i = 1;
	while (i < height + 1)
	{
		int j = 1;
		while (j < width + 1)
		{
			cout << "*";
			++j;
		}
		cout << endl;
		++i;
	}
	return 0;
}

int main()
{

	numbers(1,20);
	boxes(60, 10);

	return 0;
}