//============================================================================
// Name        : PPP4T4_UseVector.cpp
// Author      : Dilip Maheshwari
// Version     : 1.0
// Copyright   : You can improve and inform at mailto:idilipmaheshwari@gmail.com or comment http://www.dilipmaheshwari.com
// Description : Write a program that "bleeps" out words that you don't like; that is, you read
//               in words using cin and print them again on cout. If a word is among few you have defined,
//               you write out BLEEP instead of that that word. Start with one dislike word such as
//               string dislike = "Broccoli"   When that works add a few more.
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<string> love;
	string dislike1 = "rat";
	string dislike2 = "cat";

	for(string word; cin>>word;)
		love.push_back(word);
	for(string l:love){
		if(l == dislike1 || l == dislike2){
			cout<<"BLEEP"<<"\n";
		}else{
			cout<<l<<"\n";
		}
	}
	return 0;
}
