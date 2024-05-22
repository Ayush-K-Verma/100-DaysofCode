/*      Second Largest element in array
Brute force approach:   sort the array and then arr[n-1] will be largest. Now, arr[n-2] may not be the second largest, for example - [1 2 4 6 7 7]
in the worst case - [1 7 7 7 7 7]. 
So we can loop from i=n-2 to 0 and check which one is just smaller than arr[n-1].

Better approach:  take a largest_element variable and compare it with all the elements and find the largest. After that take a variable second_largest_element anf if it is smaller than arr[i ] which is smaller than largest element, then replace second_largest_element with arr[i]

Optimized approach: when the element is smaller than the largest, it can be the largest.
*/

#include<bits/stdc++.h>
using namespace std;

// //Better approach
// int second_largest(int arr[], int n)
// {
//     int largest_element=arr[0],second_largest_element=arr[0];
//     for(int i=0;i<n;i++)
//     {
//         if(largest_element<arr[i])
//             largest_element = arr[i];
//     }
//     for(int i=0;i<n;i++)
//     {
//         if(second_largest_element<arr[i] && arr[i]<largest_element)
//             second_largest_element = arr[i];
//     }
//     return second_largest_element;
// }

// // Optimized
int second_largest(int arr[], int n)
{
    int largest_element=0, second_largest_element=-1;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>largest_element)
        {
            second_largest_element = largest_element;
            largest_element = arr[i];
        }
        else if(arr[i]>second_largest_element)
        {
            second_largest_element = arr[i];
        }
    } 
    return second_largest_element;
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


    cout << endl << "The second largest element is " << second_largest(arr, size_of_array);
    return 0;
}