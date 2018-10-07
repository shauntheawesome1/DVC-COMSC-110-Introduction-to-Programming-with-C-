/*
Shaun Munshi
Chapter 15.3
DVC COMSC-110
5/12/18
*/
#include <deque>
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

#include <ctime>
#include <cstdlib>

struct five_Last{
    string finalSong;
};

int main(){
	 srand(time(0));
	 ifstream fin;

	 string inputFile = "songs.txt";
	 fin.open(inputFile);

	 const int MAX_SONGS = 200;
	 int numSongs = 0;
	 string song[MAX_SONGS];

	 deque<five_Last> aLastFive;
	 five_Last aSong;

	 bool musicContinue = true;
	 bool recent = false;
	 int index = 0;
	 string showSong = "";

	 while(fin.good()){
		   string text;
		   getline(fin, text);
		   if(numSongs < MAX_SONGS){
			song[numSongs++]=text;
		   }
	 }

	 fin.close();

     char answer;
		 do{
		     
         cout << "play a song [Y/N]?: ";
         cin >> answer;
         cin.ignore(1000,10);

         if(answer=='Y' || answer=='y'){
			do{
				 musicContinue = true;
				 index = rand() % numSongs;
				 showSong = song[index];
				 recent = false;
				 int i = 0;
					for(i = 0; i < aLastFive.size(); i++){
						 if((aLastFive[i].finalSong).compare(showSong) == 0){
							 recent = true;
						 }
					}
					if(recent == false)
					{
						cout << showSong << endl;
						aSong.finalSong = showSong;
							if(aLastFive.size() == 5){
							   aLastFive.pop_front();
							}
						aLastFive.push_back(aSong);
					}
			 }while(recent); // do while statement
         }

         else if(answer=='N' || answer=='n'){
             musicContinue = false;
         }
         
		 }while(musicContinue); // condition for do while loop
}