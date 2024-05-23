/*
Move Zeros to end
*/
#include<bits/stdc++.h>
using namespace std;

// //Approach 1 - failed for input - 1 2 0 3 0 4 0 0 5 6   output - 1 2  3  4  0 5 6 0 0 0
// void move_zero(int arr[], int size_of_array)
// {
//     for (int i = 0; i < size_of_array; i++)
//     {
//         if(arr[i]==0)
//         {
//             for (int j = i+1; j < size_of_array; j++)
//             {
//                 arr[j-1] = arr[j];
//             }
//             arr[size_of_array-1]=0;
//             if(arr[i]==0)
//             {
//                 i = i-1;
//             }
//         }
//     }
// }

//OPtimized approach
void move_zero(int arr[], int size_of_array)
{
    int j=-1;
    for (int i = 0; i < size_of_array; i++)
    {
        if(arr[i]==0)
        {
            j=i;
            break;
        }
    }

    //if no zero present
    if(j==-1)  return;

    for (int i = j+1; i < size_of_array; i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i],arr[j]);
            j++;
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

    move_zero(arr, size_of_array);

    cout << "The new array is: ";
    print_Array(arr,size_of_array);
    return 0;
}