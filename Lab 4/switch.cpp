// This program illustrates the use of the Switch statement.

// JOHN 'MUTHAFUCKER' SCHMID - lol

#include <iostream>
using namespace std;


int main()
{
	char grade;

	cout << "What grade did you earn in Programming I ?" << endl;
	cin >> grade;

       switch( grade )

        {
                case 'A':  cout << "YOU PASSED!" << endl;
                        break;
                case 'B':  cout << "YOU PASSED!" << endl;
                        break;
                case 'C':  cout << "YOU PASSED!" << endl;
                        break;
                case 'D':  cout << "YOU PASSED!" << endl;
                        break;
        }

	switch( grade )

	{
		case 'A':  cout << "an A - excellent work !" << endl;
			break;
		case 'B':  cout << "you got a B - good job" << endl;
			break;
		case 'C':  cout << "earning a C is satisfactory" << endl;
			break;
		case 'D':  cout << "while  D is passing, there is a problem" << endl;
			break;
        case 'F':  cout << "you failed - better luck next time" << endl;
			break;
        default:   cout << "You did not enter an A, B, C, D, or F" << endl;

	}

    return 0;	
}

/*

Exercise 1: After removing the breaks, the program executes all the cases and outputs every single
cout statements to the screen instead of just 1.

*/
