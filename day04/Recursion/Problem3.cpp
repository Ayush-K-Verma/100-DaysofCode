/* 
Print n to 1 linearly
*/

#include<bits/stdc++.h> 
using namespace std;

void print_num_linearly(int num)
{
    if(num<=0)
        return;
    
    cout << num << endl;
    print_num_linearly(--num);
}

int main() 
{ 
    int num;
    cout << "Enter the number: ";
    cin >> num;

    print_num_linearly(num);


    return 0; 
}