/*
 * Problem: Longest Substring Without Repeating Characters (#3)
 * URL: https://leetcode.com/problems/longest-substring-without-repeating-characters/
 * Language: cpp
 * Runtime: 303 ms | Memory: 81.5 MB
 * Submitted: 2026-08-31T15:03:57 (Submission ID: 2126235956)
 */

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> charset;
        int l=0;
        int ans=0;
        int len=s.length();
        for(int i=0;i<len;i++){
            while(charset.find(s[i])!=charset.end()){
                charset.erase(s[l]);
                l++;
            }
            charset.insert(s[i]);
            ans=max(ans,i-l+1);
        }
        return ans;

    }
};
