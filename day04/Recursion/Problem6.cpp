/* 
check for palindrome
*/

#include<bits/stdc++.h> 
#include<iostream>
using namespace std;



bool pallindrome(string str, int i, int n)
{
    if(i>= n/2)
        return true;
    if(str[i] != str[n-i-1])
        return  false;
    return pallindrome(str, i+1, n);
}

int main() 
{ 
    string str;
    cout << "Enter the string: ";
    cin >> str;
    cout << pallindrome(str,0,str.length());

    return 0; 
}