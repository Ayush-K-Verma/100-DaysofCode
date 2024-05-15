/*
Print the pattern: n=6
1          1
12        21
12       321
1234    4321
12345  54321
123456654321

Observation:
row num1    space   num2
1     1       10      1
2     2       8       2
..
6     6       0       6

i     i       2n-2i   i

*/

#include<iostream>
using namespace std;

void print_pattern12(int n)
{
    for (int i = 1; i <= n; i++)
    {
        //numbers in asc order
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        //spaces
        for (int j = 1; j <= 2*n-2*i; j++)
        {
            cout << " ";
        }
        //numbers in desc order
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;

    print_pattern12(n);
    
    
    return 0;
}