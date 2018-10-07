/*
Assignment 4.3
CS-110 Introduction to Programming
3/7/18
Shaun Munshi
*/ 
#include <iomanip>
#include <iostream>
using namespace std;
#include <cmath>

int main()
{
  // input values
  int years = 20;
  int D = 200;

  // output (calculated) values
  double p = 0.1 / 12; //10 percent annual interest rate
  double T = years * 12;
  double S = D * (pow(1 + p, T) - 1) / p;

  // echoing input values, unformatted
  cout << "" << endl;
  cout << "In " << years << " years " << "at " << p * 1200 << " percent, $";
  cout << D << " deposited per month will grow to $";

  // formatting output (see 4.2)
  cout.setf(ios::fixed|ios::showpoint);
  cout << setprecision(2);
  cout << S << "." << endl;
}
