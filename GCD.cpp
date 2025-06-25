// Given two positive integers a and b, find GCD of a and b.

class Solution {
  public:
    int gcd(int a, int b) {
       
       while(a > 0 && b>0){
           if(a > b) a = a % b;
           else b = b % a;
       }
       if(a == 0) return b;
       return a;
    }
};
