/*
Print the pattern:
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5

Observation:
row 1 - j =1
    2 - j =2
    3 - j=3
*/

#include<iostream>
using namespace std;

void print_pattern4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i <<" ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;

    print_pattern4(n);
    
    
    return 0;
}