/*
Shaun Munshi
2/25/18
Assignment 5.5
COMSC-110 Intro to Programming
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float tempCelsius;
	float tempFahrenheit;
	
	cout << "What's the temperature in Celsius? " << endl;
	cin >> tempCelsius;
	cin.ignore (1000, 10);
	
	tempFahrenheit = (1.8 * tempCelsius + 32); // 1.8 is just 9/5 in decimal form
	cout << tempCelsius << " celsius equals ";
	cout.setf(ios::fixed|ios::showpoint);
	cout << setprecision(1);
	cout << tempFahrenheit << " Fahrenheit " << endl;
}
