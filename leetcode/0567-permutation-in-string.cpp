/*
 * Problem: Permutation in String (#567)
 * URL: https://leetcode.com/problems/permutation-in-string/
 * Language: cpp
 * Runtime: 2493 ms | Memory: 124.1 MB
 * Submitted: 2026-08-19T06:29:26 (Submission ID: 2112328195)
 */

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        sort(s1.begin(),s1.end());
        for(int i=0;i<s2.length();i++){
            string temp=s2.substr(i,s1.length());
            sort(temp.begin(),temp.end());
            if(temp==s1){
                return true;
            }
        }
        return false;
    }
};
