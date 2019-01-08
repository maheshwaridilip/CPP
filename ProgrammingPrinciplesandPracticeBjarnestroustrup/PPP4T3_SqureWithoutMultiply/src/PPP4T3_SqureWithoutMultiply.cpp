//============================================================================
// Name        : PPP4T3_SqureWithoutMultiply.cpp
// Author      : Dilip Maheshwari
// Version     : 1.0
// Copyright   : You can improve and inform at mailto:idilipmaheshwari@gmail.com or comment http://www.dilipmaheshwari.com
// Description : Implement square() without using the multiplication operator; that is,
//               do the x*x by repeated addition (start a variable result at 0 and add x to it x times)
//               Then run some version of "the first program" using that square().
//============================================================================

#include <iostream>
using namespace std;

int squareWithoutMul(int x){
	int s = 0;
	for(int i = 0; i < x; i++){
		s = s + x;
	}
	return s;
}
int main() {

	cout << squareWithoutMul(100) << "\n"; // prints HI
	return 0;
}
