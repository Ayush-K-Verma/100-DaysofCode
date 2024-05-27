/*
Missing number - brute force
*/
#include<bits/stdc++.h>
using namespace std;

int missing_number(int arr[], int size_of_array)
{
    for (int i = 1; i <= size_of_array; i++)
    {
        int flag=0;
        for (int j = 0; j < size_of_array-1; j++)
        {
            if(i==arr[j])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            return i;  
    }
    return -1;
}

int main()
{
    int missing_num;
    int arr[5] = {1,2,4,5};

    missing_num = missing_number(arr, 5);

    if(missing_num==-1)
        cout << "No number is missing.";
     else
        cout << missing_num;

    return 0;
}