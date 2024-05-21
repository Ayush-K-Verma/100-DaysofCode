/*
Quick Sort

- Pick a pivot and place it in its correct place in the sorted array.
- Shift smaller elements(i.e. Smaller than the pivot) on the left of the pivot and larger ones to the right.

A pivot can be any of the following:
    - The first element of the array
    - The last element of the array
    - Median of array
    - Any Random element of the array

Pseudocode -

Quicksort(arr,low,high)
{
    if(low>high)
        return;
    
    partion_Index = Partion(arr,low,high);
    Quicksort(arr,low,partion_Index);
    Quicksort(arr, partion_Index+1, high);
}

Partion(arr,low,high)
{
    int pivot = arr[low];
    int i = low, j=high; 

    while(i<j)
    {
        while(i<=high && arr[i]<=pivot)
        {
            i++;
        }

        while(j>=high && arr[j]>pivot)
        {
            j--;
        }

        if(i<j)
            swap(a[i], a[j]);
            return j;
    }
}
*/
#include<bits/stdc++.h>
using namespace std;

int Partion(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low, j=high; 

    while(i<j)
    {
        while(i<=high-1 && arr[i]<=pivot)
        {
            i++;
        }

        while(j>=low+1 && arr[j]>pivot)
        {
            j--;
        }

        if(i<j)
        {   
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}

void quick_sort(int arr[], int low, int high)
{
    if(low<high)
    {
    int partion_Index = Partion(arr,low,high);
    quick_sort(arr,low,partion_Index-1);
    quick_sort(arr, partion_Index+1, high);
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


    quick_sort(arr,0,size_of_array-1);

    cout << "The sorted array is: ";
    print_Array(arr,size_of_array);

    return 0; 
}

/*
The split of array depends on the position of pivot element.
Best case: If the pivot element is at center then the array will be divivded into equal halves.
            = O(nlogn)
Worst case: If the pivot element is at the last element of either side then the array will be divided into equal halves.
            = O(n^2)

Space Complexity: O(1) + O(N) auxiliary stack space.
*/