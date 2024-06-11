#include<iostream>
#include<math.h>
using namespace std;

long long int mySqrt(int x) {
    int start=0,end=x;
    long long int mid = start  + (end-start)/2;

    long long  int ans = -1;
    while(start<=end)
    {
        long long int square = mid*mid;

        if(square == x)
            return mid;
        
        if(square<x)
        {
            ans=mid;
            start = mid+1;
        }
        else
            end = mid-1;
        
        mid = start  + (end-start)/2;
    }
    return ans;
}

double morePrecision(int n, int precision, int temp)
{
    double factor = 1;
    double ans = temp;

    for (int i = 0; i < precision; i++)
    {
        factor /= 10;

        for (double j = ans; j*j < n; j=j+factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int n = 37;
    int temp = mySqrt(37);
    cout << morePrecision(n, 3, temp);
    
    return 0;
}