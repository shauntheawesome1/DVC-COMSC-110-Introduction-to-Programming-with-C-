/*
Shaun Munshi
Chapter 10
DVC COMSC-110
4/25/18
*/
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    ifstream fin;
	string input;
	cout << "Enter the name of an existing text file to be encoded: " << endl;
	getline(cin, input);

	fin.open(input.c_str());
	ofstream fout;
	fout.open("secret.txt");
	if(!fout.good()) throw "I/O error";
    while(fin.good()){
    string item;
    getline(fin, item);
	for (int i = 0; i < item.length(); i++){
		item[i]++;
	}
	fout << item << endl;
   }
    fout.close();
    fin.close();
}