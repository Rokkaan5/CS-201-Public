// File name: diamond.cpp
// Author: Jasmine Kobayashi
// Date: 9/11/20
// Description: A program that inputs a positive interger from a user, and prints a correspondingly sized diamond made of pound signs

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using namespace std;

int diamond(int size)
{
	for (int i = 1; i <= size; ++i)
	{	
		for (int j = 0; j < (size - i); ++j)
		{
			cout << " ";
		}
		for (int k = 0; k < (2 * i - 1); ++k)
		{
			cout << "#";
		}
		cout << endl;
	}

	int l = size - 1;
	while(l>0)
	{
		for (int m = 0; m < size-l; ++m)
		{
			cout << " ";
		}
		for (int n = 0; n < (2 * l - 1); ++n)
		{
			cout << "#";
		}
		cout << endl;
		--l;
	}

	return 0;
}

int main()
{
	int Size;
	cout << "Enter a positive non-zero integer:";
	cin >> Size;

	// Potential Error Messages
	/*while (isdigit(Size) == false)
	{
		cout << "Please enter an INTEGER (positive & non-zero): ";
		cin >> Size;
	}*/
	while (Size == 0)
	{
		cout << "please enter a non-zero integer: ";
		cin >> Size;
	}
	while (Size < 0)
	{
		cout << "Please enter a POSITIVE integer: ";
		cin >> Size;
	}
	cout << endl;

	//---------------------

	diamond(Size);

	return 5;
}