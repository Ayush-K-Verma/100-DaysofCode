/* 
Reverse of array
*/

#include<bits/stdc++.h> 
#include<iostream>
using namespace std;

#define N 6

// //Method1: use of two pointers l & r
// void reverse_array(int arr[], int l, int r)
// {
    
//     if(l>=r)
//         return;

//     swap(arr[l],arr[r]);
//     reverse_array(arr, l+1, r-1);
// }

// //Method2: use of 1 pointers i. l =i and r = n-i-1
void reverse_array(int arr[], int i)
{
    
    if(i>= N/2)
        return;

    swap(arr[i], arr[N-i-1]);
    reverse_array(arr, i+1);
}

int main() 
{ 
    int arr[N];
    cout << "Enter the array: ";
    
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    
    reverse_array(arr,0);

    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
     


    return 0; 
}