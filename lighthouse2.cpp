/*
Assignment 5.2
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
	float height;
	
	cout << "What is the height of the lighthouse in feet? " << endl;
	cin >> height;
	cin.ignore (1000, 10);
	
	float distance = sqrt (0.8 * height);
	
	cout << " " << endl;
	cout << "A " << height << " foot lighthouse can be seen from ";
	cout.setf(ios::fixed);
	cout << setprecision(0);
	cout << distance << " miles away " << endl;
}
