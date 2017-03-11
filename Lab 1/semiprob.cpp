// This program demonstrates a compile error.
// John Schmid

#include <iostream>
using namespace std;

int main()

{
	int number;
	float total;
	
	
	cout << "Today is a great day for Lab"; 
	cout << endl << "Let's start off by typing a number of your choice" << endl;
	cin  >> number;
	
	total = number * 2;
	cout << total << " is twice the number you typed" << endl;
	
	return 0;
	
}

/*

	Exercise 1: Done
	Exercise 2: Error Fixed
	Exercise 3: Today is a great day for Lab
		    Let's start off by typing a number of your choice
		    9
		    18 is twice the number you typed

	Exercise 4: Today is a great day for Lab
                    Let's start	off by typing a	number of your choice 
		    12
		    24 is twice the number you typed

*/
