/*
Print the pattern:
* * * * * *
* * * * * *
* * * * * *
* * * * * *
* * * * * *
* * * * * *
*/

#include<iostream>
using namespace std;

void print_pattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
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

    print_pattern1(n);
    
    
    return 0;
}