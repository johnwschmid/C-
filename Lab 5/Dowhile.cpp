// This program displays a hot beverage menu and prompts the user to
// make a selection. A switch statement determines which item the user
// has chosen. A do-while loop repeats until the user selects item E
// from the menu.

// JOHN SCHMID

#include <iostream>
#include <iomanip>
using namespace std;



int main()
{
	int number;
	float cost;
	char beverage;
	bool validBeverage;

	cout << fixed << showpoint << setprecision(2);

	do
	{
		cout << endl << endl;
		cout << "Hot Beverage Menu" << endl << endl;
		cout << "A: Coffee         $1.00" << endl;
		cout << "B: Tea            $ .75" << endl;
		cout << "C: Hot Chocolate  $1.25" << endl;
		cout << "D: Cappuccino     $2.50" << endl <<endl << endl;
		
		cout << "Enter the beverage A,B,C, or D you desire" << endl;
		cout << "Enter E to exit the program" << endl << endl;
		cin  >> beverage;
		
		switch(beverage)
		{
		case 'a':
		case 'A':
		case 'b':
		case 'B':
		case 'c':
		case 'C':
		case 'd':
		case 'D':  validBeverage = true;
				   break;
		default:   validBeverage = false;
		}

		if (validBeverage)
		{
			cout << "How many cups would you like?" << endl;
			cin  >> number;		
		}

		switch(beverage)
		{
		case 'a':
		case 'A': cost = number * 1.0;
			    cout << "The total cost is $ " << cost << endl;
				break;
		case 'b':
                case 'B': cost = number * 0.75;
                            cout << "The total cost is $ " << cost << endl;
                                break;
		case 'c':
                case 'C': cost = number * 1.25;
                            cout << "The total cost is $ " << cost << endl;
                                break;
		case 'd':
                case 'D': cost = number * 2.50;
                            cout << "The total cost is $ " << cost << endl;
                                break;		
		case 'e':	
		case 'E': cout << "Please come again" << endl;
				break;
		default: cout << "You entered an invalid selection" << endl << "Try again please" << endl;
		}


	} while (beverage != 'E');

	return 0;
}

/*

	Exercise 1: The program worked great - all the prompts were present, the coded arithmetic did its job, and all the 
	input I entered worked except for one - 'E'. Instead of exiting the program it just continues back into
	the while loop, creating one that is infinite. I fixed this by altering the expression in the while statement.
	
	Exercise 2: If you do not enter any of the designated characters, you will get the default invalid data prompt.
	After entering another letter you get the message "You entered an invalid selection//Try again please"

	Exercise 3: There are no differences in the execution of the program. I believe this is due to the fact that the 
	first switch statement automatically forces the variable validBeverage to be true after entering A,B,C or D,
	because that is the expression we coded into it before the first break.

*/
