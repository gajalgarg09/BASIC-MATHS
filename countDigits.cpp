// Given a natural number n. You have to find the number of digits in it and return it.

#include<iostream>
#include<math.h>
using namespace std;

int countDigits(int n) {
    
//   M-1  
//   int count = 0;
//   while (n>0){
//       n = n/10;
//       count++;
//   }

//   M-2  
    int count = log10(n) + 1;
    return count;
    
}