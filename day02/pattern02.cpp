/*
Print the pattern:
* 
* * 
* * *
* * * *
* * * * *

Observation for step2:
row 0 - 1 column
    1 - 2
    2 - 3
    3 - 4
    4 - 5
    
*/

#include<iostream>
using namespace std;

void print_pattern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
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

    print_pattern2(n);
    
    
    return 0;
}