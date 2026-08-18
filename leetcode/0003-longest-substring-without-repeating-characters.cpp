/*
 * Problem: Longest Substring Without Repeating Characters (#3)
 * URL: https://leetcode.com/problems/longest-substring-without-repeating-characters/
 * Language: cpp
 * Runtime: 8 ms | Memory: 18.3 MB
 * Submitted: 2026-08-18T15:32:27 (Submission ID: 2111614460)
 */

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        bool seen[256] = {};
        int l = 0;
        int res = 0;

        for (int i = 0; i < s.length(); i++) {

            while (seen[s[i]]) {
                seen[s[l]] = false;
                l++;
            }

            seen[s[i]] = true;
            res = max(res, i - l + 1);
        }

        return res;
    }
};
