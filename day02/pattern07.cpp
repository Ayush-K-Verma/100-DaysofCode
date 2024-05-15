/*
Print the pattern: n=6
     *     
    ***    
   *****   
  *******  
 ********* 
***********

Observation:
row spaces1  star    spaces2
0       5    1        5
1       4    3        4
2       3    5        3

total = spaces1+star+spaces2 = 5+1+5 = 11 = 2n-1
space1 = n-i-1
space2 = n-i-1
star = (2n-1) - 2*(n-i-1) = 2i+1
*/

#include<iostream>
using namespace std;

void print_pattern7(int n)
{
    for (int i = 0; i < n; i++)
    {
        //Space1
        for (int j = 1; j <= n-i-1; j++)
        {
            cout << " ";
        }
        //Star
        for (int j = 1; j <= 2*i+1; j++)
        {
            cout << "*";
        }
        //Space2
        for (int j = 1; j <= n-i-1; j++)
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

    print_pattern7(n);
    
    
    return 0;
}