//============================================================================
// Name        : SequencethreePPP3E6.cpp
// Author      : Dilip Maheshwari
// Version     : 1.0
// Copyright   : Your copyright notice
// Description : Write a program that prompt the user to enter three integer/string value.
//               Then output the value in sequence order separted by comma(,)
//               example: 10 4 6 = 4, 6, 10 or Dilip Anil Bill = Anil, Bill, Dilip
//============================================================================

#include <iostream>
using namespace std;

int main() {
    cout<<"Enter three values to get in sequence : ";
   // int a;
    string a;
    //int b;
    string b;
    //int c;
    string c;
    cin >> a >> b >> c;
    if(a > b){
    	//int t = a;
    	string t = a;
    	a = b;
    	b = t;
    }
    if(a > c){
        	//int t = a;
    		string t = a;
        	a = c;
        	c = t;
        }
    if(b > c){
       	//int t = b;
		string t = b;
       	b = c;
       	c = t;
       }
    cout<<"\n Your Order: "<<a<<", "<<b<<", "<<c<<"\n";

	return 0;
}
