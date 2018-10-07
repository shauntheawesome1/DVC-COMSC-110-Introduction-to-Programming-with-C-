/*
Shaun Munshi
2/25/18
Assignment 6.8
COMSC-110 Intro to Programming
*/
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() 
{
	srand(time(0));
	int compValue = (rand() % 14 +2);
	int computerCardSuit = rand ( ) % 4;
	int humanValue = (rand() % 14 +2);
	int humanCardSuit = rand ( ) % 4; 
	
	//NOW STARTS COMPUTER CARD VALUE
	
	if (compValue < 11)
	{
		cout << "Computer's card is " << compValue;
	}
	
	if (compValue == 11)
	{
		cout << "Computer's card is Jack ";
	}
	
	if (compValue == 12)
	{
		cout << "Computer's card is Queen ";
	}
	
	if (compValue == 13)
	{
		cout << "Computer's card is King ";
	}
	
	if (compValue == 14)
	{
		cout << "Computer's card is Ace ";
	}
	
	//NOW STARTS COMPUTER CARD SUIT
	
	if (computerCardSuit == 0)
	{
		cout << " of Spades " << endl;
	}
	
	if (computerCardSuit == 1)
	{
		cout << " of Diamonds " << endl;
	}
	
	if (computerCardSuit == 2)
	{
		cout << " of Hearts " << endl;
	}
	
	if (computerCardSuit == 3)
	{
		cout << " of Clubs " << endl;
	}
	
	//NOW STARTS HUMAN CARD VALUE
	
	if (humanValue < 11)
	{
		cout <<  "Human's card is " << humanValue;
	}
	
	if (humanValue == 11)
	{
		cout << "Human's card is Jack ";
	}
	
	if (humanValue == 12)
	{
		cout << "Human's card is Queen ";
	}
	
	if (humanValue == 13)
	{
		cout << "Human's card is King ";
	}
	
	if (humanValue == 14)
	{
		cout << "Human's card is Ace ";
	}
	
	//NOW STARTS HUMAN CARD SUIT
	
	if (humanCardSuit == 0)
	{
		cout << " of Spades " << endl;
	}
	
	if (humanCardSuit == 1)
	{
		cout << " of Diamonds " << endl;
	}
	
	if (humanCardSuit == 2)
	{
		cout << " of Hearts " << endl;
	}
	
	if (humanCardSuit == 3)
	{
		cout << " of Clubs " << endl;
	}
	
	//FINAL COMPARISON STATEMENTS
	
	if (humanValue > compValue) // checks to see if human card is greater than computer card (not inclusive of suit)
	{
		cout << "Human wins! " << endl;
	}
	
	if (humanValue < compValue)// checks to see if human card is smaller than computer card (not inclusive of suit)
	{
		cout << "Computer wins!" << endl;
	}
	if(humanValue == compValue)// checks to see if both values are equal (not suit inclusive)
	{
		cout << "It's a tie. " << endl;
	}

}