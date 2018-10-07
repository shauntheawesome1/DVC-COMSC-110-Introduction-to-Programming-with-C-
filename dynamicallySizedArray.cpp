/*
Shaun Munshi
Chapter 11
DVC COMSC-110
4/25/18
*/
#include <algorithm>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int number;
	cout << "How many scores? ";
	cin >> number;
	int* scores = new int[number];
	for(int x = 0; x < number; x++){
		cout << "Enter a number: ";
		cin >> scores[x];
	}

	sort(scores,scores + number);
	cout << "Sorted: ";
	for(int x = 0; x < number; x++){
		if(x==number-1){
			cout << scores[x] << endl;
		}
		else{
			cout << scores[x] << " ";
		}
	}

	cout << "Minimum: " << scores[0] << endl;
	cout << "Maximum: " << scores[number-1] << endl;

	double sum = 0;
	for(int x = 0; x < number; x++){
		sum += scores[x];
	}

	double average = sum/(double)number;
    cout << "Average: " << fixed << setprecision(1) << average << endl;

    int numA = 0;
    for(int x = 0; x < number; x++){
    	if(scores[x]>=90)
    		numA++;
    }
    if(numA>0){
    	cout << "At least one 'A' grade entered" << endl;
    }
} 