//============================================================================
// Name        : PPP4T1_CovertTODoller.cpp
// Author      : Dilip Maheshwari
// Version     : 1.0
// Copyright   : You can improve and inform
// Description : Coverts Yen, Euros, and pounds into dollars
//============================================================================

#include<iostream>
#include<fstream>
#include<sstream>
#include<cmath>
#include<cstdlib>
#include<string>
#include<list>
#include<vector>
#include<algorithm>
#include<stdexcept>

using namespace std;

int main() {
	//constexpr not working in eclipse
	const double Y_TO_D = .0089; //Yen y
	const double E_TO_D = 1.14;  //Euro e
	const double P_TO_D = 1.27; //Pounds p
	const double U_TO_D = 1.50 ; //Yuan  u
	const double K_TO_D = .0070;  //Kroner k

	double amount = 0;
	char unit = 0;
	cout<<"Please enter cost followed by currency (y=yen, p=pond, e=euro, u=Yuan, k=Kroner): ";
	cin>>amount>>unit;
	/*if(unit == 'y' || unit == 'Y')
		cout<<amount<<" Yens== "<<amount * Y_TO_D <<" Dollars\n";
	else if(unit == 'p' || unit == 'P')
		cout<<amount<<" Pounds== "<<amount * P_TO_D<<" Dollars\n";
	else if(unit == 'e' || unit == 'E')
		cout<<amount<<" Euros== "<<amount * E_TO_D<<" Dollars\n";
	else if(unit == 'u' || unit == 'U')
		cout<<amount<<" Yuan== "<<amount * U_TO_D<<" Dollars\n";
	else if(unit == 'k' || unit == 'K')
		cout<<amount<<" Kroner== "<<amount * K_TO_D<<" Dollars\n";
	else
		cout<<"Sorry I don't know the currency called "<<unit<<"\n";*/
		cout<<"Amount: "<<amount<<" unit: " << unit << "\n";
		switch(unit) {
		case 'y': case 'Y':{
			cout<<amount<<" Yens== "<<amount * Y_TO_D <<" Dollars\n";
		}
		break;

		case 'p': case 'P':{
			cout<<amount<<" Pounds== "<<amount * P_TO_D<<" Dollars\n";
		}
		break;

		case 'e': case 'E':{
			cout<<amount<<" Euros== "<<amount * E_TO_D<<" Dollars\n";
		}
		break;

		case 'u': case 'U':{
			cout<<amount<<" Yuan== "<<amount * U_TO_D<<" Dollars\n";
		}
		break;

		case 'k': case 'K':{
			cout<<amount<<" Kroner== "<<amount * K_TO_D<<" Dollars\n";
		}
		break;

		default:{
			cout<<"Sorry I don't know the currency called "<<unit<<"\n";
		}
        break;
		}
	return 0;
}
