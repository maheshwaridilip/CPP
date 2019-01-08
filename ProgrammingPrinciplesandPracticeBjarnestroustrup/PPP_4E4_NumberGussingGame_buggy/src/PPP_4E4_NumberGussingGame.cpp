//============================================================================
// Name        : PPP_4E4_NumberGussingGame.cpp
// Author      : Dilip Maheshwari
// Version     :
// Copyright   : You can improve and inform at mailto:idilipmaheshwari@gmail.com or comment http://www.dilipmaheshwari.com
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

int main() {
	char x;
	int n = 50;
	int tried = 0;
	cout<<"Think a number between 1 to 100. \n";
	cout<<"I will ask only less than seven question.\n";
	cout<<"When I ask  Your number 'x' is  \n";
	cout<<"Your answer if your number smaller then shown number type s \n";
	cout<<"Your answer if your number larger then shown number type l \n";
	cout<<"Your answer if your number matched then shown number type m \n";
    cout<<"Number is "<< n << "(s, l, m)";
    while(cin >> x)
    {
    	if(x == 's') {
    		if(tried <= 6){
    			n = (n+1) / 2;
    		}else{
    			n += 1;
    		}
    		tried++;
    		cout<<"\n smaller Your Number " << n << " is (s , l , m) ";
    	} else if(x == 'l') {
    		if(tried <= 6){
    			n *=2;
    		}else{
    			n -= 1;
    		}
    		tried++;
    		cout<<"\n larger Your Number " << n << " is (s , l , m) ";
    	}else if(x == 'm') {
    		cout<<"Hey I found your number It is ... "<< n << "\n";
    	}else{
    		cerr<<"error:"<<"You are not following the rules.\n";
    	}
    }
	return 0;
}
