//============================================================================
// Name        : PPP_4E10_Rock_Paper_Scissors.cpp
// Author      : Dilip Maheshwari
// Version     :
// Copyright   : You can improve and inform at mailto:idilipmaheshwari@gmail.com or comment http://www.dilipmaheshwari.com
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> ax = {1,3,2,1,3,2,2,3,2,1,3,2,1,2,3,3,3,2,2,1,1,2,3,3,3,2,2,2,2,1,1,1,1,3,2,1,2,3,2,1,2,3,3,1,1,2,1,3,2,1,3};
	int a,b;
	cout<<"Choose a Value for you from the list : \n 1. Rock \n 2. Paper \n 3. Scissors \n and choose a value for computer from  0 to "<< ax.size()-1<<".\n";
	while(cin >> a >> b){
		if(b > (ax.size() - 1))
		{
			cerr<<"Error: "<<"You are breaking the rules....\n";
			exit(1);
		}
		int comp = ax[b];
		cout<<"You choose "<<a << " and computer choose "<<comp<<".\n";

		switch(a)
		{
			case 1:
				cout<<"You choose rock ";
				switch(comp){
				case 1:
					cout<<"but game is tie because computer also choose rock.\n";
					break;
				case 2:
					cout<<"but you lose because computer choose paper.\n";
					break;
				case 3:
					cout<<"you w!n because computer choose scissors.\n";
					break;

				}
				break;

			case 2:
				cout<<"You choose paper ";
				switch(comp){
				case 1:
					cout<<"you w!n because computer choose rock.\n";
					break;

				case 2:
					cout<<"but game is tie because computer also choose paper.\n";
					break;

				case 3:
					cout<<"but you lose because computer choose scissors.\n";
					break;

				}
				break;

				case 3:
					cout<<"You choose scissors ";
					switch(comp){
					case 1:
						cout<<"but you lose because computer choose rock.\n";
						break;

					case 2:
						cout<<"you w!n because computer choose paper.\n";
						break;

					case 3:
						cout<<"but game is tie because computer also choose scissors.\n";
						break;

					}
					break;
					default:
						cerr<<"Error: "<<"You are breaking the rules....\n";
						exit(1);

						break;


		}
	}
	return 0;
}
