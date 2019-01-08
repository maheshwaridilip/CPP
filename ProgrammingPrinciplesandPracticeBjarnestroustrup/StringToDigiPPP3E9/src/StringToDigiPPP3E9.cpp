//============================================================================
// Name        : StringToDigiPPP3E9.cpp
// Author      : Dilip Maheshwari
// Version     : 1.0
// Copyright   : Your copyright notice
// Description : Write a program that convert spelled out number such "Zero" and "Two" into digit,
//               such as 0 and 2. When the user input a number the program should
//               print out corresponding digit.
//============================================================================

#include <iostream>
using namespace std;

int main() {
    cout<<"Enter string of number (example 2 or Two or two)(Valid range 0 to 9): ";
    string num;
    cin >> num;
    if(num == "Zero" || num == "zero" || num == "0")
    	cout<<0<<"\n";
    else if(num == "One" || num == "one" || num == "1")
    	cout<<1<<"\n";
    else if(num == "Two" || num == "two" || num == "2")
    	cout<<2<<"\n";
    else if(num == "Three" || num == "three" || num == "3")
    	cout<<3<<"\n";
    else if(num == "Four" || num == "four" || num == "4")
    	cout<<4<<"\n";
    else if(num == "Five" || num == "five" || num == "5")
    	cout<<5<<"\n";
    else if(num == "Six" || num == "six" || num == "6")
    	cout<<6<<"\n";
    else if(num == "Seven" || num == "seven" || num == "7")
    	cout<<7<<"\n";
    else if(num == "Eight" || num == "eight" || num == "8")
    	cout<<8<<"\n";
    else if(num == "Nine" || num == "nine" || num == "9")
    	cout<<9<<"\n";
    else
    	cout<<"Provided data is not valid please try again! :)\n";

	return 0;
}
