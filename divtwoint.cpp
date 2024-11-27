#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std ;
class Solution {
public:
    int divide(int dividend, int divisor) {
  if (divisor == 0) {
            throw std::invalid_argument("Division by zero");
        }

       
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;  // Overflow case, return the maximum int value
        }

       
        bool negative = (dividend < 0) ^ (divisor < 0);

        long long absDividend = std::abs((long long)dividend);
        long long absDivisor = std::abs((long long)divisor);

        long long quotient = 0;

       
        while (absDividend >= absDivisor) {
            long long temp = absDivisor, multiple = 1;
            while (absDividend >= (temp << 1)) {
                temp <<= 1;
                multiple <<= 1;
            }
            absDividend -= temp;
            quotient += multiple;
        }

       
        if (negative) {
            quotient = -quotient;
        }

        
        return (quotient > INT_MAX) ? INT_MAX : (int)quotient;
        
    }
};