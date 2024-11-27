#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std ;
class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
          unordered_map<int, int> remainderFreq;

   
    for (int num : arr) {
        int remainder = num % k;
        if (remainder < 0) { // To handle negative remainders
            remainder += k;
        }
        remainderFreq[remainder]++;
    }

  
    for (int num : arr) {
        int remainder = num % k;
        if (remainder < 0) {
            remainder += k;
        }

        if (remainder == 0) {
         
            if (remainderFreq[remainder] % 2 != 0) {
                return false;
            }
        } else {
            
            if (remainderFreq[remainder] != remainderFreq[k - remainder]) {
                return false;
            }
        }
    }

    return true;
}
    
};