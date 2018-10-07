/*
Assignment 4.1
CS-110 Introduction to Programming
3/7/18
Shaun Munshi
*/ 
#include <iostream>
#include <iomanip>
using namespace std;
#include <cmath>

int main() 
{
	int p = 270000;
	float r = 5.125 / 12;
	int n = 30 *12; 
	float monthlyPayment;

	cout >> 
	
	monthlyPayment = (p* pow(1+r/100,n)  *r/100) / ( pow(1+r/100, n) -1);

	cout << " " << endl;
	cout << "Amount borrowed: " << p <<endl;
	cout << "Annual Interest Rate: " << r <<endl;
	cout << "Payback Period: " << "30 years" <<endl;
	cout.setf(ios::fixed|ios::showpoint);
	cout << setprecision(2);
	cout <<"Average payment monthly: " <<  monthlyPayment << endl;
}
