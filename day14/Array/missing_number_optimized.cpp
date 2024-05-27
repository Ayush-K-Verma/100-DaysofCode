/*
Missing number - optimized
*/
#include<bits/stdc++.h>
using namespace std;

int missing_number(int array[], int n)
{
        int xor1=0,xor2=0;
        for(int i=0;i<n-1;i++)
        {
            xor2 = xor2^array[i];
            xor1 = xor1^(i+1);
        }
        xor1 = xor1^n;
        return xor1^xor2;
}

int main()
{
    int missing_num;
    int arr[5] = {1,2,4,5};

    missing_num = missing_number(arr, 5);

    cout << missing_num;
    return 0;
}