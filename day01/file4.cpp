/*
If marks are less than 25, it prints "Grade: F."
If marks are between 25 and 44 (inclusive), it prints "Grade: E."
If marks are between 45 and 49 (inclusive), it prints "Grade: D."
If marks are between 50 and 59 (inclusive), it prints "Grade: C."
If marks are between 60 and 69 (inclusive), it prints "Grade: B."
If marks are 70 or higher, it prints "Grade: A."
If marks are outside the valid range, it prints "Invalid marks entered."
*/

#include<iostream>
using namespace std;

int main()
{
    int marks;
    cout << "Enter your marks" << endl;
    cin >> marks;

    if (marks<25)
    {
        cout << endl << "Grade: F." << endl;
    }
    else if (marks>=25 && marks<=44)
    {
        cout << endl << "Grade: E." << endl;
    }
    else if (marks>=45 && marks<=49)
    {
        cout << endl << "Grade: D." << endl;
    }
    else if (marks>=50 && marks<=59)
    {
        cout << endl << "Grade: C." << endl;
    }
    else if (marks>=60 && marks<=69)
    {
        cout << endl << "Grade: B." << endl;
    }
    else if (marks>=70 && marks<=100)
    {
        cout << endl << "Grade: A." << endl;
    }
    else
    {
        cout << endl << "Invalid marks entered." << endl;
    }

    return 0;
}