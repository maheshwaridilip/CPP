//============================================================================
// Name        : PPP_4E5_Calculator.cpp
// Author      : Dilip Maheshwari
// Version     :
// Copyright   : You can improve and inform at mailto:idilipmaheshwari@gmail.com or comment http://www.dilipmaheshwari.com
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout<<"Enter two values for calculate with a operator like 34.5 45 +";
	cout<<"Supported operator: + - * / \n";
	double n1, n2;
	char s;
	while(cin >> n1 >> n2 >> s)
	{
		switch(s){

			case '+':
				cout<<"The addition of "<<n1<<" and "<<n2<<" is "<<n1+n2<<"\n";
				break;

			case '-':
				cout<<"The subtraction of "<<n1<<" and "<<n2<<" is "<<n1-n2<<"\n";
				break;

			case '*':
				cout<<"The multiplication of "<<n1<<" and "<<n2<<" is "<<n1*n2<<"\n";
			break;

			case '/':
				cout<<"The division of "<<n1<<" and "<<n2<<" is "<<n1/n2<<"\n";
				break;
		}
	}
	return 0;
}
