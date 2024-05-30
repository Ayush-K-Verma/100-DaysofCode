#include<iostream>
#include<math.h>
using namespace std;

// Method 1
int decimal_to_binary_m1(int n)
{
    int ans=0, rem=0, i=0;
    while (n!=0)
    {
        rem = n%2;
        ans = rem*pow(10,i++) + ans;
        n = n/2;
    }
    
    return ans;
}

// Method 2
int decimal_to_binary_m2(int n)
{
    int ans=0, bit=0, i=0;
    while (n!=0)
    {
        bit = n&1;
        ans = bit*pow(10,i++) + ans;
        n = n>>1;
    }
    
    return ans;
}

int main()
{
    int num;
    cout << "Enter the decimal integer: ";
    cin >> num;

    cout << decimal_to_binary_m2(num);
    return 0;
}