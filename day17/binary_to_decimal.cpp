#include<iostream>
#include<math.h>
using namespace std;

// Method 1
int binary_to_decimal_m1(int n)
{
    int ans=0, rem=0, i=0;
    while (n!=0)
    {
        rem = n%10;
        ans = rem*pow(2,i++) + ans;
        n = n/10;
    }
    return ans;
}

// // Method 2
// int binary_to_decimal_m2(int n)
// {
//     int ans=0, bit=0;
//     while (n!=0)
//     {
//         ans = ans << 1;
//         cout << __LINE__ << " "<< ans << endl;
//         bit = n&1;
//         cout << __LINE__ << " " << bit << endl;
//         ans = bit | ans;

//         n = n/10;
//         cout << __LINE__ << " " << n << endl;
//     }
//     return ans;
// }

int main()
{
    int num;
    cout << "Enter the binary number: ";
    cin >> num;

    cout << binary_to_decimal_m1(num);
    return 0;
}