/*
Check if user is adult or not
*/

#include<iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age" << endl;
    cin >> age;

    if (age>=18)
    {
        cout << endl << "You are an adult" << endl;
    }
    else
    {
        cout << endl << "You are not an adult" << endl;
    }
    
    return 0;
}