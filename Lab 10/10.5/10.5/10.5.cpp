#include <iostream>
#include <cctype>
using namespace std;

// John Schmid

int countFunc(char*);

int main()
{
    char input[51];
    
    cout << "Please enter a string no more than 50 characters" << endl;
    cin.getline(input,51);
    
    cout << "You have entered:" << endl;
    cout << input << endl;
    cout << "And you have entered "  << countFunc(input) << " constanants" << endl;
    
    return 0;
}

int countFunc(char *strPtr)
{
    int count = 0;
    
    while(*strPtr != '\0')
    {
        if (isalpha(*strPtr) && tolower(*strPtr) != 'a' && tolower(*strPtr) != 'e' && tolower(*strPtr) != 'i' && tolower(*strPtr) != 'o' && tolower(*strPtr) != 'u')
        {
            count++;
        }
        strPtr++;
    }
    return count;
}