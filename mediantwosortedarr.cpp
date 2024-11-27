#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std ;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.size() > nums2.size()) {
            return findMedianSortedArrays(nums2, nums1);
        }

        int m = nums1.size();
        int n = nums2.size();
        int low = 0, high = m;

        while (low <= high) {
            int partx = (low + high) / 2;
            int party = (m + n + 1) / 2 - partx;

            int maxx = (partx == 0) ? INT_MIN : nums1[partx - 1];
            int maxy = (party == 0) ? INT_MIN : nums2[party - 1];
            int minx = (partx == m) ? INT_MAX : nums1[partx];
            int miny = (party == n) ? INT_MAX : nums2[party];

            if (maxx <= miny && maxy <= minx) {
                if ((m + n) % 2 == 0) {
                    return (double)(max(maxx, maxy) + min(minx, miny)) / 2;
                } else {
                    return (double)max(maxx, maxy);
                }
            } else if (maxx > miny) {
                high = partx - 1;
            } else {
                low = partx + 1;
            }
        }

        throw invalid_argument("Input is not valid.");
    }
};