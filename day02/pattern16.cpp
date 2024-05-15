/*
Print the pattern: n=6
A 
B B
C C C
D D D D
E E E E E
F F F F F F

Observation:
right angle triangle

*/

#include<bits/stdc++.h>
using namespace std;

void print_pattern16(int n)
{
    char start = 'A';
    for (int i = 0; i < n; start++, i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << start << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;

    print_pattern16(n);
    
    
    return 0;
}