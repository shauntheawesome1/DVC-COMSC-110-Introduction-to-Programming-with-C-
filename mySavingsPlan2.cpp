/*
Assignment 5.4
CS-110 Introduction to Programming
3/10/18
Shaun Munshi
*/ 
#include <iomanip>
#include <iostream>
using namespace std;
#include <cmath>

int main()
{
  // input values
  double T;
  int D;
  
  // output (calculated) values
  double p; // annual interest rate
  double years;
  
  cout << "Years until retirement: " << endl;
  cin >> years;
  cin.ignore(1000, 10);
  cout << "Expected annual interest rate in percent: " << endl;
  cin >> p;
  cin.ignore(1000, 10);
  cout << "Amount to deposit each month in dollars: " << endl;
  cin >> D;
  cin.ignore(1000, 10);
  
  p = (p / 100) / 12;
  T = years * 12;
  double S = D * ((pow(1 + p, T) - 1) / p) ;

  // echoing input values, unformatted
  cout << "" << endl;
  cout << "In " << years << " years " << "at " << p * 1200 << " percent, $";
  cout << D << " deposited per month will grow to $";
