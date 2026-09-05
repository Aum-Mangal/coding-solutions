/*
 * Problem: Length of Last Word (#58)
 * URL: https://leetcode.com/problems/length-of-last-word/
 * Language: cpp
 * Runtime: 0 ms | Memory: 8.8 MB
 * Submitted: 2026-09-06T03:19:35 (Submission ID: 2132343390)
 */

class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.length() - 1;
        int len = 0;

        while (i >= 0 && s[i] == ' ') {
            i--;
        }

        while (i >= 0 && s[i] != ' ') {
            len++;
            i--;
        }

        return len;
    }
};
