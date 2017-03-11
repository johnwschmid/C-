//  This program prints "You Pass" if a student's average is 
//  60 or higher and prints "You Fail" otherwise

// JOHN SCHMID

#include <iostream>
using namespace std;

int main()
{

	float average;    // holds the grade average

	cout << "Input your average:" << endl;
	cin >> average;

	if (average > 100)
		cout << "Invalid Data, you liar." << endl;
	
	else if (average >= 90)
		cout << "You received an A, hell yeah biyatch!" << endl;
		
	else if (average >= 80)
		cout << "You received a B." << endl;

	else if (average >= 60)
		cout << "You Pass" << endl;

	else 
		cout << "You Fail" << endl;

    return 0;	
}



/*

	Exercise 1: Nothing happens when I enter 60. 
	-- Problem solved by using >= operators.

	Exercise 3: If I enter -12 it says 'You Fail' as it should.
	-- Because anyone who gets a -12 on a test really sucks.

*/
