//============================================================================
// Name        : PPP_4E8_4E9_RiceChess.cpp
// Author      : Dilip Maheshwari
// Version     :
// Copyright   : You can improve and inform at mailto:idilipmaheshwari@gmail.com or comment http://www.dilipmaheshwari.com
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <limits>
using namespace std;

int main() {
	unsigned long long pv = 1;
	unsigned long long sum = 0;
	int thousandat = 0;
	int millionat = 0 ;
	int tenbillionat = 0;
	int intlimat = 0;
	int uintlimat = 0;
	int lnglnglimat = 0;
	int uloglimat = 0;

	for(int i = 1; i <= 64; i++){
		if(i  > 1)
			pv *= 2;
		sum += pv;
		cout<<i<<".\t"<<pv<<"\t"<<sum<<"\n";
		if(thousandat == 0 && sum >= 1000){
			thousandat = i;
		}
		if(millionat == 0 && sum >= 1000000){
					millionat = i;
				}
		if(tenbillionat == 0 && sum >= 1000000000){
					tenbillionat = i;
				}



		if(intlimat == 0 && sum >= INT_MAX){
			intlimat = i;
		}
		if(uintlimat == 0 && sum >= UINT_MAX){
			uintlimat = i;
		}
		if(lnglnglimat == 0 && sum >= LONG_LONG_MAX){
			lnglnglimat = i;
		}
		if(uloglimat == 0 && sum >= ULONG_MAX){
			uloglimat = i;
		}

	}

	cout<<"\n\n for 1000 grains: " <<thousandat<<" Squares \n";
	cout<<"for 1000000 grains: " <<millionat<<" Squares \n";
	cout<<"for 1000000000 grains: " <<tenbillionat<<" Squares \n";

	cout<<"\n\n Cross int limit: " <<INT_MAX <<" at "<<intlimat<<" Square \n";
	cout<<"Cross uint limit: " <<UINT_MAX <<" at "<<uintlimat<<" Square \n";
	cout<<"Cross ulong limit: " <<LONG_LONG_MAX <<" at "<<lnglnglimat<<" Square \n";
	cout<<"Cross long long limit: " <<ULONG_MAX <<" at "<<uloglimat<<" Square \n";



	return 0;
}
