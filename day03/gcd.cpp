/*
Problem Statement: Given two integers N1 and N2, find their greatest common divisor.

The Greatest Common Divisor of any two integers is the largest number that divides both integers.
*/

#include <iostream>
#include <algorithm>

using namespace std;

// //Method 1 - Brute Force

int findGcd(int n1, int n2) {
    // Initialize gcd to 1
    int gcd = 1;

    // Iterate from 1 up to
    // the minimum of n1 and n2
    for(int i = 1; i <= min(n1, n2); i++) {
        // Check if i is a common
        // factor of both n1 and n2
        if(n1 % i == 0 && n2 % i == 0) {
            // Update gcd to the
            // current common factor i
            gcd = i;
        }
    }

    // Return the greatest
    // common divisor (gcd)
    return gcd;
}

/*
Time Complexity: O(min(N1, N2)) where N1 and N2 is the input number. The algorithm iterates from 1 to the minimum of N1 and N2 and each iteration checks whether both the numbers are divisible by the current number (constant time operations).

Space Complexity: O(1)as the space complexity remains constant and independent of the input size. Only a fixed amount of memory is required to store the integer variables.
*/

/*   ======================================================================================================    */

// //Method 2 - Better aprroach


int findGcd(int n1, int n2) {
    // Iterate from the minimum of
    // n1 and n2 down to 1
    // Start from the minimum of n1 and n2
    // because the GCD cannot
    // exceed the smaller number
    
    for(int i = min(n1, n2); i > 0; i--) {
        // Check if i is a common
        // factor of both n1 and n2
        if(n1 % i == 0 && n2 % i == 0) {
            // If i is a common factor,
            // return it as the GCD
            return i;
        }
    }
    // If no common factors are found,
    // return 1 (as 1 is always a
    // divisor of any number)
    return 1;
}


/*
Time Complexity: O(min(N1, N2)) where N1 and N2 is the input number. The algorithm iterates from the minimum of N1 and N2 to 1 and each iteration checks whether both the numbers are divisible by the current number (constant time operations).

Space Complexity: O(1) as the space complexity remains constant and independent of the input size. Only a fixed amount of memory is required to store the integer variables.
*/

/*   ======================================================================================================    */

// //Method 3 - Optimal method

/*
Euclidean Algorithm - To find the GCD of n1 and n2 where n1 > n2:

Repeatedly subtract the smaller number from the larger number until one of them becomes 0.
Once one of them becomes 0, the other number is the GCD of the original numbers.

Eg, n1 = 20, n2 = 15:

gcd(20, 15) = gcd(20-15, 15) = gcd(5, 15)

gcd(5, 15) = gcd(15-5, 5) = gcd(10, 5)

gcd(10, 5) = gcd(10-5, 5) = gcd(5, 5)

gcd(5, 5) = gcd(5-5, 5) = gcd(0, 5)

Hence, return 5 as the gcd.

ex - 2:
gcd(52, 10) = gcd(42, 10) = gcd(32, 10) = gcd(22, 10) = gcd(12, 10) = gcd(2, 10)        //we can also write it as gcd(52%10,10)
gcd(8, 2) = gcd(6, 2) = gcd(6, 2) = gcd(4, 2) = gcd(2, 2) = gcd(0, 2)                   //we can also write it as gcd(8%2,2)

gcd = 2.

*/

int findGcd(int a, int b) {
    // Continue loop as long as both
    // a and b are greater than 0
    while(a > 0 && b > 0) {
        // If a is greater than b,
        // subtract b from a and update a
        if(a > b) {
             // Update a to the remainder
             // of a divided by b
            a = a % b;
        }
        // If b is greater than or equal
        // to a, subtract a from b and update b
        else {
            // Update b to the remainder
            // of b divided by a
            b = b % a; 
        }
    }
    // Check if a becomes 0,
    // if so, return b as the GCD
    if(a == 0) {
        return b;
    }
    // If a is not 0,
    // return a as the GCD
    return a;
}

/*
Time Complexity: O(min(N1, N2)) where N1 and N2 is the input number. The algorithm iterates from the minimum of N1 and N2 to 1 and each iteration checks whether both the numbers are divisible by the current number (constant time operations).

Space Complexity: O(1) as the space complexity remains constant and independent of the input size. Only a fixed amount of memory is required to store the integer variable
*/

/*   ======================================================================================================    */

int main() {
    int n1 = 20, n2 = 15;
    
    // Find the GCD of n1 and n2
    int gcd = findGcd(n1, n2);

    cout << "GCD of " << n1 << " and " << n2 << " is: " << gcd << endl;

    return 0;
}
                                
                            