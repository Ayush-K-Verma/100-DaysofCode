#include<iostream>
#include<math.h>
using namespace std;

int find_unique(int arr[], int n)
{   
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        ans = ans^arr[i];
    }
    return ans;
}

int main()
{
    int arr[] = {1,3,8,1,8};
    int n = sizeof(arr)/sizeof(int);
    
    cout << endl << find_unique(arr, n);

    return 0;
}