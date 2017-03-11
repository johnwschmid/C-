// This program illustrates the use of logical operators

// JOHN SCHMID

#include <iostream>
using namespace std;


int main()
{
	char year;
    	float gpa;

    	cout << "What year student are you ?" << endl;
    	cout << "Enter 1 (freshman), 2 (sophomore), 3 (junior), or 4 (senior)" 
		 << endl << endl;
	cin >> year;

    	cout << "Now enter your GPA" << endl;
    	cin >> gpa;


    	if (gpa >= 2.0 && year == '4')
		cout << "It is time to graduate soon" << endl;
           
    	else
        	cout << "You need more schooling" << endl;


    return 0;

}

/*

	Exercise 1: I typed a boolean expressions in order to make the NOT op work -- !(gpa < 2.0)

	Exercise 2: It will compile the program but not work effectively.

	Exercise 3: This new addition to the code allows anyone who is a senior or has a gpa above
	2.0 to graduate. And it will only tell someone they need more schooling if they are a
	junior or lower and they have a gpa of 1.9 or less. It handles all combinations of year 
	and gpa, but the results are incorrect.

	Exercise 4: Yes it worked perfectly.			

*/
