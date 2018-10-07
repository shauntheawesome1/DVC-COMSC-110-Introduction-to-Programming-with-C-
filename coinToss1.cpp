/*
Shaun Munshi
2/25/18
Assignment 6.5
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
	cout << " " << endl;
	
	if (number == 0)
	{
      cout << "Heads" << endl;
	}
	
	if (number == 1)
	{
	  cout << "Tails" << endl;
	}
	
}