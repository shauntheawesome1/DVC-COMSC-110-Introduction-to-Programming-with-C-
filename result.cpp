#include <iostream> 
#include <string> 
using namespace std; 
  
string getAnswer() 
{ 
  string result = ""; // step 1
  
  while (true) 
  { 
    cout << "Your answer [yes/no]: "; 
    getline(cin, result); 
  
    if (result == "yes") break; 
    if (result == "no") break; 
    cout << "Let's try this again. "; 
  } // while
  
  return result; // step 3 
} // getAnswer 
  
int main() 
{ 
  // do stuff... 
  if (getAnswer() == "yes") 
  { 
    // do stuff... 
  } // if 
} // main 