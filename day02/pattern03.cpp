/*
Print the pattern:
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

Observation:
row 0 - j =1
    1 - j =1 ,2
    2 - 1 2 3
*/

#include<iostream>
using namespace std;

void print_pattern3(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= i+1; j++)
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

    print_pattern3(n);
    
    
    return 0;
}