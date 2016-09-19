#include <iostream>
using namespace std;

/*
One-Way selection --> either do something, or don't.
Syntax:
	if (expression)  //expression is the decision maker
		statement;   // statement will only execute if 
					 // the expression evaluates to true

If there are more than one statement to execute if the
expression is true, the statements MUST be enclosed in braces.

if (expression)
{
	statement 1;
	statement 2;
	statement 3;
}

Two-Way selection --> either do this, or do that.
Syntax:
	if (expression)
		statement 1;  //executes if expression is true
	else
		statement 2;  //executes if expression is false



*/

int main()
{
	//declare variables
	int iAge;

	//Get input
	cout << "Enter your age: ";
	cin >> iAge;

	//tell them by how many years
	//they are too young or past 21 they are
	if (iAge >= 21)
	{
		cout << "You are old enough to buy beer!" << endl;
		cout << "You got this by " << iAge - 21 << " years past 21." << endl;
	}
	else
	{
		cout << "You are not old enough to buy beer!" << endl;
		cout << "Come back in " << 21 - iAge << " years kid ";
	}
	
	cout << "Goodbye!" << endl << endl;
	return 0;
}