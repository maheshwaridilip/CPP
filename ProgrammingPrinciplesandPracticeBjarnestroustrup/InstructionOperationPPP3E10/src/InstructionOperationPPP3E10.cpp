//============================================================================
// Name        : InstructionOperationPPP3E10.cpp
// Author      : Dilip Maheshwari
// Version     : 1.0
// Copyright   : You can improve
// Description : Write a program that takes an operation followed by two operands and output the results.
//               Example + 100 3.14 or * 8 9 allowed +,-,*,/ or plus, minus, mul, div
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout<<"Enter the string for operation on two numbers \n"
		<<"allowed operand  +, - , * , / or plus, minus, mul, div\n"
		<<"Example + 2 3 or plus 2 3 (for add tow and 3) :";
	string op1;
	double v1 = 0;
	double v2 = 0;
	cin >> op1 >> v1 >> v2;
	if(op1 == "+" || op1 == "plus")
		cout<<v1<<" + "<<v2<<" = "<<v1+v2<<"\n";

	else if(op1 == "-" || op1 == "minus")
		cout<<v1<<" - "<<v2<<" = "<<v1-v2<<"\n";

	else if(op1 == "*" || op1 == "mul")
		cout<<v1<<" * "<<v2<<" = "<<v1*v2<<"\n";

	else if(op1 == "/" || op1 == "div")
		cout<<v1<<" / "<<v2<<" = "<<v1/v2<<"\n";
	else
		cout<<"Provided data is advanced level!!! :)";

	return 0;
}
