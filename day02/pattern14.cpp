/*
Print the pattern: n=6
A
A B
A B C
A B C D
A B C D E
A B C D E F

Observation:
right angle triangle

*/

#include<iostream>
using namespace std;

void print_pattern14(int n)
{
    for (int i = 0; i < n; i++)
    {
        char start = 'A';
        for (int j = 0; j <= i; j++)
        {
            cout << start++ << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;

    print_pattern14(n);
    
    
    return 0;
}