/*
Print the pattern: n=6
F
E F
D E F
C D E F
B C D E F
A B C D E F

Observation:
row 0 - j =1
    1 - j =1 ,2             
    2 - 1 2 3               


*/

#include<iostream>
using namespace std;

void print_pattern18(int n)
{
    char ch;
    for (int i = 0; i < n; i++)
    {
        ch = 'A' + n - i - 1 ;
        for (int j = 1; j <= i+1; j++)
        {
            cout << ch++ <<" ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;

    print_pattern18(n);
    
    
    return 0;
}