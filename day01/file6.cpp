#include<bits/stdc++.h>
using namespace std;
// Functions are set of code which performs something for you
// Functions are used to modularise code
// Functions are used to increase readability
// Functions are used to use same code multiple times
// void -> which does not returns anything
// return
// parameterised
// non parameterised

// pass by value
int maxx(int num1, int num2)
{
if (num1 >= num2) return num1;
else return num2;
}

int main()
{
int num1, num2;
cin >> num1 >> num2;
int minimum = maxx(num1, num2);
cout << minimum;

return 0;


}