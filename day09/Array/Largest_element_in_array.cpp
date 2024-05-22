/*
Brute force approach:   sort the array and then print arr[n-1]

Better approach:  take a largest_element variable and compare it with all the elements and find the largest.
*/

#include<bits/stdc++.h>
using namespace std;

int largest(int arr[], int n)
    {
        int largest_element=arr[0];
        for(int i=0;i<n;i++)
        {
            if(largest_element<arr[i])
            {
                largest_element = arr[i];
            }
        }
        return largest_element;
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


    cout << endl << "The largest element is " << largest(arr, size_of_array);
    return 0;
}