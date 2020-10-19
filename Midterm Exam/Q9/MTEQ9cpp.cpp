// File Name: MTEQ9.cpp     (Midterm Exam Question 9)
// Author: Jasmine Kobayashi
// Date: 10/18/2020
// Description; Function that takes a string and prints all substrings in that string. 

#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

int PrintSubStrings(string stri)
{
	for (int i = 0; i < stri.size(); ++i)
	{
		cout << stri[i] << ' ';
	}
	cout << endl;
	for (int j = 0; j < stri.size() - 1; ++j)
	{
		cout << stri[j] << stri[j + 1] << ' ';
	}
	cout << endl;
	return 1;
}

int main()
{
	string s = "abc";
	string s2 = "Sakura";

	PrintSubStrings(s);
	PrintSubStrings(s2);

	return 0;
}