#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std ;
class Solution {
public:
    int fib(int n) {
         if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

        

};