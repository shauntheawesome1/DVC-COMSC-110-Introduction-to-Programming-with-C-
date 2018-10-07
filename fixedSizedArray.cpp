/*
Shaun Munshi
Chapter 11
DVC COMSC-110
4/25/18
*/
#include <iostream>
using namespace std;

int main()
{
  const int SIZE = 4;
  int score[SIZE];
  int x;

  for(x =0; x < SIZE; x++){
	  cout << "Enter a number: ";
	  cin >> score[x];
  }

  int scoreTotal = 0;
  for (x = 0; x < SIZE; x++)
  {
    scoreTotal += score[x];
  } 
  double average = scoreTotal / 4.0;
  cout << "The average of " << SIZE << " numbers is " << average << endl;

  int nGreater = 0;
  for (x = 0; x < SIZE; x++)
  {
    if (score[x] > average) nGreater++;
  } 
  cout << nGreater << " scores are greater than the average." << endl;
} 