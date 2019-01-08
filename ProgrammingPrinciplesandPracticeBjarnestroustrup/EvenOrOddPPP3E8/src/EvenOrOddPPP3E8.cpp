//============================================================================
// Name        : EvenOrOddPPP3E8.cpp
// Author      : Dilip Maheshwari
// Version     : 1.0
// Copyright   : Your copyright notice
// Description : Write a program to test an integer value determine if it is odd or even.
//               As always make sure your output clear and complete.
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout<<"Enter the number you can want to check is even or odd: ";
	int num;
	cin >> num;
	if(num%2 == 0)
		cout<<"The number you entered "<< num << " is an even number. \n";
	else
		cout<<"The number you entered "<< num << " is an odd number. \n";

	return 0;
}
