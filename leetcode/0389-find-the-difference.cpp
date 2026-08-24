/*
 * Problem: Find the Difference (#389)
 * URL: https://leetcode.com/problems/find-the-difference/
 * Language: cpp
 * Runtime: 0 ms | Memory: 9.3 MB
 * Submitted: 2026-08-24T14:39:02 (Submission ID: 2118548674)
 */

class Solution {
public:
    char findTheDifference(string s, string t) {
        int res=0;
        for(char a: s){
            res^=a-'a';
        }
        for(char b: t){
            res^=b-'a';
        }
        return res+'a';
        
    }
};
