/*
 * Problem: Longest Substring Without Repeating Characters (#3)
 * URL: https://leetcode.com/problems/longest-substring-without-repeating-characters/
 * Language: cpp
 * Runtime: 297 ms | Memory: 81.5 MB
 * Submitted: 2026-08-26T18:16:44 (Submission ID: 2121164646)
 */

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> charset;
        int l=0;
        int res=0;
        int n=s.length();
        for(int i=0;i<n;i++){
            while(charset.find(s[i])!=charset.end()){
                charset.erase(s[l]);
                l++;
            }
            charset.insert(s[i]);
            res=max(res,i-l+1);

        }
        return res;
    }
};
