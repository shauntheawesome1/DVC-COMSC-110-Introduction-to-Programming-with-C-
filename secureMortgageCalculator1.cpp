/*
Shaun Munshi
Chapter 8
DVC COMSC-110
4/10/18
*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
#include <cmath>

void security()
{
	string password = "CompSci";
	string userInput;
	
	cout << "Enter the password. " << endl;
	cin >> userInput;
	cin.ignore(1000, 10);
	
	while (userInput != password)
	{
		cout << "Wrong Password. Please enter it again." << endl;
		cin >> userInput;
		cin.ignore(1000, 10);
		
		if (userInput == password)break;
	}
}

int main() 
{
	int p;
	float r;
	int n = 30 *12; 
	float monthlyPayment;

	security();
	cout << "What is the amount borrowed? " << endl;
	cin >> p;
	cin.ignore (1000, 10);
	cout << "What is the annual interest rate? " << endl;
	cin >> r;
	cin.ignore (1000, 10);
	r = r / 12;
	
	monthlyPayment = (p* pow(1+r/100,n)  *r/100) / ( pow(1+r/100, n) -1);

	cout << " " << endl;
	cout << "Amount borrowed: " << p <<endl;
	cout << "Annual Interest Rate: " << r * 12 << "%" <<endl;
	cout << "Payback Period: " << "30 years" <<endl;
	cout.setf(ios::fixed|ios::showpoint);
	cout << setprecision(2);
	cout <<"Average payment monthly: $" <<  monthlyPayment << endl;
}