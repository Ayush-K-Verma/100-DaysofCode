/*
https://www.geeksforgeeks.org/problems/count-digits5716/1

Mistake done:  not consider the case when rem==0.

*/
//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int evenlyDivides(int N){
        int count = 0, num = N;
        while(N!=0)
        {
            int rem = N%10;
            if(rem!=0 && num%rem==0)
            {
                count++;
            }
            N /= 10;
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t=1;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends