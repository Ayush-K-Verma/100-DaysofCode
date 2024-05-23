/*
Problem Statement: Given an array of N integers, left rotate the array by d place.

Algorithm:
reverse the array upto d elements
reverse the array from d upto last elements
Now reverse the entire array.
*/

#include<bits/stdc++.h>
using namespace std;

void print_Array(int arr[], int size_of_array)
{
    for (int i = 0; i < size_of_array; i++)
    {
        cout << arr[i] << " ";
    }   
}


void rotate(int arr[], int start, int end)
{
    // int n = (end-start+1);
    // for (int i = 0; i < n/2; i++)        //#HERE did a mistake that i put the (end-start+1) in place of n in the condition itself, so with each iteration start and end values changes so does the condtion.
    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

// Optimized method
void left_rotate_d(int arr[], int size_of_array, int d)
{
    d = d%size_of_array;
    rotate(arr,0,d-1);                              //O(d)
    rotate(arr,d,size_of_array-1);                  //O(n-d)
    rotate(arr,0,size_of_array-1);                  //O(n)
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
Time Complexity - T(n) = d + n-d + n = O(n)
Space Complexity - O(1) since no extra space is required
*/