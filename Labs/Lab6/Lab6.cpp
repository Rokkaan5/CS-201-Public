// File Name: Lab6.cpp
// Author: Jasmine Kobayashi
// Date: 9/15/2020
// Description: A program that utilizes a function that takes a string as a parameter and outputs that string

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

void printstring(string strng)
{
	cout << strng << endl;
	cout << "String length is " << strng.length() << endl;
	return;
}

int main()
{
	printstring("Testing, testing");
	printstring("Hello, World!");
	printstring("Hello, hello, hello");
	return 0;
}