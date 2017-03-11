// This program takes two values from the user and then swaps them
// before printing the values.  The user will be prompted to enter
// both numbers.

// John Schmid

#include <iostream>
using namespace std;

int main()

{
	
	float firstNumber;
	float secondNumber;
	
	// Prompt user to enter the first number.
	
	cout << "Enter the first number" << endl;
	cout << "Then hit enter" << endl;
	cin  >> firstNumber;
	
	// Promt user to enter the second number.
	
	cout << "Enter the second number" << endl;
	cout << "Then hit enter" << endl;
	cin  >> secondNumber;
	
	// Echo print the input.
	
	cout << endl << "You input the numbers as " << firstNumber
		 << " and " << secondNumber << endl;
	
    // Now we will swap the values.
	
	firstNumber = secondNumber;
    	secondNumber = firstNumber;
    
	// Output the values.
	
	cout << "After swapping, the values of the two numbers are "
	     << firstNumber << " and " << secondNumber << endl;
	
	return 0;
	
}

*/

	Exercise 1: Done
	Exercise 2: Done
	Exercise 3: Enter the first number
		    Then hit enter
		    4
		    Enter the second number
		    Then hit enter
		    2

		    You input the number as 4 and 2
		    After swapping, the values of the numbers are 2 and 2

	Exercise 4: The error is located in the last line, because it 
		    only dispalys the second number twice instead of them
		    swapped.

/*
