#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arraySize;    
    cin >> arraySize; // Taken input of array size

    int integerArray[arraySize]; // Declared an array of array size
    for (int i = 0; i < arraySize; i++)
    { 
        cin >> integerArray[i];
    }

    int desiredNumber;    // Declared varible to store desired number
    cin >> desiredNumber; 

    sort(integerArray, integerArray + arraySize); // Sorting array to ascending order

    bool flag = false;

    int l = 0;             // Initialized left index
    int r = arraySize - 1; // Initialized right Index

    while (l <= r)
    {                          
        int mid = (l + r) / 2;

        if (integerArray[mid] == desiredNumber)
        {                // Checks if the value of mid index is equal to desired number
            flag = true;
            break;       
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

    if (flag == true)
    { // If the value of flag is true, the output will be Yes
        cout << "Yes\n";
    }
    else
    { // If the value of flag is false, the output will be No
        cout << "No\n";
    }

    return 0;
}
