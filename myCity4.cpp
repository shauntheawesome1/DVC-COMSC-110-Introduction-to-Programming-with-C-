/*
Shaun Munshi
Chapter 11
DVC COMSC-110
4/25/18
*/
#include <string>
#include <iostream>

using namespace std;

int main()
{
	const int amount = 5;
	int i[amount];
    string city = "San Ramon ";
    string day1 = "Saturday, Sept 5";
    string day2 = "Sunday, Sept 6";
	string day3 = "Monday, Sept 7";
	string day4 = "Tuesday, Sept 8";
	string day5 = "Wednesday, Sept 9";

    cout << "Enter the high for " << city << day1 << ": ";
    cin >> i[0];
    cout << "Enter the high for " << city << day2 << ": ";
    cin >> i[1];
    cout << "Enter the high for " << city << day3 << ": ";
    cin >> i[2];
    cout << "Enter the high for " << city << day4 << ": ";
    cin >> i[3];
    cout << "Enter the high for " << city << day5 << ": ";
    cin >> i[4];

    cout << endl;
    cout << city << "forecast high temperatures:" << endl;
    cout << day1 << ", " << i[0] << " degrees" << endl;
    cout << day2 << ", " << i[1] << " degrees" << endl;
    cout << day3 << ", " << i[2] << " degrees" << endl;
    cout << day4 << ", " << i[3] << " degrees" << endl;
    cout << day5 << ", " << i[4] << " degrees" << endl;

    int high = 0;
    int highOccur = 0;
    int low = 100;
    int lowOccur = 0;
    for (int j = 0; j < amount; j++){
    	if(i[j]<low){
    		low = i[j];
    	}
    	if(i[j]>high){
    	    high = i[j];
    	}
    }
    for (int j = 0; j < amount; j++){
     	if(i[j]==low){
     		lowOccur++;
     	}
     	if(i[j]==high){
     	    highOccur++;
     	}
     }

    cout << endl;
    cout << "The high for the week is " << high << " degrees, occurring " << highOccur << " times" << endl;
    cout << "The low for the week is " << low << " degrees, occurring " << lowOccur << " times" << endl;
}