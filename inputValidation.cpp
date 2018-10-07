/*
Shaun Munshi
2/25/18
Assignment 6.2
COMSC-110 Intro to Programming
*/
#include <iomanip>
#include <iostream>
//#include <string>
using namespace std;

#include <cmath>

int main()
{
  string password;
  
  // input values
  int years = 10;
  int D = 100;
   
   // output (calculated) values
  double p = 0.075 / 12; // 7.5% annual interest rate
  double T = years * 12;
  double S = D * ((pow(1 + p, T) - 1) / p);
  
  while (password != "Sh@un%h31")
  {
	cout << "Enter your password. ";
    cin  >> password;
    cin.ignore(1000, 10);
  }

  if (password == "Sh@un%h31")
  {
    // echoing input values, unformatted
	cout << " " << endl;
	cout << "In " << years << " years, $";
	cout << D << " deposited per month will grow to $";

  // formatting output (see 4.2)
	cout.setf(ios::fixed|ios::showpoint);
	cout << setprecision(2);
	cout << S << "." << endl;
  }
  else
  {
	  cout << "Enter your password. ";
  }
}