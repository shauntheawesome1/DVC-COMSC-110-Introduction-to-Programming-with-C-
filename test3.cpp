#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

float averageAge = 19 + 20 + 30;
averageAge = averageAge / 3;
cout << averageAge << endl;

//cout.setf(ios::showpoint); 
 // cout.setf(ios::fixed|ios::showpoint); 
   cout.unsetf(ios::fixed|ios::showpoint); 
  cout << setprecision(6); // resets precision to its default 
  cout << setprecision(2);

}
