//  Assgnmnt 7.4
//  John Schmid

#include <iostream>
using namespace std;

const int TOTALYEARS = 100;

int main()
{
    int ageFrequency[TOTALYEARS];
    int currentAge;


cout << "Please input an age from one to 100, put -99 to stop" << endl;
cin  >> currentAge;
    
while (currentAge != -99)
{
    ageFrequency[currentAge - 1] = ageFrequency[currentAge - 1] + 1;
    
    cout << "Please input an age from one to 100, put -99 to stop" << endl;
    cin >> currentAge;
}

    
for (int ageCounter = 0; ageCounter < TOTALYEARS; ageCounter++)
    if (ageFrequency[ageCounter] > 0)
        cout << "The number of people " << ageCounter + 1 << " years old is " << ageFrequency[ageCounter] << endl;

    return 0;
}