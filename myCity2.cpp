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
	
    i[0] = 86;
    i[1] = 91;
    i[2] = 95;
    i[3] = 95;
    i[4] = 93;
	
    cout << "San Ramon, California forecast high temperatures:" << endl;
    cout << "Saturday, Sept 5, " << i[0] << " degrees" << endl;
    cout << "Sunday, Sept 6, " << i[1] << " degrees" << endl;
    cout << "Monday, Sept 7, " << i[2] << " degrees" << endl;
    cout << "Tuesday, Sept 8, " << i[3] << " degrees" << endl;
    cout << "Wednesday, Sept 9, " << i[4] << " degrees" << endl;
    cout << "Source: weather.com" << endl;
}