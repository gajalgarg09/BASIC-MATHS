// Given a signed 32-bit integer x, return x with its digits reversed. 
// If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
// Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

#include<iostream>
using namespace std;

class Solution {
public:
    int reverse(int n) {
        
        int rev = 0;

        while(n!=0){
            int lastDigit = n % 10;

            // Check for overflow before multiplying and adding
            if (rev > INT_MAX/10 || (rev == INT_MAX/10 && n > 7)) return 0;
            if (rev < INT_MIN/10 || (rev == INT_MIN/10 && n < -8)) return 0;

            rev = (rev*10) + lastDigit;
            n /= 10;
        }
        return rev;
    }
};