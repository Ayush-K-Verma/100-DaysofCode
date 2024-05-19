/*
In Bubble Sort algorithm, 
    traverse from left and compare adjacent elements and the higher one is placed at right side. 
    In this way, the largest element is moved to the rightmost end at first. 
    This process is then continued to find the second largest and place it and so on until the data is sorted.
*/



#include<bits/stdc++.h> 
using namespace std;

void bubble_sort(int arr[],int size_of_array)
{
    for(int i=0; i<size_of_array-1; i++)
    {
        for (int j = 0; j < size_of_array-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        
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


    bubble_sort(arr,size_of_array);

    cout << "The sorted array is: ";
    print_Array(arr,size_of_array);

    return 0; 
}

/*
Number of comparison = (n-1) + (n-2) + (n-3) + (n-4) + ........ + 3 + 2 + 1 = n(n-1)/2 = O(n^2).
Time complexity: O(N^2)

BEST CASE: already sorted O(N^2)
WORST CASE: already sorted in opposite order O(N^2)

Space Complexity: O(1)  -> Inplace Sorting Algo

STABLILITY: It is a stable sorting algorithm, meaning that elements with the same key value maintain their relative order in the sorted output.

*/