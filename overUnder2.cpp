/*
Shaun Munshi
2/25/18
Assignment 6.7
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
	
	cout << "I'm Thinking of a number between 1-100. Guess what it is: ";
	cin >> playerNumber;
	cin.ignore(1000, 10);
	
	if (playerNumber == genNumber)
	{
		cout << "That's right!It is- " << genNumber << endl;
	}

	while(playerNumber != genNumber)
	{	
		if (playerNumber > genNumber)
		{
			cout<< "That's too high- Guess again: "; 
			cin >> playerNumber;
			cin.ignore(1000, 10);
		}
	
		if (playerNumber < genNumber) 
		{
			cout << "That's too low-Guess again: ";
			cin >> playerNumber;
			cin.ignore(1000, 10);
		}
	
		if (playerNumber == genNumber)
		{
			cout << "That's right! It is- " << genNumber << endl;
			break;
		}
	
	}

}