/*
Shaun Munshi
2/25/18
Assignment 7.4
COMSC-110 Intro to Programming
*/
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() 
{
	srand(time(0));
	int number = rand( ) % 2;
	int counter =0;
	int tosses;
	
	cout << " " << endl;
	cout << "Enter the number of tosses to Perform " << endl;
	cin >> tosses;
	cin.ignore(1000, 10);
	
	while(counter < tosses)
	{
		if (number == 0)
		{
		  number = rand( ) % 2;
		  cout << "Heads" << endl;
		  counter++;
		}
		
		if (number == 1)
		{
		  number = rand( ) % 2;
		  cout << "Tails" << endl;
		  counter++;
		}
	}
}