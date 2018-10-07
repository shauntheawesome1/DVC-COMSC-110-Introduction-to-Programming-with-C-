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
     double lighthouseHeight;
     ifstream fin;
     fin.open("lighthouse.txt");
     if(!fin.good()) throw "I/O error";
     fin >> lighthouseHeight;
     fin.ignore(1000, 10);
     
     fin.close();

     double lighthouseToBoatDistance = sqrt(0.8 * lighthouseHeight);
 
     cout << "A " << lighthouseHeight << " foot tall lighthouse can be see from ";
     cout.setf(ios::fixed);
     cout << setprecision(0);
     cout << lighthouseToBoatDistance << " miles away" << endl;
 }