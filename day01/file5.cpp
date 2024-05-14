#include<iostream>
using namespace std;

/*
Take the day number and print the day accordingly
*/

int main()
{
    int day;
    cout << "Enter the day" << endl;
    cin >> day;

    switch (day)
    {
    case 0:
        cout << endl << "Sunday" << endl;
        break;
    
    case 1:
        cout << endl << "Monday" << endl;
        break;
    
    case 2:
        cout << endl << "Tuesday" << endl;
        break;
    
    case 3:
        cout << endl << "Wednesday" << endl;
        break;
    
    case 4:
        cout << endl << "Thursday" << endl;
        break;
    
    case 5:
        cout << endl << "Friday" << endl;
        break;

    case 6:
        cout << endl << "Saturday" << endl;
        break;

    default:
        cout << endl << "Please enter valid number" << endl;
        break;
    }

    return 0;
}