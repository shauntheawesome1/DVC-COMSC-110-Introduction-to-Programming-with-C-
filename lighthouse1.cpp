/*
Assignment 4.2
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
	int height = 50;
	float distance = sqrt (0.8 * height);
	
	cout << " " << endl;
	cout.setf(ios::fixed);
	cout << setprecision(0);
	cout << "A " << height << " foot lighthouse can be seen from " << distance << " miles away " << endl;
}
