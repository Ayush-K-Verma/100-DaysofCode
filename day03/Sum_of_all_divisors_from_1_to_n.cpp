/*
Given a positive integer N., The task is to find the value of Σi from 1 to N F(i) where function F(i) for the number i is defined as the sum of all divisors of i.

Example 1:

Input:
N = 4
Output:
15
Explanation:
F(1) = 1
F(2) = 1 + 2 = 3
F(3) = 1 + 3 = 4
F(4) = 1 + 2 + 4 = 7
ans = F(1) + F(2) + F(3) + F(4)
    = 1 + 3 + 4 + 7
    = 15

MISTAKE: NOT OPTIMIZED, time exceeded

CONCEPT:
1. Lets take n=36,

1*36
2*18
3*12
4*9
6*6
--------
9*4
12*3
18*2
36*1

The above are the divisors of 36. We can see after square root of 36 all divisors are repeated. So we can traverse till sq root of 36 so that i and n/i will be the divisor.

2. //We can see how much an i is contributing. 
ex - 1 is divisor of all numbers, so its contribution will be n.
     2 will have contribution (n/2)*2;
     and so on.

     contribution of i = (n/i)*i
*/
//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

// //Method 1     TIME EXCEDED
// class Solution
// {
// public:
//     long long sumOfDivisors(int N)
//     {
//         long long sum = 0;
//         for(int i=1;i<=N;i++)
//         {
//             long long sum_i = 0;
//             for(int j=1;j<=i;j++)
//             {
//                 if(i%j==0)
//                 {
//                     sum_i = sum_i + j;
//                 }
//             }
//             sum = sum + sum_i;
//         }
//         return sum;
//     }
// };

// //Method 2   TIME EXCEEDED
// class Solution
// {
// public:
//     long long sumOfDivisors(int N)
//     {
//         long long sum = 0;
//         for(int i=1;i<=N;i++)
//         {
//             for(int j=1;j<=sqrt(i);j++)
//             {
//                 if(i%j==0)
//                 {
//                     sum = sum + j;
//                     //check for the other divisor
//                     if((i/j) != j)
//                     {
//                        sum = sum + i/j; 
//                     }
//                 }
//             }
//         }
//         return sum;
//     }
// };

// //Method 3
class Solution
{
public:
    long long sumOfDivisors(int N)
    {
        long long sum = 0;
        for(int i=1;i<=N;i++)
        {
            //We can see how much an i is contributing
            sum = sum + N/i * i;
        }
        return sum;
    }
};
//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        long long ans  = ob.sumOfDivisors(N);
        cout<<ans<<endl;
    }
    return 0;
}
// } Driver Code Ends