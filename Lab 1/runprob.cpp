// This program will take a number and divide it by 2.

// John Schmid



#include <iostream>
using namespace std;

int main()

{
	
	float number;
	int divider;
	
	divider = 2;
	
	cout << "Hi there" << endl;
	cout << "Please input a number and then hit return" << endl;
	cin  >> number;
	
	number = number / divider;
	
	cout << "Half of your number is " << number << endl;
	
	return 0;
}

/*

	Exercise 1: Done
	Exercise 2: Done
	Exercise 3: Changed divider to 2 instead of 0.
	Exercise 4: Hi there
		    Please input a number and then hit return
		    9
		    Half of your number is 4.5

*/
