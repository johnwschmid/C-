/* 
John Schmid 
CSCI 1410
11:00 T/Th
PA Prep 1
Status: Successfully Compiled using csegrid.
Last Updated: 2/12/16
*/

#include <iostream>
using namespace std;

int main ()
{

// Variables Declaration
	int origNum,firstNum,secondNum,thirdNum,revNum,magicNum;
	int temp1,temp2;
	char ch;
	string name,course;

// Welcome Screen: 
	cout << "Hello there! Please enter your name and class that you attend" << endl;
	cout << "First your name:" << endl;
	getline(cin,name);
	cout << "Now enter your course:" << endl;
	getline(cin,course);

// Welcome Message:
	cout << name << " welcome to the magic number program. I hope this helps with your " << course << " class" << endl;
	
// While Loop
	while(ch != 'c')
{

// Menu
 	cout << "Please select an operation:" << endl;
 	cout << "a: Display an example" << endl;
 	cout << "b: Try it out yourself" << endl;
	cout << "c: Exit" << endl;
	cin  >> ch;

// Code
//	---- Option A ----
	
 	if ((ch == 'a')||(ch == 'A'))
	{
		cout << "For this example, we will choose a number for you" << endl;
		origNum = 351;
                cout << "The number we chose is " << origNum << endl;

//Seperate Numbers:
        //1st Number
                firstNum = origNum / 100;
        //2nd Number
                temp1 = origNum % 100;
                secondNum = temp1 / 10;
        //3rd Number
                thirdNum = temp1 % 10;
//Reverse Numbers
                revNum = (thirdNum * 100) + (secondNum * 10) + (firstNum);
                cout << "The reversal of the input is " << revNum << endl;
//Subtract Numbers
                temp2 = origNum - revNum;
                cout << "Subtraction of reversal from the original number is " << temp2 << endl;

//Seperate and Reverse Numbers Again, after Resetting Variables
        //Reset Variables
                temp1 = 0;
                revNum = 0;
                firstNum = 0;
                secondNum = 0;
                thirdNum = 0;
        //Seperate Numbers
                firstNum = temp2 / 100;
                temp1 = temp2 % 100;
                secondNum = temp1 / 10;
                thirdNum = temp1 % 10;
        //Reverse Again
                revNum = (thirdNum * 100) + (secondNum * 10) + (firstNum);
                cout << "Reversal of the resulting number is " << revNum << endl;
//Add Numbers
                magicNum = revNum + temp2;
		cout << "Addition of the number to the unreversed form is " << magicNum << endl;
                cout << "The final outcome is: " << magicNum << ", which is our Magic Number" << endl;		
	}

//	---- Option B ----

	if ((ch == 'b')||(ch == 'B'))
	{
		cout << "Enter a number in which the first number is greater than the last." << endl;
		cin  >> origNum;
		cout << "The number you entered is " << origNum << endl;
	
//Seperate Numbers:
	//1st Number
		firstNum = origNum / 100;
	//2nd Number
		temp1 = origNum % 100;
		secondNum = temp1 / 10;
	//3rd Number
		thirdNum = temp1 % 10;
//Reverse Numbers
		revNum = (thirdNum * 100) + (secondNum * 10) + (firstNum);
		cout << "The reversal of the input is " << revNum << endl;
//Subtract Numbers
		temp2 = origNum - revNum;
		cout << "Subtraction of reversal from the original number is " << temp2 << endl;

//Seperate and Reverse Numbers Again, after Resetting Variables
	//Reset Variables
		temp1 = 0;
		revNum = 0;
		firstNum = 0;
		secondNum = 0;
		thirdNum = 0;
	//Seperate Numbers
		firstNum = temp2 / 100;
                temp1 = temp2 % 100;
                secondNum = temp1 / 10;
                thirdNum = temp1 % 10;
	//Reverse Again
		revNum = (thirdNum * 100) + (secondNum * 10) + (firstNum);
		cout << "Reversal of the resulting number is " << revNum << endl;
//Add Numbers
		magicNum = revNum + temp2;
		cout << "Addition of the number to the unreversed form is " << magicNum << endl;
		cout << "The final outcome is: " << magicNum << ", which is our Magic Number" << endl;	
	}
}
}
