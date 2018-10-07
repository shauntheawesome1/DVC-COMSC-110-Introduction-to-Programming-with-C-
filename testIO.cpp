#include <iostream> 
using namespace std; 
  
int main() 
{ 
  // code block to read an int value from the keyboard 
  int age;                      // step 1
  cout << "What is your age? "; // step 2 
  cin >> age;                   // step 3
  cin.ignore (1000, 10);
 
  // code block to echo the age of the user
  cout << "Your age is " << age << endl;
} 
