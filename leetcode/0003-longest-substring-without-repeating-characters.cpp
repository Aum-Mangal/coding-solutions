/*
 * Problem: Longest Substring Without Repeating Characters (#3)
 * URL: https://leetcode.com/problems/longest-substring-without-repeating-characters/
 * Language: cpp
 * Runtime: 115 ms | Memory: 18.3 MB
 * Submitted: 2026-08-18T15:19:34 (Submission ID: 2111597817)
 */

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLen = 0;

        for (int i = 0; i < s.length(); i++) {
            bool seen[256] = {false};

            for (int j = i; j < s.length(); j++) {
                if (seen[s[j]]) {
                    break;
                }

                seen[s[j]] = true;
                maxLen = max(maxLen, j - i + 1);
            }
        }

        return maxLen;
    }
};
