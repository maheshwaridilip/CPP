//============================================================================
// Name        : PPP_4E2_Median.cpp
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
	double x;
	vector <double> datas;
	while(cin >> x) {
	   datas.push_back(x);

	}
	if(datas.size() > 0) {
		sort(datas.begin(), datas.end());
		if(datas.size() % 2 == 0){
			cout<<"For even Number\n";
			int mid = datas.size()/2;
			double m = (datas[mid-1]+datas[mid])/2;
			cout<<"Median: "<<m<<"\n";
		}else{
			cout<<"\nFor odd Number\n"<<(datas.size() + 1)/2;
			double m = datas[((datas.size() + 1)/2)-1];
			cout<<"\nMedian: "<<m<<"\n";
		}
	}
	return 0;
}
