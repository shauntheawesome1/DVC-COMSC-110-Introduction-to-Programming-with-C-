/*
Shaun Munshi
Chapter 15.1
DVC COMSC-110
5/10/18
*/
#include <deque>
#include <iostream>
using namespace std;

#include <ctime>
#include <cstdlib>

struct Number{
	int num;
};

int main()
	{
		srand(time(0));

		int guessCorrect = 1 + (rand() % 100);

		deque<Number> numList;
		Number number;
		
		int guessedNumber;
		cout << "I'm thinking of a number between 1 and 100. Guess what it is: ";
		do{
			cin >> guessedNumber;
		
			bool match = false;
			
			for(int i = 0; i < numList.size(); i++){
				if(guessedNumber == numList[i].num){
					cout << "You already guessed " << numList[i].num << " please guess again: ";
					match = true;
				}
			}
			if(!match){
				if (guessedNumber == guessCorrect){
					cout << "You are correct! The answer is " << guessCorrect << endl;
					break;
				}
				if (guessedNumber < guessCorrect){
					number.num = guessedNumber;
					numList.push_back(number);
					cout << "That's too low, please guess again. ";
				}
				else{
					number.num = guessedNumber;
					numList.push_back(number);
					cout << "That's too high, so please guess again: ";
				}
			}
		}while(guessedNumber != guessCorrect); // condition for do while loop
	}