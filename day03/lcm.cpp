#include <iostream>
#include <algorithm>

using namespace std;

// // Method 1 - Brute force
int findlcm(int n1, int n2) {
    // Initialize lcm to 1
    int lcm = 1;

    for (int i = max(n1,n2); i < n1*n2; i++)
    {
        if(i%n1==0 && i%n2==0)
        {
            return lcm;
        }
    }
}

//Method 2
    // lcm = A*B/gcd;

    
int main() {
    int n1 = 10, n2 = 5;
    
    // Find the LCM of n1 and n2
    int lcm = findlcm(n1, n2);

    cout << "LCM of " << n1 << " and " << n2 << " is: " << lcm << endl;

    return 0;
}