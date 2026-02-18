#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arraySize;    
    cin >> arraySize; 

    int integerArray[arraySize]; // Declared an array of array size
    for (int i = 0; i < arraySize; i++)
    { /
        cin >> integerArray[i];
    }

    int desiredNumber;    // Declared varible to store desired number
    cin >> desiredNumber; // Taken input of desired number

    sort(integerArray, integerArray + arraySize); // Sorting array to ascending order

    int l = 0;             // Initialized left index
    int r = arraySize - 1; // Initialized right Index

    int index = -1; // Initialized index of desired number

    while (l <= r)
    {                     
        int mid = (l + r) / 2; // Calculates mid index

        if (integerArray[mid] == desiredNumber)
        {                
            index = mid; 
            r = mid - 1; // The right index will be the previous index of mid
        }
        else if (integerArray[mid] > desiredNumber)
        {                
            r = mid - 1; // The right index will be the previous index of mid
        }
        else
        {                
            l = mid + 1; // the left index will be the next index of mid
        }
    }

    if (index == -1)
    { 
        cout << "Element Isn't Found\n";
    }
    else
    { 
        cout << "The index of " << desiredNumber << "is " << index << '\n';
    }

    return 0;
}
