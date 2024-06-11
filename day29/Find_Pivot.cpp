#include<iostream>
#include<math.h>
using namespace std;

int pivot(int arr[], int n)
{
    int s=0,e=n-1;
    int mid = s + (e-s)/2;

    while(s<e)
    {
        if(arr[mid]>=arr[0])
            s=mid+1;
        else
            e=mid;
        
        mid = s + (e-s)/2;
    }

    return arr[s];
}

int main()
{
    int arr[] = {3,8,10,1,2};
    cout << pivot(arr,5);
    
    return 0;
}