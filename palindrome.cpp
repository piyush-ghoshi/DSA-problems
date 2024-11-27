#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std ;
class Solution {
public:
    bool isPalindrome(int x) {
        long long  n=x;
        long long  reverse=0;
        while (x>0){
            long long  digit = x%10;
            reverse = reverse* 10 +digit ;
            x=x/10; 
        }
        if (n==reverse ){
            return 1;
        }
        else {
            return 0;
        }
    }
};