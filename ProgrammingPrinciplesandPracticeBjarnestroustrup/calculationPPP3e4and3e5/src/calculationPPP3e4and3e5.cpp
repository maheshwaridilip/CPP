//============================================================================
// Name        : calculationPPP3e4and3e5.cpp
// Author      : Dilip Maheshwari
// Version     : 1.1
// Copyright   : Your copyright notice
// Description : Write a program that prompt user to enter two integer/double value store these two
//               values in variable val1 and val2. Write program to determine the
//               1.Smaller 2.Larger 3.Sum 4.Difference 5.Product 6.ratio
//============================================================================

#include <iostream>
using namespace std;

int main() {
	//int val1;
	double val1;
	//int val2;
	double val2;
	//int smaller;
	double smaller;
	//int larger;
	double larger;

	cout<<"Enter two values for calculation: ";
	cin>>val1>>val2;
	if( val1 > val2 ) {
		smaller = val2;
		larger = val1;
	}else{
		smaller = val1;
		larger = val2;
	}

	cout<<"The smaller in two numbers " << val1 << " and "<<val2<<" is "<< smaller <<".\n";
	cout<<"The larger in two numbers " << val1 << " and "<<val2<<" is "<< larger <<".\n";
	cout<<"The sum of two numbers " << val1 << " + "<<val2<<" = "<< val1 + val2 <<".\n";
	cout<<"The difference of two numbers " << larger << " - "<<smaller<<" = "<< larger - smaller <<".\n";
	cout<<"The product of two numbers " << val1 << " * "<<val2<<" = "<< val1 * val2 <<".\n";
	cout<<"The ratio of two numbers " << larger << " / "<<smaller<<" = "<< larger / smaller <<".\n";


	return 0;
}
