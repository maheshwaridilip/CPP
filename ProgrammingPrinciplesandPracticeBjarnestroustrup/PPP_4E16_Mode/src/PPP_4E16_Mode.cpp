//============================================================================
// Name        : PPP_4E16_Mode.cpp
// Author      : Dilip Maheshwari
// Version     :
// Copyright   : You can improve and inform at mailto:idilipmaheshwari@gmail.com or comment http://www.dilipmaheshwari.com
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

int main() {
int iv;
int pv,co = 1,mco = 0,mv;
vector<int>values;
while(cin>>iv){
	values.push_back(iv);
}
if(values.size() == 0)
{
	cerr<<"Error: "<<"You are expecting something else\n";
	exit(1);
}
sort(values.begin(), values.end());
cout<<"You Entered values \n";
for(int i : values)
	cout<< i <<"\n";
pv = values[0];
cout<< "pv : "<<pv <<"\n";

for(int i = 1; i <= values.size(); i++){
	cout<<"Value "<<values[i]<<"\n";

	if(pv == values[i]) {
		cout<< " pv: "<<pv<<"  co:"<<co<<"\n";
		co++;
	}else{
		if(co > mco){
			mco = co;
			mv = values[i-1];
			cout<< " mv: "<<mv<<"  co:"<<co<<"\n\n\n";
			co = 1;
	}
}
	pv = values[i];
}
if(co > mco) {
	mco = co;
	mv = pv;
}
if(mco > 1)
	cout<<"The mod is "<<mv<<" Repeats "<<mco<<"times\n";
else
	cout<<"No mode found\n";
	return 0;
}
