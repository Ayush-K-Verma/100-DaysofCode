#include<bits/stdc++.h>
using namespace std;

// //Method1
// int count(int num)
// {
//     int count = 0;
//     if(num==0)
//         count=1;
    
//     while(num!=0)
//     {
//         num /= 10;
//         count++;
//     }

//     return count;
    
// }

//Method2
int count(int num)
{
    int count = (int)(log10(num) + 1);          //base=10 bcz the number is divisible by 10 multiple times
    return count;
    
}

int main()
{
    int num;
    cout << "Enter the number:";
    cin >> num;
    cout << endl << "The number of digits: " << count(num);
    return 0;


}


// TIME COMPLEXITY:            O(log10(n))