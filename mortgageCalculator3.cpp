/*
Shaun Munshi
Chapter 10
DVC COMSC-110
4/25/18
*/
#include <fstream>
#include <iomanip>
#include <iostream>
using namespace std;

#include <cmath>

int main()
{    
    int moneyBorrowed = 100000;
    cout << "What's the amount borrowed? ";
    cin >> moneyBorrowed;
    cin.ignore(1000, 10);
    
    double annualInterestRate;
    cout << "What's the annual interest rate? ";
    cin >> annualInterestRate;
    cin.ignore(1000, 10);
    
    double monthlyInterestRate = annualInterestRate/1200;
    double yearsForPayback = 30;
    double monthsforPayback = yearsForPayback * 12;
    double monthlyPayment = (moneyBorrowed * pow(1+(monthlyInterestRate),monthsforPayback) * monthlyInterestRate)/((pow(1+monthlyInterestRate,monthsforPayback))-1);

    ofstream fout;
    fout.open("mortgage.txt", ios::app);
    fout << "Amount borrowed = $" << moneyBorrowed << endl;
    fout << "Annual interest rate = " << annualInterestRate << "%" << endl;
    fout << "Payback period = " << yearsForPayback << " Years" << endl;
    fout.setf( ios:: fixed | ios:: showpoint);
    fout << setprecision(2);
    fout << "Monthly payment = $" << monthlyPayment << endl;
    fout << endl;
    fout.close();
}