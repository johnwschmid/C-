// John Schmid
// CSCI 1410
// PA 2

#include <iostream>
#include <fstream>
using namespace std;

#include "schmid.h"

// Menu
int main()
{
    int option;
    int size = 0;
    const int max = 100;
    book ar[max];
    
    while (option != 7) {
        cout << "Select an option from the menu below, enter 7 to exit." << endl;
        cout << "1: Read Inventory" << endl;
        cout << "2: Add An Entry" << endl;
        cout << "3: Delete An Entry" << endl;
        cout << "4: Update An Entry" << endl;
        cout << "5: Sort Inventory" << endl;
        cout << "6: Write Inventory to File and Exit" << endl;
        cout << "7: To Exit" << endl << endl;
        cin >> option;
    
        switch(option)
        {
            case 1:
                readInventory(ar, size, max);
                break;
            
            case 2:
                addInventory(ar, size, max);
                break;
            
            case 3:
                deleteInventory(ar, size, max);
                break;
            
            case 4:
                updateInventory(ar, size, max);
                break;
            
            case 5:
                sortTitle(ar, size, max);
                break;
            
            case 6:
                writeOut(ar, size, max);
                break;
            
            default:
                cout << "Thank you for playing." << endl;
                return 0;
        }
    }
}