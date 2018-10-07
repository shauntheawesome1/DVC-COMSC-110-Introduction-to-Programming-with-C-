/*
Shaun Munshi
2/25/18
Assignment 6.6
COMSC-110 Intro to Programming
*/
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() 
{
	srand(time(0));
	int genNumber = 1+ rand( ) % 100;
	int playerNumber;
	
	cout << "I'm Thinking of a number between 1-10. Guess what it is: ";
	cin >> playerNumber;
	cin.ignore(1000, 10);

	if (playerNumber > genNumber)
	{
		cout<< "That's too high- It's " << genNumber << endl;
	}
	
	if (playerNumber < genNumber) 
	{
		cout << "That's too low-It's " << genNumber << endl;
	}
	
	if (playerNumber == genNumber)
	{
		cout << "You are correct! The answer is " << genNumber << endl;
	}
	
}