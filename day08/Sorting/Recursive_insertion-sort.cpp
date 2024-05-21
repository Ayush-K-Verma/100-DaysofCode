/*
Insertion sort using Recursion
*/

#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int n, int i)
{
    if(n==i)
        return;
    
    int temp = arr[i];
    int j = i-1;
    for (;j>=0;j--)
    {
        if(arr[j]>temp)
        {
            arr[j+1] = arr[j];
        }
        else
        {
            break;
        }
    }

    arr[j+1] = temp;

    insertion_sort(arr, n, i+1);
    
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


    insertion_sort(arr,size_of_array,0);

    cout << "The sorted array is: ";
    print_Array(arr,size_of_array);

    return 0; 
}

/*
Time Complexity: O(N^2)

Best Case Time Complexity O(N) when array is already sorted.

Space Complexity: O(N)
*/