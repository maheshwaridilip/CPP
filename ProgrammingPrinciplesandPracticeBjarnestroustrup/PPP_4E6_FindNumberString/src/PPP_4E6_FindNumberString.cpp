//============================================================================
// Name        : PPP_4E6_FindNumberString.cpp
// Author      : Dilip Maheshwari
// Version     :
// Copyright   : You can improve and inform at mailto:idilipmaheshwari@gmail.com or comment http://www.dilipmaheshwari.com
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<string> ds = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
	vector<string> di = {"0","1","2","3","4","5","6","7","8","9"};
	string iv;
	cout<<"Enter spelling or value of digit 0 to 9 spelling in small character only. ";
	while(cin>>iv){
		bool found = false;
		for(int i = 0; i < 10; i++){
			if(ds[i] == iv){
				found = true;
				cout<<di[i] << "\n";
			} else if(di[i] == iv){
				found = true;
				cout<<ds[i]<<"\n";
			}
		}

		if(!found) {
			cerr<<"Error: "<<"Are you kidding! \n";
			exit(1);
		}else{
			cout<<"Enter Next : ";

		}
	}
	return 0;
}
