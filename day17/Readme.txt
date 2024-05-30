1. Program to convert decimal to binary
    Two methods:  i) using %
                ii) using bitwise operator

2. ** Program to convert decimal to binary of NEGATIVE number
    Wrong output
    seems need more concepts.

3. binary to decimal
    Two methods:    i) using %
                    ii) using bitwise operator (failed)

4. Reverse integers
    https://leetcode.com/problems/reverse-integer/description/
CONCEPT: range of int and INT_MIN and INT_MAX
NOTES: Mistake in condtion of range(SEE NOTES)

5. Compliement of number
    https://leetcode.com/problems/complement-of-base-10-integer/description/
Method 1:
Code:           int bitwiseComplement(int n)
                {
                    int bit,ans=0,i=0;
                    if(!n)
                        return 1;
                    
                    while(n)
                    {
                        bit = !(n%2);
                        ans = bit*pow(2,i++) + ans;
                        n /= 2;
                    }
                    return ans;
                }

Method 2:   
Code:       int bitwiseComplement(int n) {
                    int m=n, mask=0;
                    if(!m)
                        return 1;
                    
                    while(m)
                    {
                        mask = mask<<1;
                        mask = mask | 1;
                        m = m>>1;
                    }

                    int ans = (~n)&mask;
                    return ans;
                }

6. Power of 2
    https://leetcode.com/problems/power-of-two/description/

Solved by brute force.

7. Solved basic problems on geeks for geeks.