/* 
Selection sort - in this we select a min element and place it at its correct position
*/

#include<bits/stdc++.h> 
using namespace std;

void selection_sort(int arr[], int size_of_array)
{
    int min_index=0,temp;
    for (int i = 0; i < size_of_array-1; i++)
    {
        min_index=i;
        for (int j = i; j < size_of_array; j++)
        {
            if(arr[j]<arr[min_index])
            {
                min_index = j;
            }
        }

        //swap
        temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
        
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


    selection_sort(arr,size_of_array);

    cout << "The sorted array is: ";
    print_Array(arr,size_of_array);

    return 0; 
}

/*
Number of comparison = (n-1) + (n-2) + (n-3) + (n-4) + ........ + 3 + 2 + 1 = n(n-1)/2 = O(n^2).
Time complexity: O(N^2)

BEST CASE: already sorted O(N^2)
WORST CASE: already sorted in opposite order O(N^2)

Space Complexity: O(1)

Use case: When array size is small.

STABLILITY: Selection Sort is not a stable sorting algorithm, because it swaps non-adjacent elements. The most pertinent example being: Given [2, 2, 1], the '2' values will not retain their initial order in the output sorted array.

*/