/*
Shaun Munshi
Chapter 9
DVC COMSC-110
4/20/18
*/

#include <iostream>
#include<string>
using namespace std;

bool test(string question, string answer){
	string input;
	cout << question;
	getline(cin, input);
	
	if (input == answer) {
		cout << "Correct!" << endl;
		cout << endl;
		return true;
	} else {
		cout << "Incorrect!" << endl;
		cout << endl;
		return false;
	}
}

int main() {
	int correctAnswers = 0;

    if (question("1. Who was the first president? ","George Washington")) correctAnswers++;
    if (question("2. Who established our revolution system? ","Henry Truman")) correctAnswers++;
    if (question("3. Who was the US President during WW1? ","Woodrow Wilson")) correctAnswers++;
	
	cout << "That's " << correctAnswers << " correct out of 3 questions asked." << endl;
}