#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std ;
class Solution {
public:
    string longestPalindrome(string s) {
         auto expandAroundCenter = [&](int left, int right) {
            while (left >= 0 && right < s.length() && s[left] == s[right]) {
                left--;
                right++;
            }
            return s.substr(left + 1, right - left - 1);
        };

        string longest = "";
        for (int i = 0; i < s.length(); i++) {
            string oddPal = expandAroundCenter(i, i);

            string evenPal = expandAroundCenter(i, i + 1);

            if (oddPal.length() > longest.length()) {
                longest = oddPal;
            }
            if (evenPal.length() > longest.length()) {
                longest = evenPal;
            }
        }

        return longest;
    
        
    }
};