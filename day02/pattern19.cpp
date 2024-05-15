/*
1    ************
2    *****  *****
3    ****    ****
4    ***      ***
5    **        **
6    *          *
7    *          *
8    **        **
9    ***      ***
10   ****    ****
11   *****  *****
12   ************

Observation:
divide into 2 parts: 1 to 6 and 6 to 12
print n-i stars and then 2i space and then n-i stars              


*/

#include<iostream>
using namespace std;

void print_pattern_1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n-i; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= 2*i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= n-i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void print_pattern_2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= i+1; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= 2*n-2*i-2; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i+1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void print_pattern19(int n)
{
    print_pattern_1(n);
    print_pattern_2(n);
}

int main()
{
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;

    print_pattern19(n);
    
    
    return 0;
}