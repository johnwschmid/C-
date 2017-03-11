//John Schmid
// 8.4

#include <iostream>
using namespace std;

const int SIZE = 50;

void callArray(int [], int);
void callSort(int [], int);
int callBinary(int [], int, int);
float callMean(int[], int);

int main()
{
    int ar[SIZE];
    int numValues;
    int found, search;
    float mean;
    
    cout << "Input the number of values in the array" << endl;
    cin  >> numValues;
    
    for (int count = 0;count < numValues; count++)
    {
        cout << "Enter value number " << count + 1 << endl;
        cin  >> ar[count];
    }
    
    cout << "You entered the data as " << endl;
    callArray(ar, numValues);
    cout << endl;
    
    callSort(ar, numValues);
    cout << "After sorting the array, the data is " << endl;
    callArray(ar,numValues);
    cout << endl;
    
    cout << "Please enter a value to be searched" << endl;
    cin  >> search;
    
    found = callBinary(ar, numValues, search);
    
    if (found == -1)
        cout << "The value " << search << " is not in the list" << endl;
    else
    {
        cout << "The value " << search << " is in position number "
        << found + 1 << " of the list" << endl;
    }
    
    mean = callMean(ar, numValues);
    cout << "The mean of your data set is " << mean << " and has a size of " << numValues << endl;
    
    return 0;
}

void callArray(int array[], int elems)
{
    for (int count = 0; count < elems; count++)
        cout << array[count] << " -- ";
}

void callSort(int array[], int elems)
{
    bool swap;
    int temp;
    int bottom = elems - 1;
    do
    {
        swap = false;
        for (int count = 0; count < bottom; count++)
        {
            if (array[count] < array[count+1])
            {
                temp = array[count+1];
                array[count+1] = array[count];
                array[count] = temp;
                swap = true;
            }
        }
        bottom--;
        
    } while(swap != false);
}

int callBinary(int array[],int numElems,int value)
{
    int first = 0;
    int last = numElems - 1;
    int middle;
    
    while (first <= last)
    {
        middle = first + (last - first) / 2;
        
        if (array[middle] == value)
            return middle;
        
        else if (array[middle] > value)
            last = middle - 1;
        
        else
            first = middle + 1;
    }
    
    return -1;
}

float callMean(int array[], int elems)
{
    int avg = 0;
    int temp = 0;
    
    for (int pos = 0; pos < elems; pos++)
    {
        avg = array[pos] + temp;
    }

    return avg;
}