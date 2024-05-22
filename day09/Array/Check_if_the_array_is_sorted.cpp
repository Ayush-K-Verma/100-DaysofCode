/*
Check if array is sorted
*/

#include<bits/stdc++.h>
using namespace std;

bool arraySortedOrNot(int arr[], int n)
{
    for(int i=1; i<n; i++)
    {
        if(arr[i]>=arr[i-1]){ }
        else
            return false;
    }
    return true;
}

int main()
{
    int size_of_array;
    cout << "Enter the size of array: ";
    cin >> size_of_array;

    int arr[size_of_array];
    cout << endl << "Enter the array elements: ";
    for (int i = 0; i < size_of_array; i++)
    {
        cin >> arr[i];
    }

    if(arraySortedOrNot(arr, size_of_array))
        cout << "Array is sorted";
    else
        cout << "Array is not sorted";

    return 0;
}