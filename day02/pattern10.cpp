/*
Print the pattern:
1    *
2    **
3    *** 
4    ****
5    *****
6    ******  
7    *****
8    ****
9    ***    
10   **
11   *

Observation:
from 1 to 6, pattern2 
row 7 - j = 5   = 2n-i
    8 - j = 4  
    9 - j = 3  
    10 - j = 2  
*/

#include<iostream>
using namespace std;

void print_pattern10(int n)
{   
    for (int i = 1; i < 2*n; i++)
    {
        if (i<=n)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << "* ";
            }
        }
        if (i>n)
        {
            for (int j = 1; j <= 2*n-i; j++)
            {
                cout << "* ";
            }
        }
        
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;

    print_pattern10(n);
    
    
    return 0;
}