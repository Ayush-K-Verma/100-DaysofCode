/*
Print the pattern:
1 2 3 4 5 6
1 2 3 4 5
1 2 3 4
1 2 3
1 2 
1

Observation:
row 0 - j = n-0  123456
    1 - j = n-1  12345
    2 - j = n-2  1234
    3 - j = n-3  123
*/

#include<iostream>
using namespace std;

void print_pattern6(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n-i; j++)
        {
            cout << j <<" ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;

    print_pattern6(n);
    
    
    return 0;
}