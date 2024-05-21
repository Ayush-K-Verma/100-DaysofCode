/*
Bubble sort using Recursion
*/

#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n)
{
    //base case
    if(n==1)
        return;
    
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i]>arr[i+1])
        {
            //swap
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }

    bubble_sort(arr, n-1);
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


    bubble_sort(arr,size_of_array);

    cout << "The sorted array is: ";
    print_Array(arr,size_of_array);

    return 0; 
}