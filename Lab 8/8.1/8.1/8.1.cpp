// This program performs a linear search on a character array

// Place Your Name Here

#include<iostream>
using namespace std;

int searchList( int[], int, int); // function prototype
const int SIZE = 8;

int main()
{
    int nums[SIZE] = {3,6,-19,5,5,0,-2,99};
    int found;
    int number;
    
do {
    cout << "Enter a number to search for:" << endl;
    cout << "Enter -99 if you want to quit" << endl;
    cin >> number;
    
    found = searchList(nums, SIZE, number);
    if (number == -99)
        cout << "Thanks for searching." << endl;
    else if (found == -1)
        cout << "The number " << number << " was not found in the list" << endl;
    else
        cout << "The number " << number << " is in the " << found + 1
             << " position of the list" << endl;
} while(number != -99);
return 0;
}


//*******************************************************************
//                      searchList
//
// task:	      This searches an array for a particular value
// data in:       List of values in an array, the number of
//                elements in the array, and the value searched for
//                in the array
// data returned: Position in the array of the value or -1 if value
//                not found
//
//*******************************************************************

int searchList( int List[], int numElems, int value)
{
    for (int count = 0; count < numElems; count++)
    {
        if (List[count] == value)
            // each array entry is checked to see if it contains the desired value.
            
            return count;
                // if the desired value is found, the array subscript count is returned
                // to indicate the location in the array
    }
    return -1;	     // if the value is not found, -1 is returned
}

/*
    Exercise 1: When I search for 5, it states that "it is in position 4 of the list."
    Exercise 2: A pre test loop is used before the first if statement
*/
 
