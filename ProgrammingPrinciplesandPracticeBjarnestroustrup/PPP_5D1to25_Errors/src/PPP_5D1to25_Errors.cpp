//============================================================================
// Name        : PPP_5D1to25_Errors.cpp
// Author      : Dilip Maheshwari
// Version     :
// Copyright   : You can improve and inform at mailto:idilipmaheshwari@gmail.com or comment http://www.dilipmaheshwari.com
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "std_lib_facilities.h"
using namespace std;

int main() {
	try {
	//Cout << "Success!\n"; //5D1
	cout << "5D1 Success!\n";//5D1

	//cout << "Success!\n; //5D2
    cout << "5D2 Success!\n"; //5D2

    //cout << "Success"<<!\n"; //5D3"
    cout << "5D3 Success"<<"!\n"; //5D3

    //cout << Success<<'\n'; //5D4"
     cout << "5D4 Success"<<'\n'; //5D4


     //5D5
     //string res = 7; //5D5
     int res = 7;
     vector<int>v5(10);
     v5[5] =  res;
     cout<<"5D5 Success!\n";

     //5D6
     vector<int>v6(10);
    // v6(5) = 7; //5D6
     v6[5] = 7;
     //if(v6(5) != 7)//5D6
    if(v6[5] != 7)
    	 cout<<"5D6 Success!\n";

    //5D7
    bool cond7 = true; // 5D7 added
    if(cond7)
    	cout<<"5D7 Success!\n";
    else
    	cout<<"5D7 Fail!\n";

    //5D8
    bool c8 = false;
    if(c8)
    	cout<<"5D8 Success!\n";
    else
    	cout<<"5D8 Fail!\n";

    // 5D9
    string s9 = "ape";
    //boo c9 = "fool"<s9;
    bool c9 = "fool"<s9;
    if(c9)
    	cout<<"5D9 Success!\n";

    //5D10
    string s10 = "ape";
    if(s10 == "fool")
    	cout<<"5D10 Success!\n";

    //5D11
    string s11 = "ape";
    if(s11 == "fool")
    	//cout<"5D11 Success!\n"; //5D12
    	cout<<"5D11 Success!\n";

    //5D12
      string s12 = "ape";
     // if(s12+"fool") //5D12
      	//cout<"5D12 Success!\n"; //5D12
      	cout<<"5D12 Success!\n";

    //5D13
      	vector<char>v13(5);
      	//for(int i=0; 0 < v13.size(); ++i)//infinite loop
      	for(int i=0; i < v13.size(); ++i)
      		cout<<"5D13 Success! "<<i<<": "<< v13[i] <<"\n";

      	//5D14
      	      vector<char>v14(5);
      	      //for(int i=0; i <= v14.size(); ++i) // will give range error off-by-one error
      	      for(int i=0; i < v13.size(); ++i)
      	      	cout<<"5D14 Success! "<<i<<": "<< v14[i] <<"\n";

     //5D15
      	      cout<<"5D15 ";
      	      string s15 = "Success!\n";
      	    //  for(int i=0; i < 6; ++i) //Not any Syntax error for print full line we did it.
      	    for(int i=0; i < s15.length(); ++i)
      	    	  cout<<s15[i];
      //5D16
      	     // if(true) then
      	    if(true)
      	    		  cout<<"5D16 Success!\n";
      	    	else
         	    	  cout<<"5D16 Fail!\n";
      	 //5D17
      	    int x17 = 2000;
      	    char c17 = x17;
      	   // if(c17 == 2000) //Always flase
      	    if(x17 == 2000)
      	    	cout<<"5D17 Success!\n";
//5D18
      	    string s18 = "Success!\n";
    	      cout<<"5D18 ";
      	    //for(int i = 0; i < 10; i++)//Range error 9
        	    for(int i=0; i < s18.length(); ++i)
        	    	cout<<s18[i];

        	    //5D19
        	   // vector v19(5);
        	    vector<int> v19(5);
        	   // for(int i=0; i < v19.size(); ++i); //Empty statement
        	    for(int i=0; i < v19.size(); ++i)
        	    	cout<<"5D19 Success! "<<i<<": "<<v19[i]<<"\n";

        	    //5D20
        	    int i20 = 0;
        	    int j20 = 9;
        	    while(i20 < 10)
        	    	//++j20; //infinite loop. 5D20
        	    	++i20;
        	    if(j20 < i20 )
        	    	cout<<"5D20 Success!\n";

        	    //5D21
        	   // int x21 = 2; //Divide by zero
        	    int x21 = 4;
        	    double d21 = 5/( x21 - 2 ); //Divide by zero
        	    if(d21 == 2 * x21 + 0.5)
        	    	cout<<"5D21 Success!\n";

        	    //5D22
        	    //string<char> s22 = "Success!\n"; //String always array of character no need to define.
        	    string s22 = "Success!\n";
        	    cout<<"5D22 ";

        	   // for(int i = 0; i <= 10; ++i) // Range error
        	    for(int i = 0; i < 9; ++i) // Range error
        	    	cout<<s22[i];

        	    //5D23
        	    int i23 = 0;
        	    int j23 = 0; // j23 Not defined so add
        	    while(i23 < 10)
        	    	++i23;
        	    if(j23<i23)
        	    	cout<<"5D23 Success!\n";

        	    //5D24
        	    int x24 = 4;
        	    double d24 = 5/(x24-2);
        	    if(d24 == 2 * x24 + 0.5)
        	    	cout<<"5D24 Success!\n";

        	    //5D25
        	    //cin<<"5D25 Success!\n";
        	    cout<<"5D25 Success!\n";

    return 0;
	}
	catch(exception &e){
		cerr<<"Error: "<<e.what()<<"\n";
		return 1;
	}
	catch(...){
		cerr<<"Error: oops! Unknown Error!!!..\n";
		return 2;
	}
}
