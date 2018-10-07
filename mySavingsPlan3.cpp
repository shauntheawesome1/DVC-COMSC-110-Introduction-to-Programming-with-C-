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
     ifstream fin;
     fin.open("savings.txt");
     if(!fin.good()) throw "I/O error";

     int years;
     fin >> years;
     fin.ignore(1000, 10);
     
     double interestRate;
     fin >> interestRate;
     fin.ignore(1000, 10);
     
     int D;
     fin >> D;
     fin.ignore(1000, 10);
     
     fin.close();

     double p = interestRate / 1200; 
     double T = years * 12;
     double S = D * ((pow(1 + p, T) - 1) / p);
     
     cout << "In " << years << " years at " << interestRate << "%, $";
     cout << D << " deposited per month will grow to $";
     
     cout.setf(ios::fixed|ios::showpoint);
     cout << setprecision(2);
     cout << S << "." << endl;
 }