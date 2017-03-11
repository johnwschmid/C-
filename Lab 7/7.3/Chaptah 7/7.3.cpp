// This program will read in prices and store them into a two-dimensional array
// It will print those prices in a table form.

// JOHN SCHMID

#include <iostream>
#include <iomanip>
using namespace std;


const int MAXROWS = 10;
const int MAXCOLS = 10;

typedef float PriceType[MAXROWS][MAXCOLS];    // creates a new data type
                                                // of a 2D array of floats

void   getPrices(PriceType, int&, int&);	  // gets the prices into the array
void   printPrices(PriceType, int, int);      // prints data as a table
float  findHighestPrice(PriceType, int, int);
float  findLowestPrice(PriceType, int, int);


int main()

{
    int rowsUsed;                               // holds the number of rows used
    int colsUsed;                               // holds the number of columns used
    PriceType priceTable;                       // a 2D array holding the prices
    
    getPrices(priceTable, rowsUsed, colsUsed);  // calls getPrices to fill the array
    printPrices(priceTable, rowsUsed, colsUsed);// calls printPrices to display array
    
    cout << endl << "The highest price of the values you entered is " << findHighestPrice(priceTable, rowsUsed, colsUsed) << endl;
    cout << "The lowest price of the values you entered is " << findLowestPrice(priceTable, rowsUsed, colsUsed) << endl << endl;
    
    return 0;
}

//*********************************************************************************
//                           getPrices
//
//  task:     This procedure asks the user to input the number of rows and
//            columns. It then asks the user to input (rows * columns) number
//            of prices where x = rows * columns.  The data is placed in the array.
//  data in:  none
//  data out: an array filled with numbers and the number of rows
//            and columns used.
//
//********************************************************************************

void   getPrices(PriceType table, int& numOfRows, int& numOfCols)
{
    
    cout << "Please input the number of rows from 1 to "<< MAXROWS << endl;
    cin >> numOfRows;
    
    cout << "Please input the number of columns from 1 to "<< MAXCOLS << endl;
    cin >> numOfCols;
    
    
    for (int row = 0;  row < numOfRows;  row++)
    {
        for (int col = 0; col < numOfCols;  col++)
        {
            cout << "Please input the price of an item." << endl;
            cin  >> table[row][col];
        }
    }
    
}

//***************************************************************************
//                           printPrices
//
//  task:     This procedure prints the table of prices
//  data in:  an array of floating point numbers and the number of rows
//			  and columns used.
//  data out: none
//
//****************************************************************************

void   printPrices(PriceType table, int numOfRows, int numOfCols)
{
    
    cout << fixed << showpoint << setprecision(2);
    
    for (int row = 0;  row < numOfRows; row++)
    {
        for (int col = 0;  col < numOfCols; col++)
        {
            cout << setw(15) << table[row][col] << endl;
        }
        
    }
}

float findHighestPrice(PriceType table, int numOfRows, int numOfCols)
{
    float highestPrice;
    highestPrice = table[0][0]; // make first element the highest price

    for (int row = 0; row < numOfRows; row++)
        for (int col = 0; col < numOfCols; col++)
            if ( table[row][col] > highestPrice )
                highestPrice = table[row][col];
    
    return highestPrice;
}

float findLowestPrice(PriceType table, int numOfRows, int numOfCols)
{
    float lowestPrice;
    lowestPrice = table[0][0];
    
    for (int row = 0; row < numOfRows; row++ )
        for (int col = 0; col < numOfCols; col++)
            if ( table [row][col] < lowestPrice)
                lowestPrice = table[row][col];
    
    return lowestPrice;
}


/*
    Exercise 2: The parameters in the function getPrices are passed by reference becuase those items need to be passed back to the main 
                function, so that they can then be used by the printPrices function.
        
    Exercise 5: The data, after implimenting functions to find the highest and lowest values within the array, looks like this:
 
 Please input the number of rows from 1 to 10
 2
 Please input the number of columns from 1 to 10
 3
 Please input the price of an item.
 1.45
 Please input the price of an item.
 2.56
 Please input the price of an item.
 12.98
 Please input the price of an item.
 37.86
 Please input the price of an item.
 102.34
 Please input the price of an item.
 67.89
 
 1.45
 2.56
 12.98
 37.86
 102.34
 67.89
 
 The highest price of the values you entered is 102.34
 The lowest price of the values you entered is 1.45
 
*/