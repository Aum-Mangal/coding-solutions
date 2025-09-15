/*
 * Problem: Rotate String (#812)
 * URL: https://leetcode.com/problems/rotate-string/
 * Language: cpp
 * Runtime: 0 ms | Memory: 7.9 MB
 * Submitted: 2025-09-15T17:59:22 (Submission ID: 1771913920)
 */

class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.size() != goal.size()) return false;
        string j= s+s;
        if(j.find(goal) != string::npos){
            return true;
        }
        else{
            return false;
        }
    }
};
