/*      Second smallest element in array
Similar to Second largest element in array
*/

#include<bits/stdc++.h>
using namespace std;

// // Optimized
int second_smallest(int arr[], int n)
{
    int smallest_element=arr[0], second_smallest_element=arr[0];
    for (int i = 1; i < n; i++)
    {
        if(arr[i]<smallest_element)
        {
            second_smallest_element=smallest_element;
            smallest_element = arr[i];
        }
        else if(arr[i]<second_smallest_element)
        {
            second_smallest_element = arr[i];
        }
    } 
    return second_smallest_element;
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


    cout << endl << "The second largest element is " << second_smallest(arr, size_of_array);
    return 0;
}