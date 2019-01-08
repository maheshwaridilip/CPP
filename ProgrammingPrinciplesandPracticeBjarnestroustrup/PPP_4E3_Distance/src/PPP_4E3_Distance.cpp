//============================================================================
// Name        : PPP_4E3_Distance.cpp
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
	double dist;
	double sum = 0;
	vector<double> distances;

	while( cin>>dist ){
		distances.push_back(dist);
	}
	sort(distances.begin(), distances.end());
	for(double x: distances)
		sum += x;
	cout<<"Total of Distances is "<< sum << "\n";
	cout<<"The smallest distance is "<< distances[0]<<"\n";
	cout<<"The longest distance is "<< distances[distances.size()-1] << "\n";
	cout<<"The mean of distances is "<< sum/2.0 << "\n";
	return 0;
}
