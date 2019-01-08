//============================================================================
// Name        : PPP_4D6_ReadOneDouble.cpp
// Author      : Dilip Maheshwari
// Version     :
// Copyright   : You can improve and inform at mailto:idilipmaheshwari@gmail.com or comment http://www.dilipmaheshwari.com
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	double num,small=0,large=0;
	while(cin>>num){
		cout<<"The entered number is: "<<num<<"\n";

	 if(num > large){
			large = num;
			cout<<"Entered number is so large\n";

		}else if(small == 0 || num < small) {
			small = num;
			cout<<"Entered number is small so far\n";
		}else{
			cout<<"Last entered small number is "<<small<<"\n";
			cout<<"Last entered large number is "<<large<<"\n";

		}
	}
	return 0;
}
