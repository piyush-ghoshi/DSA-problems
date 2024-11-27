#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std ;
class Solution {
public:
    int trap(vector<int>& height) {
        int n= height.size()-1;
        int ans =0;
        int i=0;
        int lmax=0;
        int rmax =0;
        while (i<n){
            if(height[i]<=height[n]){
                if (height[i]>=lmax){
                    lmax=height[i];
                }
                else {
                    ans +=lmax -height[i];
                }
                i++;
            }
            else {
                if(height[n]>=rmax){
                    rmax=height[n];
                }
                else{
                    ans+= rmax-height[n];
                }
                n--;
                }
        }
         return ans ;
    }
};