/*
Move Zeros to end
*/
#include<bits/stdc++.h>
using namespace std;

int linear_search(int arr[], int size_of_array, int key)
{
    for (int i = 0; i < size_of_array; i++)
    {
        if(arr[i]==key)
            return i;
    }
    return -1;
    
}

int main()
{
    int size_of_array, key, index;
    cout << "Enter the size of array: ";
    cin >> size_of_array;

    int arr[size_of_array];
    cout << endl << "Enter the array elements: ";
    for (int i = 0; i < size_of_array; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the Key: ";
    cin >> key;

    index = linear_search(arr, size_of_array, key);

    if(index==-1)
        cout << "The  element is not present.";
    else
        cout << "The  element is at index: " << index;
    return 0;
}