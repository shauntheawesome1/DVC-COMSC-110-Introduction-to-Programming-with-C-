/*
Shaun Munshi
Chapter 12.1
DVC COMSC-110
4/25/18
*/
#include <iostream>
#include<string>
#include <sstream>
#include <ctime>
#include <cstdlib>
#include <cstring>
using namespace std;

struct ultCard{
	int suit, value;
};

void valueAndSuit(ultCard pcd, int player){
	string show;
	string show2;
	if(player==0){
	    show+= "Computer's card is a ";
	}
	
	else{
		show+= "Human's card is a ";
	}

	if(pcd.value == 11)
		show += "Jack";
	else if(pcd.value == 12)
		show += "Queen";
	else if(pcd.value == 13)
		show += "King";
	else if(pcd.value == 14)
		show += "Ace";
	else{
		stringstream var;
	    var << pcd.value;
		show += var.str();
	}

	if(pcd.suit == 0)
		show2 = "Spades";
	else if(pcd.suit == 1)
		show2 = "Diamonds";
	else if(pcd.suit == 2)
		show2 = "Hearts";
	else
		show2 = "Clubs";

	cout << show << " of " << show2 << endl;
}

bool getYesOrNo(){
	char Cont;
	bool continueD;
	cout << "Continue? [Y/N] ";
	cin >> Cont;
	cin.ignore(1000, 10);
	cout << endl;
	if(toupper(Cont) == 'N'){
	  continueD = false;
	}
    if(toupper(Cont) == 'Y'){
	 continueD = true;
	}
	do{
			if(continueD == true){
				break;
			}
			if(continueD == false){
				break;
			}
		  }while(continueD == true || continueD == false);
    return continueD;
}

int main()
{
	srand(time(0));
	
	ultCard human, computer;

	int hWin = 0;
	int cWin = 0;
	bool answer;

    do{
		computer.value = 2 + (rand() % 12);
		computer.suit = rand() % 4;
		valueAndSuit(computer,0);

		human.value = 2 + (rand() % 12);
		human.suit = rand() % 4;
	    valueAndSuit(human,0);

		if(computer.value < human.value){
			cout << "--<< Human wins! >>--" << endl;
			hWin++;
			stringstream var;
			var << cWin;
			string cDis = var.str();
			stringstream var2;
			var2 << hWin;
			string hDis = var2.str();
			cout << "Computer wins: " << cDis << ", Human wins: " << hDis << endl;
          
		}
		if(computer.value == human.value){
			cout << "--<< It's a tie. >>--" << endl;
			stringstream var;
			var << cWin;
			string cDis = var.str();
			stringstream var2;
			var2 << hWin;
			string hDis = var2.str();
			cout << "Computer wins: " << cDis << ", Human wins: " << hDis << endl;
            
		}
		if(computer.value > human.value){
			cout << "--<< Computer wins! >>--" << endl;
			cWin++;
			stringstream var;
			var << cWin;
			string cDis = var.str();
			stringstream var2;
			var2 << hWin;
			string hDis = var2.str();
			cout << "Computer wins: " << cDis << ", Human wins: " << hDis << endl;
          
		}
    }
	while(getYesOrNo()==true);
 }
