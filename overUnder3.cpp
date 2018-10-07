/*
Shaun Munshi
Chapter 13.2
DVC COMSC-110
4/25/18
*/
#include <iostream>
using namespace std;
#include <ctime>
#include <cstdlib>

int main()
{
	srand(time(0));

	int guessCorrect = 1 + (rand() % 100);

	const int TOT_GUESSES = 100;
	int nGuesses = 0;
	int guess[TOT_GUESSES];

	int guessedNumber;
	cout << "Guess a number between 1 and 100: ";
	do{
	cin >> guessedNumber;

	bool match = false;
	for(int i = 0; i < nGuesses; i++){
		if(guess[i]==guessedNumber){
			cout << "You already guessed " << guess[i] << ", so please don't repeat and guess again: ";
			match = true;
		}
	}
	if(!match){
		if (guessedNumber == guessCorrect){
			cout << "That's right, it's " << guessCorrect << endl;
			break;
		}
		if (guessedNumber < guessCorrect){
			if(nGuesses < MAX_GUESSES){
				guess[nGuesses++]=guessedNumber;
			}
			cout << "That's too low, please guess again: ";
		}
		else{
			if(nGuesses < MAX_GUESSES){
				guess[nGuesses++]= guessedNumber;
			}
			cout << "That's too high, please guess again: ";
		}
	}
	}while(guessedNumber != guessCorrect); // do while statement
}