/*
Shaun Munshi
Chapter 9
DVC COMSC-110
4/20/18
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
	
    cout << endl;
	
	string text;
	
	cout << "Enter a line of text: ";
	getline(cin, text);
	
	for (int i = 0; i < text.length(); i++)
		input[i]++;
	
	cout << text << endl;
}