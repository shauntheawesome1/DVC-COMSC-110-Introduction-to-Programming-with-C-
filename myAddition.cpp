/*
Shaun Munshi
Chapter 8
DVC COMSC-110
4/10/18
*/
#include <iostream>
#include <ctime>
#include <cstdlib> 
using namespace std; 
  
void additionProblem(int topNumber, int bottomNumber) 
{ 
  int userAnswer; 
  cout << "\n\n\n      " << topNumber << " + " << bottomNumber << " = "; 
  cin >> userAnswer; 
  cin.ignore(1000, 10); 
  
  int theAnswer = topNumber + bottomNumber; 
  if (theAnswer == userAnswer) 
    cout << "      Correct!" << endl; 
  else 
    cout << "      Very good, but a better answer is " << theAnswer << endl; 

} // additionProblem 
  
int main() 
{ 
  srand(time(0));
  int counter = 0;
  
  while (counter < 5)
  {
  int x = rand() % 10;
  int y = rand() % 10;
  additionProblem(x, y);
  counter++;
  }  
} // main 