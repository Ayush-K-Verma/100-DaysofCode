/*
Print the pattern: n=6
***********
 *********
  *******
   ***** 
    ***    
     *

Observation:
row spaces1  star    spaces2
0       0    11        0
1       1    9         1
2       2    7         2

total = spaces1+star+spaces2 = 11 = 2n-1
space1 = i
space2 = i
star = 2n-1-2i
*/

#include<iostream>
using namespace std;

void print_pattern8(int n)
{
    for (int i = 0; i < n; i++)
    {
        //Space1
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        //Star
        for (int j = 1; j <= 2*n - 1 - 2*i; j++)
        {
            cout << "*";
        }
        //Space2
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;

    print_pattern8(n);
    
    
    return 0;
}