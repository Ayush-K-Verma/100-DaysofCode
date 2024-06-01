#include<iostream>
#include<math.h>
using namespace std;



int main()
{
    int num, rem_amount;
    cout << "Enter the amount: ";
    cin >> num;
    

    for (int i = 1; i <= 4; i++)
    {
        switch (i)
        {
        case 1:
            cout << "Number of 100 rs notes: " << num/100;
            rem_amount = num%100;
            break;
        
        case 2:
            cout << "\n Number of 50 rs notes: " << rem_amount/50;
            rem_amount = rem_amount%50;
            break;
        
        case 3:
            cout << "\n Number of 20 rs notes: " << rem_amount/20;
            rem_amount = rem_amount%20;
            break;
        
        case 4:
            cout << "\n Number of 10 rs notes: " << rem_amount/10;
            rem_amount = rem_amount%10;
            break;
        }
    }
    
    return 0;
}