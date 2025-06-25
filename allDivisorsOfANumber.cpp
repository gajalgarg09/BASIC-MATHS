// Given an integer N, print all the divisors of N in the ascending order.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
  public:
    void print_divisors(int n) {
       
    // BRUTE FORCE
    //   for(int i =1; i<=n; i++){
    //       if(n % i == 0){
    //           cout << i << " ";
    //       }
    //   }
       
       // OPTIMISED APPROACH
       vector<int> ans;
       for(int i =1; i*i <= n; i++){
           if(n % i == 0){
               ans.push_back(i);
               if(n / i != i){
                   ans.push_back(n/i);
               }
           }
          
       }
       sort(ans.begin(), ans.end());
       for(auto it : ans){
           cout << it << " ";
       }
    }
};