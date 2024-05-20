/*
Insertion sort
*/

#include<bits/stdc++.h>
using namespace std;

void  insertion_sort(int arr[], int size_of_array)
{
    for (int i = 1; i < size_of_array; i++)
    {
        int temp = arr[i];
        int j = i-1;
        for (; j >=0; j--)
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
    int size_of_array;
    cout << "Enter the size of array: ";
    cin >> size_of_array;

    int arr[size_of_array];
    cout << endl << "Enter the array elements: ";
    for (int i = 0; i < size_of_array; i++)
    {
        cin >> arr[i];
    }


    insertion_sort(arr,size_of_array);

    cout << "The sorted array is: ";
    print_Array(arr,size_of_array);

    return 0; 
}

/*
Number of comparison = 1 + 2 + 3 + ................+ (n-2) + (n-1) = n(n-1)/2 = O(n^2).
Time complexity: O(N^2)

BEST CASE: already sorted = 1 + 1 + 1 + ........ n times = O(N)
WORST CASE: already sorted in opposite order = 1 + 2 + 3 + ................+ (n-2) + (n-1) = n(n-1)/2 = O(n^2).

Space Complexity: O(1)  -> Inplace Sorting Algo

STABLILITY: It is a stable sorting algorithm, meaning that elements with the same key value maintain their relative order in the sorted output.

*/