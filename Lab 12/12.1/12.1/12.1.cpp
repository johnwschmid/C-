// John Schmid

// This program uses hours, pay rate, state tax and fed tax to determine gross
// and net pay.

#include <fstream>
#include <iostream>
#include <iomanip>
#include <stdio.h>

using namespace std;

int main()
{
    ifstream payFile;
    float gross;
    float net;
    float hours;
    float payRate;
    float stateTax;
    float fedTax;
    
    cout << fixed << setprecision(2) << showpoint;
    
    fstream payroll;
    payFile.open("payFile.txt");
    payroll.open("payroll.dat");
    
    while (!payFile.eof())
    {
        char ch;
        payFile.get(ch);
        payroll.put(ch);
    }
    
    if (!payFile)
    {
        cout << "Error opening file. \n";
        cout << "It may not exist where indicated" << endl;
        return 1;
    }
    
    cout << "payRate      Hours    Gross Pay       Net Pay" << endl << endl;
    payFile >> payRate;
    
    while (payFile)
    {
        payFile >> payRate >> stateTax >> fedTax;
        gross = payRate * hours;
        net = gross - (gross * stateTax) - (gross * fedTax);
        cout << payRate << setw(15) << hours << setw(12) << gross
        << setw(12) << net << endl;
        payFile >> gross >> net;
    }
    payFile.close();
    
    return 0;
}