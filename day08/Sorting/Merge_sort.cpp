/*
Merge Sort  -  Divide & Merge

Psuedocode - 

merge_sort(arr,low,high)
{
    if( low >= high)
        return
    mid = (low + high)/2
    merge_sort(arr,low,mid)
    merge_sort(arr,mid+1,high)
    merge(arr,low,mid,high)
}

merge(arr, low, mid, high)
{
    temp[]
    left = low
    right = mid+1

    while(left<mid && right<high)
    {
        if(arr[left]<arr[right])
            {
                temp.add(arr[left])
                left++    
            }
        else
            {
                temp.add(arr[right])
                right++
            }
    }

    while(left<mid)
    {
        temp.add(arr[left])
        left++ 
    }

    while(right<high)
    {
        temp.add(arr[right])
        right++

    }

    for(i = low to high)
    {
        arr[i] = temp[i-low]        // low-low=0   ;  low+1-low=1   ;   low+2-low=2
    }
}
*/

#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;
    int left = low;
    int right = mid+1;

    while (left<=mid && right<=high)
    {
        if(arr[left]<=arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while (left<=mid)
    {
        temp.push_back(arr[left]);
        left++;
    }

    while (right<=high)
    {
        temp.push_back(arr[right]);
        right++;
    }
    
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i-low];
    }
    
    
}

void merge_sort(vector<int> &arr, int low, int high)
{
    //base case
    if( low >= high)
        return;
    
    int mid = (low + high)/2;
    merge_sort(arr,low,mid);
    merge_sort(arr,mid+1,high);
    merge(arr,low,mid,high);
}


void print_Array(vector<int> &arr, int size_of_array)
{
    for (auto ele: arr)
    {
        cout << ele << " ";
    }
    
}

int main() 
{ 
    int size_of_array;
    cout << "Enter the number of element: ";
    cin >> size_of_array;

    vector<int> arr;
    cout << endl << "Enter the elements: ";
    for (int i = 0; i < size_of_array; i++)
    {
        int in;
        cin >> in;
        arr.push_back(in);
    }


    merge_sort(arr,0,size_of_array-1);

    cout << "The sorted array is: ";
    print_Array(arr,size_of_array);

    return 0; 
}

/*
Time Complexity - O(nlogn)

The array is divided into 2 parts at each step.  -> logn (base=2).
In merge, the in worst case there will be n-1 comparisions = O(n). Merge will be there in each step and will take (n/2)-1 , (n/4)-1 etc. comparisons.

Space complexity - O(n) in worst case in merge. We are using a temporary array to store elements in sorted order.
*/