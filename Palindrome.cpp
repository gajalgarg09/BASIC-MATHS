// Given an integer n, return true if n is a palindrome, and false otherwise.

#include<iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int n) {

        long long rev = 0;
        long long temp = n;

        if(n < 0)
            return false;

        while (temp != 0) {
            int last = temp % 10;
            rev = (rev * 10) + last;
            temp /= 10;
        }

        if (rev == n) {
            return true;
        }
        return false;
    }
};