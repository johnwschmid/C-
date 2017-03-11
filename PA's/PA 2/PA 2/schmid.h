#ifndef schmid_h
#define schmid_h

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <cctype>
#include <cstring>

using namespace std;

// Struct Definition

struct book
{
    int ISBN;
    string publisher;
    string title;
    string author;
    double price;
    int quant;
};

// Functions

void displayInventory(book[], int, int);
void readInventory(book[], int&, int);
void addInventory(book[], int&, int);
void deleteInventory(book[], int&, int);
void updateInventory(book[], int, int);
void sortTitle(book[], int, int);
void writeOut(book[], int, int);
void clearScreen();


// FN Display Inventory

void displayInventory(book array[], int size, int max)
{
    cout << "The book array holds the following:" << endl << endl;
    
    for(int pos = 0; pos < size; pos++)
    {
        cout << "Title " << (pos + 1) << ":  " << array[pos].title << endl << endl;
        cout << "   Author: " << setw(45) << left << array[pos].author;
        cout << "Price: $" << setprecision(2) << fixed << showpoint << array[pos].price << endl;
        cout << "   Publisher: " << setw(45) << left << array[pos].publisher;
        cout << "ISBN: " << array[pos].ISBN << endl;
        cout << "   Quantity: " << array[pos].quant << endl;
        cout << " ---------------------------------------------------------------------------------------" << endl;
    }
}

// FN Read Inventory

void readInventory(book array[], int& size, int max)
{
    ifstream fin;
    int pos = 0;
    
    fin.open("inventory.txt");
    
    while(fin)
    {
        fin >> array[pos].ISBN;
        fin.ignore();
        getline(fin, array[pos].title);
        getline(fin, array[pos].author);
        getline(fin, array[pos].publisher);
        fin >> array[pos].price;
        fin >> array[pos].quant;
        pos++;
    }
    
    fin.close();
    size = pos-1;
    clearScreen();
    cout << "The file read " << size << " items into the inventory." << endl << endl;
}

// FN Add Inventory

void addInventory(book array[], int& size, int max)
{
    char redo;
    
    if(size < max)
    {
        cout << "Please enter the following info for the book to be entered into the system:" << endl << endl;
        cout << "\nISBN: ";
        cin >> array[size].ISBN;
        cout << "\nTitle: ";
        cin.ignore();
        getline(cin, array[size].title);
        cout << "\nAuthor: ";
        getline(cin, array[size].author);
        cout << "\nPublisher: ";
        getline(cin, array[size].publisher);
        cout << "\nQuantity: ";
        cin >> array[size].quant;
        cout << "\nPrice: $";
        cin >> array[size].price;
        cout << endl << endl;
        
        cout << "You entered:" << endl << endl;
        cout << "ISBN: " << array[size].ISBN << endl;
        cout << "Title: " << array[size].title << endl;
        cout << "Author: " << array[size].author << endl;
        cout << "Publisher: " << array[size].publisher << endl;
        cout << "Quantity: " << array[size].quant << endl;
        cout << "Price: $" << array[size].price << endl;
        cout << "Is the information what you intended to enter?" << endl;
        cout << "Press Y for yes or N to start over" << endl;
        cin >> redo;
        
        while(toupper(redo == 'N'))
        {
            cout << "\nISBN: ";
            cin >> array[size].ISBN;
            cout << "\nTitle: ";
            cin.ignore();
            getline(cin, array[size].title);
            cout << "\nAuthor: ";
            getline(cin, array[size].author);
            cout << "\nPublisher: ";
            getline(cin, array[size].publisher);
            cout << "\nQuantity: ";
            cin >> array[size].quant;
            cout << "\nPrice: $";
            cin >> array[size].price;
            
            cout << "You entered:" << endl << endl;
            cout << "ISBN: " << array[size].ISBN << endl;
            cout << "Title: " << array[size].title << endl;
            cout << "Author: " << array[size].author << endl;
            cout << "Publisher: " << array[size].publisher << endl;
            cout << "Quantity: " << array[size].quant << endl;
            cout << "Price: $" << array[size].price << endl;
            cout << "Is the information what you intended to enter?" << endl;
            cout << "Press Y for yes or N to start over" << endl;
            cin >> redo;
        }
        
        clearScreen();
        cout << "The title: " << array[size].title << "has been added" << endl << endl;
        size++;
    }
    else
    {
        clearScreen();
        cout << "Inventory is full!" << endl;
    }
}

