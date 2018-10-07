/*
Shaun Munshi
Chapter 14.1
DVC COMSC-110
4/25/18
*/
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

struct Number{
	int num;
	Number* next;
};

int main()
{
	srand(time(0));
	
	int guessCorrect = 1 + (rand() % 100);

	Number* start = 0;

	int guessedNumber;
	cout << "I'm thinking of a number between 1 and 100. Guess what it is: ";
	do{ //start of do while loop
		cin >> guessedNumber;

		bool match = false;
		for(Number* y = start; y; y = y->next){
			if(y->num == guessedNumber){
				cout << "You already guessed, " << y->num << " please guess again: ";
				match = true;
			}
		}
		if(!match){
			if (guessedNumber == guessCorrect){
				cout << "That's right, it's " << guessCorrect << endl;
				break;
			}
			if (guessedNumber < guessCorrect){
				Number* x = new Number;
				x->num = guessedNumber;
				x->next = start;
				start = x;
				cout << "That's too low, please guess again: ";
			}
			else{
				Number* x = new Number;
				x->num = guessedNumber;
				x->next = start;
				start = x;
				cout << "That's too high, please guess again: ";
			}
		}
	}while(guessedNumber != guessCorrect); // while condition for do while loop
}