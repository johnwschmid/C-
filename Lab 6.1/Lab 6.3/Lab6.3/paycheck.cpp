// This program takes two numbers (pay rate & hours)
// and multiplies them to get grosspay
// it then calculates net pay by subtracting 15%

// JOHN SCHMID

#include <iostream>
#include <iomanip>
using namespace std;


//Function prototypes
void printDescription();
void computePaycheck(float, int);

int main()
{
    float payRate;
    int hours;
    
    cout << setprecision(0) << fixed;
    
    cout << "Welcome to the Pay Roll Program" << endl;
    
    printDescription();
    
    cout << "Please input the pay per hour" << endl;
    cin >> payRate;
    
    cout << endl << "Please input the number of hours worked" << endl;
    cin >> hours;
    cout << endl << endl;
    
    computePaycheck(payRate,hours);
    
    cout << "We hoped you enjoyed this program" << endl << endl;
    
    return 0;
}




//   ********************************************************************
//                         printDescription
//
//   task:     This function prints a program description
//   data in:  none
//   data out: none
//
//   ********************************************************************



void printDescription()
{
    cout << "************************************************"  << endl;
    cout << "This program takes two numbers (pay rate & hours)" << endl;
    cout << "and  multiplies them to get gross pay "            << endl;
    cout << "it then calculates net pay by subtracting 15%"     << endl;
    cout << "************************************************"  << endl << endl;
}




//  *********************************************************************
//                        computePaycheck
//
//   task:     This function takes rate and time and multiples them to
//             get gross pay and then finds net pay by subtracting 15%.
//   data in:  pay rate and time in hours worked
//   data out: the gross and net pay
//
//   ********************************************************************




void computePaycheck(float rate, int time)

{
    float gross, net;
    
    gross = rate * time;
    net = gross - (gross * .15);
    
    cout << "The gross pay is $" << gross << endl;
    cout << "The net pay is $" << net << endl << endl;
}

/*
    Exercise 3: They are pass by reference.
    Note: The directions didn't tell me to move the math up to the main function, which is the only way it would have worked to make the other 2 variables pass by value, so instead I placed them within the call function.
*/