//============================================================================
// Name        : PPP_4E11_4E12_PrimeNumber.cpp
// Author      : Dilip Maheshwari
// Version     :
// Copyright   : You can improve and inform at mailto:idilipmaheshwari@gmail.com or comment http://www.dilipmaheshwari.com
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>

using namespace std;

vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
vector<int> searchp ;

void getListOfPrime(int max){
	cout<<"You Entered : "<<max<<"\n";
	for(int i = 2; i <=  max; i++){
		bool isP = true;
		for(int j=2; j < i; j++){
			if(i % j == 0){
				isP = false;
				break;
			}
		}
		if(isP) {
			searchp.push_back(i);
		}
	}
}

int main() {
    cout<<"Enter the max number till prime you want: ";
    int MAX;
    cin>>MAX;
    getListOfPrime(MAX);
    if(MAX == 100){
    	cout<<"Testing function for first 100 \n";
    	for(int i = 0; i < primes.size(); i++){
    		if( i >= searchp.size() )
    			break;
    		if(primes[i] != searchp[i]){
    			cerr<<"Error: "<<"The vector not match at "<<i<<" Actual "<<primes[i]<<" but getting "<< searchp[i]<<"\n";
    			exit(1);
    		}else{
    			cout<<""<<primes[i]<<" : "<< searchp[i]<<"\n";
    		}
    	}
    }
    cout<<"final result = \n [ ";
    for(int i = 0; i < searchp.size(); i++){
    	cout<< searchp[i];
    	if( i < searchp.size() - 1)
    		cout<<", ";
    }
    cout<<" ] \n";
	return 0;
}
