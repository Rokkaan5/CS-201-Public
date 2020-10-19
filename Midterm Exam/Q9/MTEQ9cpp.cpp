// File Name: MTEQ9.cpp     (Midterm Exam Question 9)
// Author: Jasmine Kobayashi
// Date: 10/18/2020
// Description; Function that takes a string and prints all substrings in that string. 

#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::endl;
using std::string;
using std::vector;

int PrintSubStrings(string stri)
{
	for (int i = 0; i < stri.size(); ++i)
	{
		for (int j = 0; j < stri.size()-i; ++j)
		{
			cout << stri.substr(j,i+1) << ' ';
		}
		cout << endl;
	}
	return 1;
}


int main()
{
	string s1 = "abc";
	string s2 = "Exam";
	string s3 = "Miderm";
	string s4 = "Computer";
	string s5 = "Science";

	vector<string> v = { s1,s2,s3,s4,s5 };

	for (int l = 0; l < v.size(); ++l)        //Testing
	{
		PrintSubStrings(v[l]);
	}


	return 0;
}