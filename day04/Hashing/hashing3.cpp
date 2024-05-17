/* 
character hashing - if the string contains both uppercase and lowercase
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
    int hash[256] = {0};
    for (int i = 0; i < size; i++)
    {
        hash[ str[i] ] += 1;
    }
    
    int query_size;
    char query;
    cout << "Enter the size of query: ";
    cin >> query_size;

    while (query_size--)
    {
        cout << "Please enter query: ";
        cin >> query;
        cout << "   " << hash[query] << endl;
    }
    
    return 0; 
}