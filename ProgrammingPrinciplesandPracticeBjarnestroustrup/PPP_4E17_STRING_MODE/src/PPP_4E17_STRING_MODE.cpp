//============================================================================
// Name        : PPP_4E17_STRING_MODE.cpp
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
string iv;
int co = 1,mco = 0;
string pv,mv;
vector<string>values;
while(cin>>iv){
	if(iv == "q"){
		break;
	}
	values.push_back(iv);
}
if(values.size() == 0)
{
	cerr<<"Error: "<<"You are expecting something else\n";
	exit(1);
}
sort(values.begin(), values.end());
cout<<"You Entered values \n";
for(string i : values)
	cout<< i <<"\n";
pv = values[0];

for(int i = 1; i <= values.size(); i++){

	if(pv == values[i]) {
		co++;
	}else{
		if(co > mco){
			mco = co;
			mv = values[i-1];
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
cout<<"First string is "<< values[0]<<"\n";
cout<<"Last string is "<< values[values.size()-1]<<"\n";

	return 0;
}
