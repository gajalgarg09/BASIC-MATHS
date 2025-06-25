// Given a number n, determine whether it is a prime number or not.
// Note: A prime number is a number greater than 1 that has no positive divisors other than 1 and itself.

class Solution {
  public:
    bool isPrime(int n) {
        int count = 0;
        
        for(int i =1; i*i <= n; i++){
            if(n % i == 0){
                count++;
                if(n / i != i){
                    count++;
                }
            }
            
        }
        if(count == 2){
            return true;
        }
        return false;

    }
};
