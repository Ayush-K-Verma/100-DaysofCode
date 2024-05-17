/* 
character hashing - if the string contains only lowercase
*/

#include<bits/stdc++.h> 
using namespace std;


int main() 
{ 
    string str;
    cout << "Enter the string: ";
    cin >> str;
    
    //pre-compute
    int size = str.length();
    int hash[26] = {0};
    for (int i = 0; i < size; i++)
    {
        hash[ str[i] - 'a' ] += 1;
    }
    
    int query_size;
    char query;
    cout << "Enter the size of query: ";
    cin >> query_size;

    while (query_size--)
    {
        cout << "Please enter query: ";
        cin >> query;
        cout << "   " << hash[query - 'a'] << endl;
    }
    
    return 0; 
}