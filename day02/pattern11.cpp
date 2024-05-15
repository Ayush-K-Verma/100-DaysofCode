/*
Print the pattern: n=6
1
01
101
0101
10101
010101

Observation:
right angle triangle pattern
*/

#include<iostream>
using namespace std;

void print_pattern11(int n)
{
    int start = 0;
    for (int i = 0; i < n; i++)
    {
        if (i%2==0)
            start=1;
        else
            start=0;
        
        for (int j = 0; j <= i; j++)
        {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;

    print_pattern11(n);
    
    
    return 0;
}