// Delete FN
void deleteInventory(book array[], int& size, int max)
{
    int nullify = 0;
    int shave = 0;
    string deletedTitle;
    
    displayInventory(array, size, max);
    cout << "Please select a title number to delete" << endl;
    cout << "Title: ";
    cin >> nullify;
    cout << endl << endl << "You entered: " << nullify;
    cout << array[nullify -1].title << endl;
    cout << endl;
    
    shave = (nullify - 1);
    deletedTitle = array[shave].title;
    
    if(shave > -1 && shave < (size -1))
    {
        for(shave; shave < size; shave++)
            array[shave] = array[shave+1];
        size--;
        clearScreen();
        cout << "The title: " << deletedTitle << " has been deleted" << endl << endl;
    }
    else if(shave > -1 && shave == (size -1))
    {
        size--;
        clearScreen();
        cout << "The title: " << deletedTitle << " has been deleted" << endl << endl;
    }
    else
    {
        clearScreen();
        cout << "Invalid input, select another option" << endl;
    }
}

// Update FN
void updateInventory(book array[], int size, int max)
{
    int choice;
    int option;
    int alter;
    char done = 'A';
    
    displayInventory(array, size, max);
    cout << "Please select which title you wish to update:" << endl;
    cout << "Title: ";
    cin >> choice;
    cout << endl << endl << "You entered: " << choice;
    cout << array[choice -1].title << endl;
    cout << endl;
    
    choice --;
    cout << "Title " << (choice + 1) << ":  " << array[choice].title << endl << endl;
    cout << "Author: " << array[choice].author << endl;
    cout << "Price: $" << array[choice].price << endl;
    cout << "Publisher: " << array[choice].publisher << endl;
    cout << "ISBN: " << array[choice].ISBN << endl;
    cout << "Quantity: " << array[choice].quant << endl << endl;
    
    cout << "Please choose an option:" << endl << endl;
    cout << "1: Increment" << endl;
    cout << "2: Decrement" << endl;
    cout << "3: Select quantity" << endl;
    cout << "4: Cancel" << endl;
    cout << "Option: ";
    cin >> option;
    cout << endl;
    
    switch(option)
    {
        case 1:
            array[choice].quant++;
            done = 'Z';
            clearScreen();
            cout << "The title " << array[choice].title << " has been updated to a quantity of ";
            cout << array[choice].quant << endl << endl;
            break;
            
        case 2:
            array[choice].quant--;
            done = 'Z';
            clearScreen();
            cout << "The title \"" << array[choice].title << "\" has been updated to a quantity of ";
            cout << array[choice].quant << endl << endl;
            break;
            
        case 3:
            cout << "Please enter the quantity of books titled: " << array[choice].title << endl;
            cout << "The current number is: " << array[choice].quant << endl;
            
            cout << "New amount: ";
            cin >> alter;
            cout << endl << endl << "You entered: " << alter << endl;
            
            array[choice].quant = alter;
            done = 'Z';
            clearScreen();
            cout << "The title " << array[choice].title << " has been updated to ";
            cout << array[choice].quant << endl << endl;
            break;
            
        case 4:
            done = 'Z';
            clearScreen();
            break;
            
        default:
            cout << "Not a valid option" << endl;
            cout << "Select numbers 1-3 for valid options" << endl;
            cin >> option;
    }
}

// Sort FN
void sortTitle(book array[], int size, int max)
{
    int iterator;
    int moreAlphaIndex;
    book alphaTitle;
    
    for(iterator = 0; iterator < (size - 1); iterator++)
    {
        moreAlphaIndex = iterator;
        alphaTitle = array[iterator];
        
        for(int pos = (iterator + 1); pos < size; pos++)
        {
            if(array[pos].title < alphaTitle.title)
            {
                alphaTitle = array[pos];
                moreAlphaIndex = pos;
            }
        }
        array[moreAlphaIndex] = array[iterator];
        array[iterator] = alphaTitle;
    }
    
    clearScreen();
    displayInventory(array, size, max);
    cout << "Array sorted and displayed above - Now write to file!" << endl << endl;
}

// Write To FN
void writeOut(book array[], int size, int max)
{
    ofstream fout;
    fout.open("inventory.txt");
    
    if(size <= max)
    {
        for(int pos = 0; pos < size; pos++)
        {
            fout << array[pos].ISBN << endl;
            fout << array[pos].title << endl;
            fout << array[pos].author << endl;
            fout << array[pos].publisher << endl;
            fout << array[pos].quant << endl;
            fout << array[pos].price << endl;
        }
        fout.close();
        clearScreen();
        cout << "File written!" << endl;
    }
    else
    {
        fout.close();
        clearScreen();
        cout << "Error: can't write more than 100 items to inventory!" << endl;
    }
}

// Clear Screen FN
void clearScreen()
{
    cout << string(100, '\n');
}

#endif /* schmid_h */
