#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std ;class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         unordered_map<char, int> charIndex;
    int maxLength = 0, start = 0;
    for (int end = 0; end < s.length(); end++) {
        if (charIndex.find(s[end]) != charIndex.end() && charIndex[s[end]] >= start) {
            start = charIndex[s[end]] + 1; 
        }
        charIndex[s[end]] = end; 
        maxLength = max(maxLength, end - start + 1);
    }

    return maxLength;
}

   
};