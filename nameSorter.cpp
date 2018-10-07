/*
Shaun Munshi
Chapter 13.1
DVC COMSC-110
4/25/18
*/#include <algorithm>
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(){
	 ifstream fin;

	 const int MAX_NAMES = 5;
	 int Names = 0;
	 string name[MAX_NAMES];

	 string inputFile;
	 cout << "Enter the name of the file containing names: ";
	 getline(cin,inputFile);


	 fin.open(inputFile.c_str());
	 while(fin.good()){
		 string text;
		 getline(fin, text);
		if(!text.empty())
		{
			bool duplicate = false;
			for(int i = 0; i < Names; i++){
				if(text == name[i])
				{
					duplicate = true;
				}
			}
			if(!duplicate)
			{
				if(Names < MAX_NAMES)
				{
					name[Names++] = text;
				}
			}
		}
	  }
	 fin.close();
	 sort(name,name+Names);
	 for(int i = 0; i < Names; i++){
		cout << name[i] << endl;
	 }
}