//============================================================================
// Name        : PPP_4D7891011_DoubleComputation.cpp
// Author      : Dilip Maheshwari
// Version     :
// Copyright   : You can improve and inform at mailto:idilipmaheshwari@gmail.com or comment http://www.dilipmaheshwari.com
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
double num, small = 0, large = 0, sum = 0, numInMeter = 0;
string unit;
int numOfData = 0;
vector <double> data;
cout<<"\n\n\n Enter value for calculation with unit enter unit after some \n space <value unit> example 50 cm"
		<<" \n Supported units are \n cm = centimeter \n m = meter \n in = inch  \n ft = feet \n  the unit is case sensitive"
		<<"\nFor execute enter list type any special character and enter like $ #.\n\n\n ";
while(cin >> num >> unit){
	if(unit == "cm")
		numInMeter = num/100;
	else if(unit == "m")
		numInMeter = num;
	else if(unit == "in")
		numInMeter = (num * 2.54)/100;
	else if(unit == "ft")
		numInMeter = (num * 2.54 * 12)/100;
	else {
		cerr << "error: "<<"Are you kidding!\n";
		exit(1);
	}
	sum = sum + numInMeter;
	data.push_back(numInMeter);

	if(numInMeter > large){
		large = numInMeter;
	}else if(small == 0 || numInMeter < small) {
		small = numInMeter;
	}
	numOfData++;

}
 cout<<"The smallest value you enter in meter: " << small << " meter\n";
 cout<<"The largest value you enter in meter: " << large << " meter\n";
 cout<<"The sum of values in meter is: "<<sum<<" meter\n";
 cout<<"You entered total "<<numOfData<<" Values.\n";
 sort(data.begin(), data.end());
 for(double x: data)
	 cout<<x<<" meter\n";


	return 0;
}
