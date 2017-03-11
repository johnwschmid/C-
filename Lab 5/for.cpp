//  This program has the user input a number n and then finds the
//  mean of the first n positive integers

// JOHN SCHMID

#include <iostream>
using namespace std;


int main()
{
	int value;       // value is some positive number n
 	int total = 0;   // total holds the sum of the first n positive numbers
   	int number;      // the amount of numbers
	int input1;
  	float mean;      // the average of the first n positive numbers

	cout << "Please enter a positive integer that will initialize the average function" << endl;
	cin >> input1;
  	cout << "Please enter a positive integer that will choose where to end the function" << endl;
   	cin >> value;

  	if (value > 0)
  	{
	      	for (number = input1; number <= value; number++)
       		{
 	  	    total = total + number;
		}
		
	        mean = static_cast<float> (total) /(++value - input1);

		cout << "The mean average is " << mean << endl;
    	}
    	else 
        	cout << "Invalid input - integer must be positive" << endl;

   return 0;	
}

/*

	Exercise 1: The typecast operator is in there to convert the mean to a float if necesarry. When I re-
	moved it, nothing changed even when I used even and odd numbers the code still worked fine.
	Exercise 2: It rounds down to the nearest integer. When you enter 2.99 it averages the first 2 integers.

*/
