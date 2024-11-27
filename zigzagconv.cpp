#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std ;
class Solution {
public:
    string convert(string s, int numRows) {
         if (numRows == 1 || numRows >= s.size()) {
        return s; 
    }

    std::vector<std::string> rows(std::min(numRows, int(s.size())));
    int currentRow = 0;
    bool goingDown = false;

    for (char c : s) {
        rows[currentRow] += c;

        if (currentRow == 0 || currentRow == numRows - 1) {
            goingDown = !goingDown;
        }

        currentRow += goingDown ? 1 : -1;
    }

    std::string result;
    for (const std::string& row : rows) {
        result += row;
    }

    return result;
}
        
    
};