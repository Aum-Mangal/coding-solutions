/*
 * Problem: First Unique Character in a String (#387)
 * URL: https://leetcode.com/problems/first-unique-character-in-a-string/
 * Language: cpp
 * Runtime: 13 ms | Memory: 14.8 MB
 * Submitted: 2026-08-24T16:57:45 (Submission ID: 2118721166)
 */

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> a;
        for (int i = 0; i < s.length(); i++) {
            a[s[i]]++;
        }
        for (int i = 0; i < s.length(); i++) {
            if (a[s[i]] == 1) {
                return i;
            }
        }
        return -1;
    }
};
