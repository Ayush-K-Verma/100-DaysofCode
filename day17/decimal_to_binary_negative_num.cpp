#include<iostream>
#include<math.h>
using namespace std;


unsigned  long long int decimal_to_binary_m2(long long int n)
{
    unsigned long long int ans = 0, i=0;
    int bit=0;
    while (n!=0)
    {
        bit = n&1;
        ans = (bit*pow(10,i++)) + ans;
        n = n>>1;
    }
    
    return ans;
}

int main()
{
    long long int num;
    cout << "Enter the decimal negative integer: ";
    cin >> num;
    int bytes = sizeof(int)*8;
    long long int n = pow(2,bytes) + num;
    cout << decimal_to_binary_m2(n);
    return 0;
}