/*
Shaun Munshi
Chapter 12.3
DVC COMSC-110
4/25/18
*/
#include <fstream>
#include <iomanip>
#include <iostream>
using namespace std;

#include <cmath>

struct Mortgage{
	 int borrowedAmount; //money borrowed
	 double annualInterestRate; //annual Interest rate
	 double monthsPayback; // months for payback
	 double paymentMonthly; //monthly payment
};

int main()
{
	Mortgage mort;

    cout << "What's the amount borrowed? ";
    cin >> mort.borrowedAmount;
    cin.ignore(1000, 10);

    cout << "What's the annual interest rate? ";
    cin >> mort.annualInterestRate;
    cin.ignore(1000, 10);
    cout << endl;

    double monthlyInterestRate = mort.annualInterestRate / (1200);
    double yearsForPayback = 30;
    double monthsPayback = (yearsForPayback * 12);
    double paymentMonthly = (mort.borrowedAmount * pow(1+(monthlyInterestRate),monthsPayback) * monthlyInterestRate)/((pow(1+monthlyInterestRate,monthsforPayback))-1);

    
    cout << "Amount borrowed = $" << mort.borrowedAmount << endl;
    cout << "Annual interest rate = " << mort.annualInterestRate << "%" << endl;
    cout << "Payback period = " << yearsForPayback << " Years" << endl;
    cout.setf( ios:: fixed | ios:: showpoint);
    cout << setprecision(2);
    cout << "Monthly payment = $" << paymentMonthly << endl;

    ofstream fout;
    fout.open("mortgage.txt", ios::app);
    fout << "Amount borrowed = $" << mort.borrowedAmount << endl;
    fout << "Annual interest rate = " << mort.annualInterestRate << "%" << endl;
    fout << "Payback period = " << yearsForPayback << " Years" << endl;
    fout.setf( ios:: fixed | ios:: showpoint);
    fout << setprecision(2);
    fout << "Monthly payment = $" << paymentMonthly << endl;
    fout << endl;
    fout.close();
}