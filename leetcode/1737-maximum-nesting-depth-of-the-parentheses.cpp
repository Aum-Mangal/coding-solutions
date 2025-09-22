/*
 * Problem: Maximum Nesting Depth of the Parentheses (#1737)
 * URL: https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/
 * Language: cpp
 * Runtime: 0 ms | Memory: 8.3 MB
 * Submitted: 2025-09-22T14:50:43 (Submission ID: 1779189344)
 */

class Solution {
public:
    int maxDepth(string s) {
        int depth=0;
        int maxdepth=0;
        for(char c: s){
            if(c=='('){
                depth++;
                maxdepth=max(depth,maxdepth);
            }else if(c==')'){
                depth--;
            }
        }
        return maxdepth;
    }
};
