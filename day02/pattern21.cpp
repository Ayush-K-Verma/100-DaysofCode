/*
******
*    *
*    *
*    *
*    *
******

Observation:
divide into 2 parts: 1 to 6 and 6 to 12
print n-i stars and then 2i space and then n-i stars              


*/

#include<iostream>
using namespace std;


void print_pattern21(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (i==1 || i==n)
        {
            for (int j = 1; j <= n; j++)
            {
                cout << "*";
            }  
        }
        else
        {
            cout << "*";
            for (int j = 1; j <= n-2; j++)
            {
                cout << " ";
            }  
            cout << "*";
            
        }
        cout << endl;
        
    }
    
}

int main()
{
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;

    print_pattern21(n);
    
    
    return 0;
}