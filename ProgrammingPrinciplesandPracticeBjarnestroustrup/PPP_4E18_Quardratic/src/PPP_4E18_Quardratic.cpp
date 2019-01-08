//============================================================================
// Name        : PPP_4E18_Quardratic.cpp
// Author      : Dilip Maheshwari
// Version     :
// Copyright   : You can improve and inform at mailto:idilipmaheshwari@gmail.com or comment http://www.dilipmaheshwari.com
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double a,b,c;
	double  x1,x2;
	double sqr;
	cout<<"Please enter three values of quadratic equations.\n";
	cin>>a>>b>>c;
	sqr = sqrt(( b * b ) - (4 * ( a * c )));
	x1 = (-b + sqr)/ (2 * a);
	x2 = (-b - sqr)/(2 * a);
	cout<<"The factor is "<<x1<<" and "<<x2<<"\n";

	return 0;
}
