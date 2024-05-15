/*
Print the pattern: n=6
     *
    ***
   ***** 
  *******
 *********
***********  
***********
 *********
  *******
   ***** 
    ***    
     *

Observation:
merge pattern 7 & 8
*/

#include<iostream>
using namespace std;

void print_pattern9(int n)
{   // iteration 1
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

        if(i==n-1)
        {
            //iteration2
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
    }

}

int main()
{
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;

    print_pattern9(n);
    
    
    return 0;
}