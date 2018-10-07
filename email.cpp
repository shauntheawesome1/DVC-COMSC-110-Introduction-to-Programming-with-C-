/*
Shaun Munshi
Final Project
May 10th, 2018
DVC COMSC 110 Introduction to Programming
*/
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

bool ValidEmailChar(char x){
	if((x >='A' && x <= 'Z') || (x >='a' && x <='z') || (x >='0' && x <='9') || x == '.' || x == '-' || x == '+')
	{
		return true;
	}
	return false;
}

int main(){

    ifstream fin;
	
	string defaultInputFile = "fileContainingEmails.txt";
	string inputFile;
	string defaultOutputFile = "copyPasteMyEmails.txt";
	string outputFile;

	cout << "Enter input filename (Press enter for default): ";
	getline(cin,inputFile);
	if(inputFile==""){
		inputFile = defaultInputFile;
	}
	cout << "Enter output filename (Press enter for default):  ";
	getline(cin,outputFile);
	if(outputFile==""){
			outputFile = defaultOutputFile;
	}

	const int TOT_EMAILS = 1000;
	int numEmails = 0;
	string name[TOT_EMAILS];

	fin.open(inputFile.c_str());
    while(fin.good())
	{
		string text;
		getline(fin, text);
		for (int i = 0; i < text.length(); i++)
		{
			if(text[i]=='@')
			{

				int y = i - 1;
				int a = i + 1;
				bool dotTrue = false; // has a dot

				while(true)
				{
					 if(y < 0){
						 break;
					 }
					 if(!ValidEmailChar(text[y])){
						 break;
					 }
					 y--;
				}
				   y++;
				while(true)
				{
					 if(a >= text.length()){
						 break;
					 }
					 if(!ValidEmailChar(text[a])){
						 break;
					 }
					 if(text[a]=='.'){
						 dotTrue = true;
					 }
					 a++;
				}

				if(numEmails < TOT_EMAILS){
					bool duplicate = false;
					string email = text.substr(y, a-y);
					for(int i = 0; i < numEmails; i++){
						if(email.compare(name[i]) == 0){
							duplicate = true;
						}
					}
					if(!duplicate && dotTrue){
						name[numEmails++] = text.substr(y ,a-y);
					}
				}
			}
		}
	}
    fin.close();

   if(numEmails!=0){
		for(int z = 0; z < numEmails; z++){
		    cout << name[z] << endl;
		}
	    
		ofstream fout;
    	fout.open(outputFile.c_str());
    	if(fout.good()){
			 for(int z = 0; z < numEmails; z++){
				fout << name[z] + "; "; 
			 }
    	}
   	    fout.close();
		
		cout << " " << endl;
		cout << numEmails << " addresses were found and copied to the file " << outputFile << endl;
		cout << " " << endl;
		cout << "Thanks to this program, you may now open  " << outputFile << " and copy/paste its contents into the to, cc, or bcc fields. Programming is great, isn't it?" << endl;
		cout << " " << endl;
		cout << "Helpful Hint: It is best to paste email addresses into the bcc field. Bcc stands for blank carbon copy, and the people can't see who has been copied here." << endl;
    }
    else{
		cout << " " << endl;
    	cout << "Unfortunately, we could not find any emails in the " << inputFile << ", so please update the file and try agian soon." << endl;
    }
}
