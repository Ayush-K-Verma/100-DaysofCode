/*
Problem Statement: Given an array of N integers, left rotate the array by one place.
*/

#include<bits/stdc++.h>
using namespace std;

void left_rotate_1(int arr[], int size_of_array)
{
    int temp = arr[0];
    for (int i = 1; i < size_of_array; i++)
    {
        arr[i-1] = arr[i];
    }
    arr[size_of_array-1] = temp;
    
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

    left_rotate_1(arr, size_of_array);

    cout << "The rotated array is: ";
    print_Array(arr,size_of_array);
    return 0;
}