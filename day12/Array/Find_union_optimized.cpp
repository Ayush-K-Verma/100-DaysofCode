/*
Find the Union - brute force
*/


#include<bits/stdc++.h>
using namespace std;

vector<int> find_union(int arr1[], int arr2[], int size_of_arr1, int size_of_arr2)
{
    int i=0,j=0;
    vector<int> un;
    while (i<size_of_arr1 && j<size_of_arr2)
    {
        if(arr1[i]<=arr2[j])
        {
            if(un.size() == 0 || un.back() != arr1[i])
            {
                un.push_back(arr1[i]);
            }
            i++;
        }
        else
        {
            if(un.size() == 0 || un.back() != arr2[j])
            {
                un.push_back(arr2[j]);
            }
            j++;
        }
    }

    //when arr1 is finished
    while(j<size_of_arr2)
    {
        if(un.size() == 0 || un.back() != arr2[j])
        {
            un.push_back(arr2[j]);
        }
        j++;
    }

    //when arr2 is finished
    while(i<size_of_arr1)
    {
        if(un.size() == 0 || un.back() != arr1[i])
        {
            un.push_back(arr1[i]);
        }
        i++;
    }
    
    return un;
}


int main()
{
    int arr1[]={1,1,2,3,4,4,5}, size_of_arr1=7;
    int arr2[]={2,2,3,4,4,5,6,6}, size_of_arr2=8;

    vector<int> un = find_union(arr1, arr2, size_of_arr1, size_of_arr2);
    cout << "The union is: ";
    for (auto & it: un)
    {
        cout << it << " ";
    }

    return 0;
}

/*

*/