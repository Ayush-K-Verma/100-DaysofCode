/*
In Bubble Sort algorithm, if the array is already sorted the element will not swap
*/

#include<bits/stdc++.h> 
using namespace std;

void bubble_sort(int arr[],int size_of_array)
{
    int i;
    for(i=1;i<size_of_array;i++)
    {
        bool swapped = false;
        for (int j = 0; j < size_of_array-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

                swapped = true;
            }
        }

        if(swapped == false)
        {
            break;
        }
    }
    cout << "Number of passes: " << i <<endl;
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
