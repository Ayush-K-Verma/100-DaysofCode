#include<iostream>
#include<math.h>
using namespace std;

int high_bits(int n)
{
    int count=0;
    while(n)
    {
        if (n&1)
        {
            count++;
        }
        n = n>>1;
    }
    return count;
}

int main()
{
    int num, rem_amount;
    cout << "Enter the digit: ";
    cin >> num;
    
    cout << "The number of 1s in " << num << " is " << high_bits(num);
    
    return 0;
}