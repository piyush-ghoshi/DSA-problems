#include<iostream>
using namespace std ;
#include<vector> 
class Solution {
public:
    int maxArea(vector<int>& height) {
        int start =0;
        int ans =0;
        int minheight;
        int end = height.size()-1;
        while (start<end ){
            minheight =min(height[start],height[end]);
            ans = max (ans, minheight*(end -start));
            if (height[start]<height[end ]){
                start++;
            }
            else {
                end--;
            }
        }
        return ans ;   
    }
};