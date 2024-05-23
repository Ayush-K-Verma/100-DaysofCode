/*
Problem Statement: Given an array of N integers, left rotate the array by d place.

Algorithm:
store the starting d elements in another array
shift the elements from d, d position right
copy the rest of the element from another array to the original array.
*/

#include<bits/stdc++.h>
using namespace std;

// Brute force
void left_rotate_d(int arr[], int size_of_array, int d)
{
    d= d%size_of_array;
    int temp[d];
    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }

    for (int i = d; i < size_of_array; i++)
    {
        arr[i-d] = arr[i];
    }

    // int j=0;
    // for (int i = size_of_array-d; i < size_of_array; i++)
    // {
    //     arr[i] = temp[j++];
    // }

    // Better approach
    for (int i = size_of_array-d; i < size_of_array; i++)
    {
        arr[i] = temp[i-(size_of_array-d)];
    }
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
    int size_of_array, d;
    cout << "Enter the size of array: ";
    cin >> size_of_array;

    int arr[size_of_array];
    cout << endl << "Enter the array elements: ";
    for (int i = 0; i < size_of_array; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter d: ";
    cin >> d;

    left_rotate_d(arr, size_of_array, d);

    cout << "The rotated array is: ";
    print_Array(arr,size_of_array);
    return 0;
}

/*
Time Complexity - T(n) = d + n-d = O(n)
Space Complexity - O(d) since no extra space is required
*/