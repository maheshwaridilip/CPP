//============================================================================
// Name        : PPP4D123_whileloopcin.cpp
// Author      : Dilip Maheshwari
// Version     :
// Copyright   : You can improve and inform at mailto:idilipmaheshwari@gmail.com or comment http://www.dilipmaheshwari.com
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
    int num1,num2;
    while(cin>>num1>>num2){
    	cout<<num1<<" "<<num2<<"\n";
    	if(num1 > num2){
    		cout<<"The smaller value is: "<<num2<<"\n";
    		cout<<"The larger value is: "<<num1<<"\n";
    	}else if(num2 > num1){
    		cout<<"The smaller value is: "<<num1<<"\n";
    		cout<<"The larger value is: "<<num2<<"\n";
    	}else{
    		cout<<"The number are equal \n";
    	}
    }
	return 0;
}
