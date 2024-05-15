/*
Print the pattern: n=6
1        A     
2       ABA    
3      ABCBA   
4     ABCDCBA  
5    ABCDEDCBA 
6   ABCDEFEDCBA

Observation:
pattern 7

*/

#include<bits/stdc++.h>
using namespace std;

void print_pattern17(int n)
{
    for (int i = 0; i < n; i++)
    {
        //Space1
        for (int j = 1; j <= n-i-1; j++)
        {
            cout << " ";
        }
        //alphabet
        char start = 'A';
        for (int j = 0; j < 2*i+1; j++)
        {
            if(j<i)
                cout << start++;
            if(j>=i)
                cout << start--;
            
        }
        //Space2
        for (int j = 1; j <= n-i-1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;

    print_pattern17(n);
    
    
    return 0;
}