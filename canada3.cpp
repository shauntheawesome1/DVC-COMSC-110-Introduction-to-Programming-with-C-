/*
Shaun Munshi
Chapter 10
DVC COMSC-110
4/25/18
*/
#include <fstream>
#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    ifstream fin;
    fin.open("temps.txt");
    if(!fin.good()) throw "I/O error";

    while(fin.good())
	{
    double celsiusTemperature;
    fin >> celsiusTemperature;
    fin.ignore(1000, 10);
    if(celsiusTemperature == -999)
    {
    	break;
    }

    double fahrenheitTemperature = ((9.0/5) * celsiusTemperature) + 32;

    cout << celsiusTemperature << " Celsius equals ";
    cout.setf( ios:: fixed | ios:: showpoint);
    cout << setprecision(1);
    cout << fahrenheitTemperature << " Fahrenheit" << endl;
    cout.unsetf( ios:: fixed | ios:: showpoint);
    cout << setprecision(6);
    }
    fin.close();
}