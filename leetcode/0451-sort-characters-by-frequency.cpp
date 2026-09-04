/*
 * Problem: Sort Characters By Frequency (#451)
 * URL: https://leetcode.com/problems/sort-characters-by-frequency/
 * Language: cpp
 * Runtime: 71 ms | Memory: 10.9 MB
 * Submitted: 2026-09-04T15:05:39 (Submission ID: 2130826591)
 */

class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;

        for (char c : s) {
            freq[c]++;
        }

        vector<char> chars(s.begin(), s.end());

        sort(chars.begin(), chars.end(), [&](char a, char b) {
            if (freq[a] == freq[b]) {
                return a < b;
            }
            return freq[a] > freq[b];
        });

        return string(chars.begin(), chars.end());
    }
};
