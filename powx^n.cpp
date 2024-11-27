#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std ;
class Solution {
public:
    double myPow(double x, int n) {
         if (n == 0) {
        return 1.0;
    }

   
    long long N = n;

    if (N < 0) {
        x = 1 / x;
        N = -N; 
    }

    double product = 1.0;
    double current_product = x;

    
    while (N > 0) {
        if (N % 2 == 1) { 
            product *= current_product;
        }
        current_product *= current_product; 
        N /= 2; 
    }

    return product;

    }
};