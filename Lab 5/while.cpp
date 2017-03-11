// JOHN SCHMID

#include <iostream>
using namespace std;

int main()
{
	char letter = 'a';

    do
    {
           cout << "Please enter a letter. Enter \'x\' to exit" << endl;
           cin >> letter;
           cout << "The letter you entered is " << letter << endl;
    } while (letter != 'x');

    return 0;	
}

/*

	Exercise 1: Because it does not tell how to exit the program.
	Exercise 3: The program executes the same way because there are no conditional expressions or 
	mathmatics involved, so there is no true/false statements it is just repeating the letter that 
	you type in.	

*/
