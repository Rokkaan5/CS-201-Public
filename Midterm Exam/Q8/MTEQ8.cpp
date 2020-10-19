// File Name: MTEQ8.cpp      (Midterm Exam Question 8)
// Author: Jasmine Kobayashi
// Date: 10/18/2020
// Description: Function that takes a vector of ints and returns true if vector is sorted, and false if not.

#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

bool isSorted(vector<int> vec)
{
	for (auto i = 0; i < vec.size()-1; ++i)
	{
		if (vec[i + 1] < vec[i])
		{
			return false;
		}
	}
	return true;
}

int main()
{
	
	return 0;
}
