/*
 * Problem: Largest Odd Number in String (#2032)
 * URL: https://leetcode.com/problems/largest-odd-number-in-string/
 * Language: cpp
 * Runtime: 0 ms | Memory: 17.9 MB
 * Submitted: 2025-09-11T17:23:26 (Submission ID: 1767438566)
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
