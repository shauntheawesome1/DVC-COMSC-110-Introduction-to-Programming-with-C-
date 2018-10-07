/*
Shaun Munshi
2/25/18
Assignment 3.5: myDays.cpp
COMSC-110 Intro to Programming
*/

#include <iostream>

using namespace std;

int main() {
	
	int days = 0;
	
	//I am 17 years old. 365 * 17 is 6205
	
	days = days + 6205;
	days = days + 4;
	days = days - 1;
	days = days - 306;
	
	
	cout << " " << endl;
	cout << "DOB: January 2, 2001" << endl;
	cout << "Due: March 1, 2018" << endl;
	cout << "Age: " << days << " days" << endl;
}
