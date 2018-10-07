/*
Shaun Munshi
2/25/18
Assignment 7.2
COMSC-110 Intro to Programming
*/
#include <iomanip> 
#include <iostream> 
using namespace std;
 
#ifdef _WIN32 
#include <windows.h> 
#else 
#include <unistd.h> 
#endif 
  
int main() 
{ 
	cout.fill('0'); 
	  for (int sec = 10; sec >= 0; sec--) 
      { 
        cout << setw(2) << sec << ' '; 
        cout.flush(); 
		
		#ifdef _WIN32 
        Sleep(1000); // one thousand milliseconds
        #else 
        sleep(1); // one second 
        #endif 
  
		cout << '\r'; // CR 
      } 
    cout << "Blast Off!" << endl;
}  