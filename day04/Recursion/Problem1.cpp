/* 
Print name n times
*/

#include<bits/stdc++.h> 
using namespace std;

void print_name(int num, string name)
{
    if(num<=0)
        return;
    
    cout << name << endl;
    print_name(--num, name);
}

int main() 
{ 
    int num;
    string name;
    cout << "Enter the number: ";
    cin >> num;
    
    cout << "Enter your name: ";
    cin >> name;

    print_name(num,name);

    return 0; 
}