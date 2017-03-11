// This program illustrates the use of a sentinel in a while loop.
// The user is asked for monthly rainfall totals until a sentinel
// value of -1 is entered. Then the total rainfall is displayed

// JOHN SCHMID

#include <iostream>
using namespace std;

int main()
{

	int month = 1;		// Fill in the code to define and initialize to 1 the variable month
	float total = 0, rain;

	cout << "Enter the total rainfall for month " << month << endl;
	cout << "Enter -1 when you are finished" << endl;

	cin  >> rain;		// Fill in the code to read in the value for rain

	// Fill in the code to start a while loop that iterates 
	// while rain does not equal -1

	while (rain != -1)
	{
	// Fill in the code to update total by adding it to rain
	// Fill in the code to increment month by one

	    total = total + rain;
	    month++;
	
	    cout << "Enter the total rainfall in inches for month " << month << endl;
	    cout << "Enter -1 when you are finished" << endl;
	    cin  >> rain;		// Fill in the code to read in the value for rain
		
	}

	if (month == 1)
		cout << "No data has been entered" << endl;

	else
		cout << "The total rainfall for the " << month-1 
		     << " months is "<< total << " inches." << endl;

	
   return 0;	
}

/*

	Exercise 5: The arithmetic in the program worked perfectly. If you enter -1 first
	it just closes the program immediately. Inputting 0 did not disrupt or cause the
	program to malfunction in anyway.
	Exercise 6: The if statement is to indicate to the user that no data was entered.
	It know's this because if the program is cancelled while the month was equal to 1,
	that means the user did not have an opportunity to enter any data, since that was the
	first question asked.
	
*/
