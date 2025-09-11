/*
 * Problem: Largest Odd Number in String (#2032)
 * URL: https://leetcode.com/problems/largest-odd-number-in-string/
 * Language: cpp
 * Runtime: 3 ms | Memory: 17.8 MB
 * Submitted: 2025-09-11T17:22:27 (Submission ID: 1767437267)
 */

class Solution {
public:
    string largestOddNumber(string s) {
        for(int i=s.size()-1;i>=0;i--){
            if((s[i]-'0')%2 !=0){
                return s.substr(0,i+1);
            }
        }
        return "";
    }
};
