/*
Shaun Munshi
2/25/18
Assignment 7.1
COMSC-110 Intro to Programming
*/
#include <iostream> 
using namespace std; 
  
int main() 
{ 
  // read a grade from the keyboard (see 5.1) 
  char grade; 
  cout << "What is your grade? [A, B, C, D, or F]: "; 
  cin >> grade; 
  cin.ignore(1000, 10); 
  
  switch (grade)
  {
	  case 'A':
	  case 'B':
	  case 'C':
		cout << "You pass." << endl;
		break;
	  case 'D':
	  case 'F':
		cout << "You do NOT pass. " << endl;
		break;
	  default:
		cout << "Invalid Entry" << endl;
  }
} 