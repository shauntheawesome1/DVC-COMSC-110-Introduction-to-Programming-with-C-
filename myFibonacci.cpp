/*
Shaun Munshi
Chapter 15.2
DVC COMSC-110
5/12/18
*/
#include <iostream>
using namespace std;

int Index_Fibonacci(int num){
    int s;
    
	if(num < 2){
    s = num;    
    }
    else{
        s = Index_Fibonacci(num-1) + Index_Fibonacci(num-2);
    }
    
	return s;
}

int main()
{	
	int num;
	cout << "Enter an index [0 or greater]: ";
	cin >> num;
	cin.ignore(1000,10);
	cout << "The Fibonacci number at index " << num << " is " << Index_Fibonacci(num) << "." << endl;
}