/*
Print the pattern: n=6
1
2  3
4  5  6
7  8  9  10
11  12  13  14  15
16  17  18  19  20  21

Observation:
right angle triangle

*/

#include<iostream>
using namespace std;

void print_pattern13(int n)
{
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << count++ << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;

    print_pattern13(n);
    
    
    return 0;
}