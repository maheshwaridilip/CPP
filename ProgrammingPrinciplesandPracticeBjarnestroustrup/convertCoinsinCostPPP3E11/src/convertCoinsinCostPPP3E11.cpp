//============================================================================
// Name        : convertCoinsinCostPPP3E11.cpp
// Author      : Dilip Maheshwari
// Version     : 1.0
// Copyright   : You can improve it.
// Description : Write a program that prompt user to enter some number of
//               pennies      (1 cent coins)
//               nickels      (5 cent coins)
//               dimes        (10 cent coins)
//               quarters     (25 cent coins)
//               Half Dollars (50 cent coins)
//               One Dollars  (100 cent coins)
//               calculate the cost of coins in cents and dollars.
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout<<"Enter the number of pennies you have: ";
	int pe = 0;
	cin>>pe;

	cout<<"Enter the number of nickels you have: ";
	int ni = 0;
	cin>>ni;

	cout<<"Enter the number of dimes you have: ";
	int di = 0;
	cin>>di;


	cout<<"Enter the number of quarters you have: ";
	int qu = 0;
	cin>>qu;

	cout<<"Enter the number of half dollars you have: ";
	int hdo = 0;
	cin>>hdo;


	cout<<"Enter the number of dollar you have: ";
	int dol = 0;
	cin>>dol;

	int total_coins = pe + ni + di + qu + hdo + dol;
	int total_cost = pe + ni * 5 + di * 10 + qu * 25 + hdo * 50 + dol * 100;
	double inDollar = (double)total_cost / 100;
	if(pe > 0)
		cout<<"\n\n\nYou have "<< pe << " pennies of cost " << pe << " cents.\n";
	if(ni > 0)
		cout<<"You have "<< ni << " nickels of cost " << ni * 5 << " cents.\n";
	if(di > 0)
		cout<<"You have "<< di << " dimes of cost " << di * 10 << " cents.\n";
	if(qu > 0)
		cout<<"You have "<< qu << " quarters of cost " << qu * 25 << " cents.\n";
	if(hdo > 0)
		cout<<"You have "<< hdo << " half dollars of cost " << hdo * 50 << " cents.\n";
	if(dol > 0)
		cout<<"You have "<< dol << " dollars of cost " << dol * 100 << " cents.\n";

	cout<<"\n\nYou have total " << total_coins << " coins which have cost "<<inDollar<<" dollars ("
		<< total_cost << " cents).";

	return 0;
}
