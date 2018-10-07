/*
Shaun Munshi
Chapter 8
DVC COMSC-110
4/10/18
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
	int thousandaire = 1000;
	int millionaire  = 1000000;
	int billionaire  = 1000000000;

	bool isThousandaire = false;
	bool isMillionaire = false;
	bool isBillionaire = false;

	int weeksToThousandaire;
	int weeksToMillionaire;
	int weeksToBillionaire;

	double a = 0;
	double initial = 0.05;
	int currentWeekNumber = 0;

	while (true) {
		if (!isThousandaire && amount >= thousandaire) {
			isThousandaire = true;
			weeksToThousandaire = currentWeekNumber;
		}

		if (!isMillionaire && amount >= millionaire) {
			isMillionaire = true;
			weeksToMillionaire = currentWeekNumber;
		}

		if (!isBillionaire && amount >= billionaire) {
			isBillionaire = true;
			weeksToBillionaire = currentWeekNumber;
			break;
		}

		a += initial;
		initial *= 2;
		currentWeekNumber++;
	}

	cout << "In " << weeksToThousandaire << " weeks, I will be a thousandaire!" << endl;
	cout << "In " << weeksToMillionaire << " weeks, I will be a millionaire!" << endl;
	cout << "In " << weeksToBillionaire << " weeks, I will be a billionaire!" << endl;
}