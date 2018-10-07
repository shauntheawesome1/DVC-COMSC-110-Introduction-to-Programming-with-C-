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
	fin.open("secret.txt");
	if(!fin.good()) throw "I/O error";
    while(fin.good()){
    string item;
    getline(fin, item);
	for (int i = 0; i < line.length(); i++){
		item[i]--;
	}
	cout << item << endl;
   }
    fin.close();
}