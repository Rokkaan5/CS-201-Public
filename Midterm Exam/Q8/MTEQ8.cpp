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
	vector <int> v1 = { 1,2,3,4 };          //true
	vector <int> v2 = { 3,1,4,5 };          //false
	vector <int> v3 = { 4,6,8,9 };          //true
	vector <int> v4 = { 7,9,12,25,21,34 };  //false
	vector <int> v5 = { 11,21,16,14,18 };   //false
	vector <int> v6 = { 5,6,9,10,15,39 };   //true

	cout << std::boolalpha;
	vector<vector<int>> v = { v1,v2,v3,v4,v5,v6 };
	for (auto j = 0; j < v.size(); ++j)
	{
		cout << isSorted(v[j]) << endl;
	}

	return 0;
}
