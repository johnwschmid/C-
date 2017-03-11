// This program will read in the quantity of a particular item and its price.
// It will then print out the total price.
// The input will come from the keyboard and the output will go to
// the screen.

// JOHN SCHMID

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


int main()

{
	int   quantity;			// contains the amount of items purchased
	float itemPrice;		// contains the price of each item
	float totalBill;		// contains the total bill.  
	string name;

	cout << setprecision(4) << fixed << showpoint;  //formatted output

	cout << "Please input the name of the item" << endl;

	getline(cin,name);

	cout << "Please input the number of items bought" << endl;   
	
	cin >> quantity;
	
	cout << "Please input the price of each item" << endl;

	cin >> itemPrice;

	totalBill = quantity * itemPrice;

	cout << "The item that you bought is " << name << endl;
	cout << "The total bill is $" << totalBill << endl;


	return 0;
}


/*

Exercise 2: With the change, the results are the following.

		 The total bill is $2.4e+02.
		 I think the fixed attribute makes it use a decimal point.

Exercise 3: The results are - The total bill is $241.5600.
		I think the attribute setprecision makes it round to the 4th decimal point

*/
