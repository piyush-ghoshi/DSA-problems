#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std ;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
     int n = nums.size();
        vector<int> ans(n, 1);
        
        // Prefix product
        for (int i = 1; i < n; i++) {
            ans[i] = ans[i-1] * nums[i-1];
        }
        
        // Suffix product
        int suffix = 1;
        for (int i = n-1; i >= 0; i--) {
            ans[i] *= suffix;
            suffix *= nums[i];
        }
        
        return ans;
    }
};