//============================================================================
// Name        : PPP_4E13_4E14_Sieve_Of_Erothothesis.cpp
// Author      : Dilip Maheshwari
// Version     :
// Copyright   : You can improve and inform at mailto:idilipmaheshwari@gmail.com or comment http://www.dilipmaheshwari.com
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

void printPrimes(int max){
	if(max < 2){
		cout<<"There is no prime number between 1 to "<<max<<"\n";
	}
	vector<bool> v;
	v.assign(max+1, true);
	v[0] = false;
	v[1] = false;
	for(int i = 2; i * i < max + 1; i++)
	{
		if(v[i] == true){

			for(int j = i * 2; j < v.size(); j+=i){
				v[j] = false;

			}
		}
	}
	cout<<"\n\n[ ";
	int j = 0;
	int k = 0;
	int min = 25;
	int range = 100;
	for(int i = 0; i < v.size(); i++)
	{
		if(v[i]) {
			cout<<i << " ";
			j++;
			k++;
		}
		if(i!=0 && i%100 == 0){
			cout<<"\n\n ================"<< i <<": "<< k <<"==================== \n\n";
			if( k <= min){
		    	min = k;
		    	range = i;
			}
			k = 0;

		}
		else if(i!=0 && i%10 == 0)
			cout<<"\n";
	}
	cout<<"]\n\n";
	cout<<"Total found Primes is: "<<j<<"\n";
	if(max >= 100)
		cout<<"Min value in 100 slot: "<<range-99<<" To "<<range<<" is "<<min<<"\n";

}
int main() {
	int max;
	cout<<"You want the prime number from 1 to ";
	cin>>max;
	if(cin)
		printPrimes(max);
	return 0;
}
