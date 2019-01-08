//============================================================================
// Name        : PPP_4E7_calculation.cpp
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

	int n1,n2;
	char s;
	string v1, v2;

	cout<<"Enter two values for calculate with a operator like 1 2 + or one two * or one 2 - ... \n";
	cout<<"Supported operator: + - * / \n";
	cout<<"Supported values: 0 to 9 or zero to nine \nNOTE: all character is small \n";


	while(cin >> v1 >> v2 >> s)
	{
		bool isError = true;
		for(int i = 0; i < 10; i++){
			if(ds[i] == v1 ){
				n1 = i;
			} else if(di[i] == v1 ){
				n1 = i;
			}else{
				cerr<<"Error:"<<"This is not mine job.\n";
								exit(1);
								break;
			}
			if(ds[i] == v2 ){
				n2 = i;
			}if(di[i] == v2 ){
				n2 = i;
			}else{
				cerr<<"Error:"<<"This is not mine job.\n";
								exit(1);
								break;
			}
		}

		switch(s){

			case '+':
				cout<<"The addition of "<<v1<<s<<v2<<" is "<<n1+n2<<"\n";
				break;

			case '-':
				cout<<"The subtraction of "<<v1<<s<<v2<<" is "<<n1-n2<<"\n";
				break;

			case '*':
				cout<<"The multiplication of "<<v1<<s<<v2<<" is "<<n1*n2<<"\n";
			break;

			case '/':
				cout<<"The division of "<<v1<<s<<v2<<" is "<<n1/n2<<"\n";
				break;
			default :
				cerr<<"Error:"<<"This is not mine job.\n";
				exit(1);
				break;
		}
	}

	return 0;
}
