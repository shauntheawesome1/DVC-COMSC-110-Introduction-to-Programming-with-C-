/*
Shaun Munshi
2/25/18
Assignment 6.1
COMSC-110 Intro to Programming
*/
#include <iostream>
using namespace std;

int main() 
{
	int ans;
	
	cout << " " << endl;
	cout << " Three addition and subtraction problems: " << endl;
	cout << " " << endl;
	
	cout << " 1 + 2 is: ";
	cin >> ans;
	cin.ignore (1000, 10);
	if (ans == 3)
	{
	   cout << "Good work! Your answer is correct! " << endl;
	}
	else
	{
	   cout << "Nice job, but a better answer is 3" << endl;
	}
	
	cout << "100 - 99 is: ";
	cin >> ans;
	cin.ignore (1000, 10);
	if (ans == 1)
	{
	  cout << "Good work! Your answer is correct! " << endl;
	}
	
	else
	{
	  cout << "Nice job, but a better answer is 1" << endl;
	}
	
	cout << "12 + 21 is: ";
	cin >> ans;
	cin.ignore (1000, 10);
	if (ans == 33)
	{
	  cout << "Good work! Your answer is correct! " << endl;
	}
	else
	{
	  cout << "Nice job, but a better answer is 33" << endl;
	}

}