/* 
integer hashing using map
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
    map<int, int> mpp;
    for (int i = 0; i < size; i++)
    {
        mpp[ arr[i] ] += 1;
    }

    // //iterate over map
    // for(auto it : mpp)
    // {
    //     cout << it.first << " - " << it.second << endl;
    // }
    
    int query_size,query;
    cout << "Enter the size of query: ";
    cin >> query_size;

    while (query_size--)
    {
        cout << "Please enter query: ";
        cin >> query;
        cout << "   " << mpp[query] << endl;
    }
    
    return 0; 
}