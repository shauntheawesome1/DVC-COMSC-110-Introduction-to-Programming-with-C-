/*
Assignment 4.4
CS-110 Introduction to Programming
3/7/18
Shaun Munshi
*/ 
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	int age1 = 19;
	int age2 = 21;
	int age3 = 30;
	double  averageAge = ((double)age1 + (double)age2 + (double)age3) / 3.0;

	cout.setf(ios::fixed); 
	cout << setprecision(2); // applies until set to something else 
	cout << " " <<endl;
	cout << "The average of three ages is " << averageAge << "." << endl;
}
