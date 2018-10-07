/*
Assignment 5.1
CS-110 Introduction to Programming
3/10/18
Shaun Munshi
*/ 
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
#include <cmath>

int security()
{
    int tries = 0;
	string password;
	while(tries < 4){
    cout << "Enter the password: ";
    getline(cin, password);

    if (password == "shaun") {
    	break;
		//return 0;
    }
    else{
    cout << "Wrong, please enter it again." << endl;
    tries++;
    if(tries == 3){
    	cout << "Too many tries. Programming is now exiting.";
    	return 3;
     }
    }
	}
} 
 

int main() 
{
	int p;
	float r;
	int n = 30 *12; 
	float monthlyPayment;

	//security();
	int x = security();
	cout <<"X" << x << endl;
    if (x != 3){
    	//exit(0);
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
	cout << "Payback Period: " << "30 years" << endl;
	cout.setf(ios::fixed|ios::showpoint);
	cout << setprecision(2);
	cout <<"Average payment monthly: $" <<  monthlyPayment << endl;
}
}

