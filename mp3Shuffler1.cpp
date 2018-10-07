/*
Shaun Munshi
Chapter 13.3
DVC COMSC-110
4/25/18
*/
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(){
	 srand(time(0));
	 ifstream fin;
	 string inputFile = "songs.txt";
	 fin.open(inputFile);

	 const int TOT_SONGS = 200;
	 int nSongs = 0;
	 string song[TOT_SONGS];

	 bool continueMusic;
	 while(fin.good()){
		   string line;
		   getline(fin, line);
		   if(nSongs < TOT_SONGS){
			song[nSongs++]=line;
		   }
	 }

	 fin.close();
     char answer;
		 do{
			 cout << "play a song [Y/N]?: ";
			 cin >> answer;
			 cin.ignore(1000,10);
			 if(answer=='Y' || answer=='y'){
				 continueMusic = true;
				 int index = rand() % 200 + 1;
				 string songShow = song[index];
				 cout << songShow << endl;
			 }
			 
			 else if(answer=='N' || answer=='n'){
				 continueMusic = false;
			 }
		 }
		 while(continueMusic); // do while statement
		 
		 if(!continueMusic){ //return after completion/ neg
			 return 0;
		 }
}

