#include <iostream>
using namespace std;

const int MAXNAME = 10;

int main()

{
    int pos;
    char * name;
    int * one;
    int * two;
    int * three;
    int result;
    
    one = new int;
    two = new int;
    three= new int;
    name = new char(MAXNAME);
    
    
    cout << "Enter your last name with exactly 10 characters." << endl;
    cout << "If your name has < 10 characters, repeat last letter. " << endl
         << "Blanks at the end do not count." << endl;
    
    for ( pos = 0;  pos < MAXNAME;   pos++)
        cin >> *(name + pos);
    
    cout << "Hi ";
    for ( pos = 0;  pos < MAXNAME;  pos++)
        cout << *(name + pos);

    
    cout << endl << "Enter three integer numbers separated by blanks" << endl;
    cin >>  *one >> *two >> *three;
    
    //echo print
    cout << "The three numbers are " << endl;
    cout << *one << " " << *two << " " << *three << endl;
    
    // Fill in code to calculate the sum of the three numbers
    result = *one + *two + *three;
    cout << "The sum of the three values is " << result << endl;
    
    // Fill in code to deallocate one, two, three and name
    delete one;
    delete two;
    delete three;
    delete [] name;
    
    return 0;
}

/*
        Exercise 2: Yes using name[pos] for the input and output would have worked fine 
                    because they are equivilent to the method I used.

*/

