// You are given a 3-digit number n, Find whether it is an Armstrong number or not.
// An Armstrong number of three digits is a number such that the sum of the cubes of
// its digits is equal to the number itself. 371 is an Armstrong number since 3^3 + 7^3 + 1^3 = 371. 

#include<iostream>
using namespace std;

class Solution {
  public:
    bool armstrongNumber(int n) {
        int ans = 0;
        int temp = n;
        
        while(n > 0){
            
            int last = n % 10;
            ans += (last*last*last);
            n/= 10;
        }
        
        if(ans == temp){
            return true;
        }
        return false;
        
    }
};