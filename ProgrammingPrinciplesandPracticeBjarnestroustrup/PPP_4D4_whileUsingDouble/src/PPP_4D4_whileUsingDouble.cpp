//============================================================================
// Name        : PPP_4D4_whileUsingDouble.cpp
// Author      : Dilip Maheshwari
// Version     :
// Copyright   : You can improve and inform at mailto:idilipmaheshwari@gmail.com or comment http://www.dilipmaheshwari.com
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	double num1,num2,s,l;
	    while(cin>>num1>>num2){
	    	cout<<num1<<" "<<num2<<"\n";

	     if(num1 > num2){
	    		s = num2;
	    		l = num1;
	    	}else if(num2 > num1){
	    		s = num1;
	    		l = num2;
	    	}


	    	if(l - s <= (1.00/100)){
	    		    		    		cout<<"The number are almost equal " << "\n";
	    		    		    	}else{
	    		    		    		cout<<"The smaller value is: "<<s<<"\n";
	    		    		    		cout<<"The larger value is: "<<l<<"\n";

	    		    		    	}
	    }
	return 0;
}
