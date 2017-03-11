#include <iostream> 
using namespace std;


void callSwap(float,float);

int main()
{
    float first,second;
    
    cout << "Enter the first number" << endl;
    cout << "Then hit enter" << endl;
    cin  >> first;

    cout << "Enter the second number" << endl;
    cout << "Then hit enter" << endl;
    cin  >> second;
    
    cout << "You input the number as " << first << " and " << second << "." << endl;
    
    callSwap(first,second);
    
    return 0;
}

void callSwap(float number1,float number2)
{
    cout << "After swapping, the first number has the value of " << number2 << " which was the value of the second number." << endl;
    cout << "The second number has the value of " << number1 << " which was the value of the first number." << endl;
}

/*
Exercise 3: Passed by Value. But this exercise says "assume that main produces the output" and if they are talking about the swap output, then it would have to be Pass by Reference, because the void function would need to return the data to the main in order for that to happen. This instruction is confusing and unspecific, so I offered both possible answers.    
*/