//============================================================================
// Name        : PPP_4E19_4E20_4E21_VectorPair.cpp
// Author      : Dilip Maheshwari
// Version     :
// Copyright   : You can improve and inform at mailto:idilipmaheshwari@gmail.com or comment http://www.dilipmaheshwari.com
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<string> names;
	vector<int> scores;
	vector<string> sNames;//4E21
	string iname;
	int iscore;

	cout << "For terminate enter 'NoName' 0 \n";
	cout<<"Please enter Name Score combination separated by space \n";
	while(cin>> iname >> iscore){
		if(iname == "NoName" && iscore == 0)
			break;
		else
		{
			for(int i = 0; i < names.size(); i++){
				if(names[i] == iname){
					cerr<<"Error: "<<"Please type unique name\n";
					exit(1);
				}
			}
			names.push_back(iname);
			scores.push_back(iscore);
		}
	}

	cout<<"find choose any one: \n";
	cout<<"1. Find by name \n";
	cout<<"2. Find by score \n";
	cout<<"3. Print all \n";

	int i;
	while(cin>>i) {
	switch(i){
	//4E20
	case 1:{
		cout<<"For quit enter 'NoName' \n ";
		cout<<"Enter name for whom you want score: ";
		while(cin>>iname) {
			if(iname == "NoName")
				break;

		bool isFound = false;
		for(int i = 0; i < names.size(); i++){
			if( names[i] == iname){
				cout<<"The score of "<<iname<<" is "<<scores[i]<<"\n\n\n";
				isFound = true;
				break;
			}
		}
		if(!isFound)
			cout<<"Name not found! \n\n";
		}
		cout<<"find choose any one: \n";
		cout<<"1. Find by name \n";
		cout<<"2. Find by score \n";
		cout<<"3. Print all \n";

	}
	break;
	//4E21
	case 2:
	{
		cout<<"For quit enter -1 \n ";
		cout<<"Enter score for whom you want know name/Names: ";
		while(cin>>iscore) {
			if(iscore == -1)
				break;
			sNames.clear();
			for(int i = 0; i < scores.size(); i++){
				if(scores[i] == iscore){
					sNames.push_back(names[i]);
				}
			}
			if(sNames.size() > 0){
				for(string s : sNames) {
					cout<<s<<"\n";
				}
			}else
			{
				cout<<"No ones score found. \n";
			}
		}
		cout<<"find choose any one: \n";
		cout<<"1. Find by name \n";
		cout<<"2. Find by score \n";
		cout<<"3. Print all \n";

	}
	break;
	case 3:
	{
		for(int i = 0; i < names.size(); i++){
			if(i >= scores.size()){
				cerr<<"Error: "<<"Something went wrong....\n";
				exit(1);
			}
			cout<<names[i]<<" "<<scores[i]<<"\n";
		}

		cout<<"find choose any one: \n";
		cout<<"1. Find by name \n";
		cout<<"2. Find by score \n";
		cout<<"3. Print all \n";

	}
	break;
	default:
	{
		cerr<<"Invalid Choice : "<<"...Thank You...\n";
		exit(1);
	}
		break;
	}
	}
	return 0;
}
