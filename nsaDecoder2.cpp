/*
Shaun Munshi
Chapter 11
DVC COMSC-110
4/25/18
*/
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    const int SIZE = 4;
    int offset[SIZE] = {-4,3,-2,5};
    ifstream fin;
	fin.open("secret.txt");
	int counter = 0;
	int index = 0;
	if(!fin.good()) throw "I/O error";
    while(fin.good()){
    string line;
    getline(fin, line);
	for (int i = 0; i < line.length(); i++){
	    index = counter % SIZE;
		counter++;
		line[i]=line[i]+offset[index];
	}
	cout << line << endl;
   }
    fin.close();
}
