/*
 * Problem: Longest Substring Without Repeating Characters (#3)
 * URL: https://leetcode.com/problems/longest-substring-without-repeating-characters/
 * Language: cpp
 * Runtime: 308 ms | Memory: 81.5 MB
 * Submitted: 2026-08-18T15:29:17 (Submission ID: 2111610260)
 */

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // int maxLen = 0;

        // for (int i = 0; i < s.length(); i++) {
        //     bool seen[256] = {false};

        //     for (int j = i; j < s.length(); j++) {
        //         if (seen[s[j]]) {
        //             break;
        //         }

        //         seen[s[j]] = true;
        //         maxLen = max(maxLen, j - i + 1);
        //     }
        // }

        // return maxLen;

        unordered_set<char> charset;
        int l=0;
        int res=0;
        for(int i=0;i<s.length();i++){
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
