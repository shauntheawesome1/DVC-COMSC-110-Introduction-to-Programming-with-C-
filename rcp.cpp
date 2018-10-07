/*
Shaun Munshi
COMSC-110 - Spring 2015
4/3/18
Assignment 7.8
*/
#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{	
	srand (time(0));
	
	int ih = 0; 
	int ic = 0; 
	
	while (true)
	{
		char humanSelection; 
		cout << "Choose Rock [R/r], Paper [P/p], Scissors [S/s] or Quit [Q/q]: ";
		cin >> humanSelection;
		cin.ignore(1000, 10);
		if (humanSelection == 'Q' || humanSelection == 'q')
			break;
		
		cout << "Human: ";
		
		switch (humanSelection)
		{
			case 'R':
			case 'r':
				cout << "Rock; ";
				break;
			case 'P':
			case 'p':
				cout << "Paper; ";
				break;
			case 'S':
			case 's':
				cout << "Scissors; ";
				break;
		}
		
		cout << "Computer: ";
		
		int compSelection = (rand() % 3); 
		
		switch (compSelection)
		{
			case 0:
				cout << "Rock; ";
				break;
			case 1:
				cout << "Paper; ";
				break;
			case 2:
				cout << "Scissors; ";
				break;
		}
		
		// Determine the Winner
		if (humanSelection == 'R' || humanSelection == 'r' && compSelection == 0)
			cout << "It's a tie." << endl;
		else if (humanSelection == 'R' || humanSelection == 'r' && compSelection == 1)
			cout << "Computer wins." << endl;
		else if (humanSelection == 'R' || humanSelection == 'r' && compSelection == 2)
			cout << "Human wins." << endl;
		else if (humanSelection == 'P' || humanSelection == 'p' && compSelection == 0)
			cout << "Human wins." << endl;
		else if (humanSelection == 'P' || humanSelection == 'p' && compSelection == 1)
			cout << "It's a tie." << endl;
		else if (humanSelection == 'P' || humanSelection == 'p' && compSelection == 2)
			cout << "Computer wins." << endl;
		else if (humanSelection == 'S' || humanSelection == 's' && compSelection == 0)
			cout << "Computer wins." << endl;
		else if (humanSelection == 'S' || humanSelection == 's' && compSelection == 1)
			cout << "Human wins." << endl;
		else if (humanSelection == 'S' || humanSelection == 's' && compSelection == 2)
			cout << "It's a tie." << endl;
		
		cout << endl;
		
		if (humanSelection == 'R' || humanSelection == 'r' && compSelection == 1)
			ic = ic + 1;
		else if (humanSelection == 'R' || humanSelection == 'r' && compSelection == 2)
			ih = ih + 1;
		else if (humanSelection == 'P' || humanSelection == 'p' && compSelection == 0)
			ih = ih + 1;
		else if (humanSelection == 'P' || humanSelection == 'p' && compSelection == 2)
			ic = ic + 1;
		else if (humanSelection == 'S' || humanSelection == 's' && compSelection == 0)
			ic = ic + 1;
		else if (humanSelection == 'S' || humanSelection== 's' && compSelection == 1)
			ih = ih + 1;
	}
	
	cout << " " << endl;
	cout << "Number of Computer wins: " << ic << endl;
	cout << "Number of Human wins: " << ih << endl;
}