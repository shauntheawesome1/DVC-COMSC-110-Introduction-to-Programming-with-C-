#include <iostream>
#include<string>
using namespace std;

void test(string question, string answer){
	 while (true)
	  {
	    string input;
	    cout << question;
	    getline(cin, input);

	    if (input == answer){
	    	cout << "Correct!" << endl;
	    	cout << endl;
	    	break;
	    }
	    else{
	    cout << "Incorrect!" << endl;
	    cout << endl;
	    break;
	    }
	  } 
}

int main() {

    test("1. Who invented computers? ","Charles Babbage");
    test("2. When were computers invented: ","1999");
    test("3. How many computer languages are there? ","Lots");
}