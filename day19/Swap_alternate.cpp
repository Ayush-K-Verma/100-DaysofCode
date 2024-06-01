#include<iostream>
#include<math.h>
using namespace std;

void swap_alternate(int arr[], int n)
{
    int start=0, end=1;
    while (end<n)
    {
        swap(arr[start], arr[end]);
        start = end + 1;
        end = start + 1;
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {1,3,2,7,11,8};
    int n = sizeof(arr)/sizeof(int);
    
    swap_alternate(arr, n);
    
    
    return 0;
}