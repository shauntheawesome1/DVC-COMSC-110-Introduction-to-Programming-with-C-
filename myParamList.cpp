/*
Shaun Munshi
Chapter 8
DVC COMSC-110
4/10/18
*/
#include <iostream> 
#include <iomanip>
using namespace std; 
  
double calcAverage(int a, int b, int c) 
{ 
  double result = 0.0; 
  result = (a + b + c) / 3.0; 
  return result; 
} // calcAverage 
  
int main() 
{ 
  int x;
  int y;
  int z;
  
  cout << "Enter the first Number: " << endl;
  cin >> x;
  cin.ignore(1000, 10);
  cout << "Enter the second Number: " << endl;
  cin >> y;
  cin.ignore(1000, 10);
  cout << "Enter the third/last number: " << endl;
  cin >> z;
  cin.ignore(1000, 10);
  
  cout << " " << endl;
  double q = calcAverage(x, y, z); 
  cout << setprecision(3);
  cout << "The average is: " << q << endl; 
} // main 