// John Schmid

#include <iostream>
#include <fstream>
using namespace std;

// This program defines a class called Inventory that has itemnumber (which
// contains the id number of a product) and numofitem (which contains the
// quantity on hand of the corresponding product)as private data members.
// The program will read these values from a file and store them in an
// array of objects (of type Inventory).  It will then print these values
// to the screen.

// Example: Given the following data file:
//     986 8
//     432 24
// This program reads these values into an array of objects and prints the
// following:
//     Item number 986 has 8 items in stock
//     Item number 432 has 24 items in stock

const int NUMOFPROD = 10;   // This holds the number of products a store sells

class Inventory
{
public:
    
    void getId(int item);      // This puts item in the private data member
    // itemnumber of the object that calls it.
    void getAmount(int num);   // This puts num in the private data member
    // numofitem of the object that calls it.
    void display();            // This prints to the screen
    // the value of itemnumber and numofitem of the
    // object that calls it.
    Inventory();
    ~Inventory();
    
private:
    
    int  itemNumber;  		// This is an id number of the product
    int  numOfItem;   		// This is the number of items in stock
    
};


int main()
{
    
    ifstream infile;	      // Input file to read values into array
    infile.open("Inventory.dat");
    
    Inventory products[NUMOFPROD];
    
    // Fill in the code that declares an array of objects of class Inventory
    // called products. The array should be of size NUMOFPROD
    
    int pos;                   // loop counter
    int id;                    // variable holding the id number
    int total;                 // variable holding the total for each id number
    
    for (pos = 0; pos < NUMOFPROD; pos++)
    {
        infile >> id >> total;
        
        products[pos].getId(id);
        products[pos].getAmount(total);
        
    }
    
    for (pos = 0; pos < NUMOFPROD; pos++)
    {
        products[pos].display();
        
    }
    
    infile.close();
    
    return 0;
    
}
Inventory :: Inventory()
{
    
}
Inventory :: ~Inventory()
{
    
}
void Inventory :: getId(int item)
{
    itemNumber = item;
    
}
void Inventory :: getAmount(int num)
{
    numOfItem = num;
}

void Inventory :: display()
{
    cout << "Item number " << itemNumber << " has " << numOfItem << " in stock" << endl;
}