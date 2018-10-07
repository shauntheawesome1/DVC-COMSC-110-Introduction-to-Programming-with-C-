/*
Shaun Munshi
2/25/18
Assignment 6.4
COMSC-110 Intro to Programming
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float tempCelsius;
	float tempFahrenheit;
	int sentinelValue = -999;
	
	cout << "What's the temperature in Celsius? ";
	cin >> tempCelsius;
	cin.ignore (1000, 10);
	tempFahrenheit = (1.8 * tempCelsius + 32); // 1.8 is just 9/5 in decimal form
	
	if (tempCelsius != -999)
	{
	  cout << tempCelsius << " celsius equals ";
	  cout.setf(ios::fixed|ios::showpoint);
	  cout << setprecision(1);
	  cout << tempFahrenheit << " Fahrenheit " << endl;
	}
	
	while (tempCelsius != sentinelValue)
	{
		if (tempCelsius == sentinelValue)
		{
		   break;
		}
		cout << "What's the temperature in Celsius? ";
		cin >> tempCelsius;
		cin.ignore (1000, 10);
		tempFahrenheit = (1.8 * tempCelsius + 32); // 1.8 is just 9/5 in decimal form
	
		if (tempCelsius != sentinelValue)
		{
		  cout << tempCelsius << " celsius equals ";
		  cout.setf(ios::fixed|ios::showpoint);
		  cout << setprecision(1);
		  cout << tempFahrenheit << " Fahrenheit " << endl;
		}
	
	}

}