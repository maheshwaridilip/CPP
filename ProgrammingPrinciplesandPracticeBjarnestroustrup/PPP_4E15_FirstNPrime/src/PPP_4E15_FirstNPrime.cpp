//============================================================================
// Name        : PPP_4E15_FirstNPrime.cpp
// Author      : Dilip Maheshwari
// Version     :
// Copyright   : You can improve and inform at mailto:idilipmaheshwari@gmail.com or comment http://www.dilipmaheshwari.com
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> nv = {};
	cout<<"How much primer number you need: ";
	int n;
	cin >> n;
	if( n == 0){
	 cerr<<"Error: "<<"You are kidding :)\n";
	} else if(n == 1)
	{
		cout<<2<<"\n";
	}else{
		int i = 2;
		while(nv.size() != n){

			bool isP = true;
			for(int j = 2; j < i; j ++ ){
				if(i%j == 0)
				{
					isP = false;
					break;
				}
			}
			if(isP)
				nv.push_back(i);
			i++;

		}
		for(int i = 0 ; i < nv.size(); i ++){
			cout<<nv[i];
			if(i < nv.size()-1)
				cout<<" ";
			if(i > 0 && (i+1)%10 == 0){
				cout<<"\n\n";
			}
		}
		cout<<"\n";

	}
	return 0;
}
