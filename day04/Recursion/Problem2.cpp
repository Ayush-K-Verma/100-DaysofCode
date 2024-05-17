/* 
Print 1 to n linearly
*/

#include<bits/stdc++.h> 
using namespace std;

// //Method 1: using extra variable i
// void print_num_linearly(int i, int num)
// {
//     if(i>num)
//         return;
    
//     cout << i << endl;
//     print_num_linearly(++i, num);
// }

//Method22: withou using extra variable i
void print_num_linearly(int num)
{
    if(num<=0)
        return;
    
    print_num_linearly(num-1);
    cout << num << endl;
}

int main() 
{ 
    int num;
    cout << "Enter the number: ";
    cin >> num;

    print_num_linearly(num);


    return 0; 
}