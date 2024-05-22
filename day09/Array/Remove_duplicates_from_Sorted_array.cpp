/*
Brute force approach:   use a set and insert all elemnets into it, duplicacy will be removed.   T(n) = O(nlogn)

Better approach:  use two pointers, one will store distinct element from starting and other will find the next distinct elements
*/

#include<bits/stdc++.h>
using namespace std;

void remove_duplicate(int arr[], int n)
{
    int i=0;
    for (int j = 1; j < n; j++)
    {
        if(arr[j]!=arr[i])
        {
            i+=1;
            arr[i] = arr[j];
        }
    }
    cout << endl << "Number of distinct elements: " << i+1 <<endl;
}

void print_Array(int arr[], int size_of_array)
{
    for (int i = 0; i < size_of_array; i++)
    {
        cout << arr[i] << " ";
    }
    
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


    remove_duplicate(arr, size_of_array);
    print_Array(arr, size_of_array);
    return 0;
}