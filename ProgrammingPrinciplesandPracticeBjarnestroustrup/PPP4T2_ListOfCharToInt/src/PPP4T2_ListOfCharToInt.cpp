//============================================================================
// Name        : PPP4T2_ListOfCharToInt.cpp
// Author      : Dilip Maheshwari
// Version     : 1.0
// Copyright   : You can improve and inform (mailto://idilipmaheshwari@gmail.com) or comment on
//               dilipmaheshwari.com
// Description : The character 'b' is char('a' + 1), 'c' is char ('a' + 2) etc. Use a loop
//               to write out a table of characters with their corresponding integer values:
//               a 97
//               b 98
//               ...
//               z 122
//============================================================================

#include <iostream>
using namespace std;

int main() {
	/*char ch = 'a';
	while(ch <= 'z'){
		int i = ch;
		cout<<ch<<"\t"<<i<<"\n";
		ch++;
	}*/
	for(char ch = '0'; ch <= '9'; ch++){
				int i = ch;
				cout<<ch<<"\t"<<i<<"\n";
			}
	cout<<"\n\n";

	for(char ch = 'A'; ch <= 'Z'; ch++){
			int i = ch;
			cout<<ch<<"\t"<<i<<"\n";
		}
	cout<<"\n\n";

	for(char ch = 'a'; ch <= 'z'; ch++){
			int i = ch;
			cout<<ch<<"\t"<<i<<"\n";
		}
	return 0;
}
