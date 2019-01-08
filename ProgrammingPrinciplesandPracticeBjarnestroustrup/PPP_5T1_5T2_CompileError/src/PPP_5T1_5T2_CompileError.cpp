//============================================================================
// Name        : PPP_5T1_5T2_CompileError.cpp
// Author      : Dilip Maheshwari
// Version     :
// Copyright   : You can improve and inform at mailto:idilipmaheshwari@gmail.com or comment http://www.dilipmaheshwari.com
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <std_lib_facilities.h>
using namespace std;

#define MAX_TEMP 200;
#define MIN_TEMP -200;


int main() {
	double sum = 0;
	int noOfT = 0;
	double highest = MIN_TEMP;
	double lowest = MAX_TEMP;

	for(double i; cin >> i;){
		++noOfT;
		sum+=i;
		if(i > highest) highest = i;
		if(i < lowest)  lowest = i;
	}
	cout<<"highest: "<<highest<<"\n";
	cout<<"lowest: "<<lowest<<"\n";
	cout<<"Average: "<<sum/noOfT<<"\n";

	return 0;
}
