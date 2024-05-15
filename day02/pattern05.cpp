/*
Print the pattern:
* * * * * *
* * * * * 
* * * * 
* * * 
* * 
* 

Observation:
row 0 - j = n-0
    1 - j = n-1
    2 - j = n-2
    3 - j = n-3
*/

#include<iostream>
using namespace std;

void print_pattern5(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n-i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;

    print_pattern5(n);
    
    
    return 0;
}