#include<iostream>
#include<math.h>
using namespace std;

int fibo(int n)
{
    int a=0;
    int b=1;
    if(n==1)
        return a;
    if(n==2)
        return b;
    
    for (int i = 3; i <= n; i++)
    {
        int temp = a+b;
        a = b;
        b = temp;
    }
    return b;
}

int main()
{
    int num;
    cout << "Enter the digit: ";
    cin >> num;
    
    cout << "The fibonacci  number is " << fibo(num);
    
    return 0;
}