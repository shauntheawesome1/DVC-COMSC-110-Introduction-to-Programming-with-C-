/*
Shaun Munshi
COMSC-110 Introduction to Programming
4/1/18
Assignment 7.6
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
		// Computer's Random Card	
		cout << "Computer has a ";
		int cardValueComp = 2 + (rand() % 13);
		if (cardValueComp == 2 || cardValueComp == 3 || cardValueComp == 4 || cardValueComp == 5 || 
		cardValueComp == 6 || cardValueComp == 7 || cardValueComp == 8 || cardValueComp == 9 || 
		cardValueComp == 10)
			cout << cardValueComp;
		if (cardValueComp == 11)
			cout << "Jack";
		if (cardValueComp == 12)
			cout << "Queen";
		if (cardValueComp == 13)
			cout << "King";	
		if (cardValueComp == 14)
			cout << "Ace";	
		
		cout << " of ";
		int suitComp = rand() % 4;
		if (suitComp == 0)
			cout << "Spades." << endl;
		if (suitComp == 1)
			cout << "Diamonds." << endl;
		if (suitComp == 2)
			cout << "Hearts." << endl;
		if (suitComp == 3)
			cout << "Clubs." << endl;
		
		// Human's Random Card	
		cout << "Human has a ";
		int cardValueHuman = 2 + (rand() % 13);
		if (cardValueHuman == 2 || cardValueHuman == 3 || cardValueHuman == 4 || cardValueHuman == 5 || 
		cardValueHuman == 6 || cardValueHuman == 7 || cardValueHuman == 8 || cardValueHuman == 9 || 
		cardValueHuman == 10)
			cout << cardValueHuman;
		if (cardValueHuman == 11)
			cout << "Jack";
		if (cardValueHuman == 12)
			cout << "Queen";
		if (cardValueHuman == 13)
			cout << "King";	
		if (cardValueHuman == 14)
			cout << "Ace";	
		
		cout << " of ";
		int suitHuman = rand() % 4;
		if (suitHuman == 0)
			cout << "Spades." << endl;
		if (suitHuman == 1)
			cout << "Diamonds." << endl;
		if (suitHuman == 2)
			cout << "Hearts." << endl;	
		if (suitHuman == 3)
			cout << "Clubs." << endl;
			
		if (cardValueComp == cardValueHuman)
			cout << "It's a tie." << endl;
		else if (cardValueComp > cardValueHuman)
			cout << "Computer Wins." << endl;
		else
			cout << "Human Wins." << endl;		
			
		if (cardValueComp > cardValueHuman || cardValueComp < cardValueHuman) break;
	}		
}