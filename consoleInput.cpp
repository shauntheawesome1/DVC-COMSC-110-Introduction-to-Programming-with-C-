/*
Shaun Munshi
2/25/18
Assignment 5.6
COMSC-110 Intro to Programming
*/
#include <iostream>
#include <string>
using namespace std;

int main () 
{
	int age;
	string name;
	double temp;
	string city;
	
	cout << "How old are you? " << endl;
	cin >> age;
	cin.ignore(1000, 10);
	
	cout << "What is your name? " << endl;
	getline(cin, name);
	
	cout << "What is the current outside temperature? " << endl;
	cin >> temp;
	cin.ignore(1000, 10);
	
	cout << "Which city do you live in ? " << endl;
	getline(cin, city);
	
	cout << " " << endl;
	cout << name << " is " << age << " years old. " << endl;
	cout << "It's " << temp << " degrees F in " <<city <<". " << endl;
}
