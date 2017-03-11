#include <iostream>
using namespace std;

// JOHNATHON VON SCHMIDDLHEIMER

void callKilos(float, float&);
void callMiles(float, float&);

int main()
{
    float selection, miles, kilos, conversion, converzion;
    
    while (selection != 3)
    {
        cout << "Please enter" << endl;
        cout << "  1 Convert miles to kilometers" << endl;
        cout << "  2 Convert kilometers to miles" << endl;
        cout << "  3 Quit" << endl << endl;
        cin  >> selection;
        
            if (selection == 1)
            {
                cout << "Please input the miles to be converted" << endl;
                cin  >> miles;
                
                callMiles(miles, conversion);
                cout << miles << " miles = " << conversion << " kilomters" << endl << endl;
            }

         1   if (selection == 2)
            {
                cout << "Please input the kilometers to be converted" << endl;
                cin  >> kilos;
                
                callKilos(kilos, converzion);
                cout << kilos << " kilometers = " << converzion << " miles" << endl << endl;
            }
    }
    
return 0;
}

void callMiles(float Ms, float& Ks)
{
    Ks = Ms * 1.61;
}


void callKilos(float Kays, float& Ems)
{
    Ems = Kays * .621;
}
