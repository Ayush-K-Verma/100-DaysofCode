/* 
integer hashing
*/

#include<bits/stdc++.h> 
using namespace std;


int main() 
{ 
    int size;
    cout << "Enter the size of array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the array element: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    
    //pre-compute
    int max_ele = *max_element(arr, arr + size);
    int hash[max_ele+1] = {0};
    for (int i = 0; i < size; i++)
    {
        hash[ arr[i] ] += 1;
    }
    
    int query_size,query;
    cout << "Enter the size of query: ";
    cin >> query_size;

    while (query_size--)
    {
        cout << "Please enter query: ";
        cin >> query;
        cout << "   " << hash[query] << endl;
    }
    
    return 0; 
}