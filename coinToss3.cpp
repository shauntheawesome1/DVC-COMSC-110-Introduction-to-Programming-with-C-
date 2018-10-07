/*Shaun Munshi
COMSC-110 Introduction to programming
4/18/18
Assignment 7.5
*/ 
#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{	
	srand (time(0));
	
	while (true)
	{
		int n;
		cout << "Enter number of tosses to perform [0 to exit]: ";
		cin >> n;
		cin.ignore(1000, 10);
	
		if ( n == 0 ) break;
		
		for (int i = 0; i < n; i++) 
		{	
			int toss = rand() % 2;
			
			if (toss == 0)
				cout << "Heads" << endl;
			else
				cout << "Tails" << endl;
		}
		cout << endl;
	}	
}