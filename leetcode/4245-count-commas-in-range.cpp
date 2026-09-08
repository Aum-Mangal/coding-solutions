/*
 * Problem: Count Commas in Range (#4245)
 * URL: https://leetcode.com/problems/count-commas-in-range/
 * Language: cpp
 * Runtime: 2 ms | Memory: 8.6 MB
 * Submitted: 2026-09-08T09:34:06 (Submission ID: 2134928078)
 */

class Solution {
public:
    int countCommas(int n) {
        int count = 0;

        for (int i = 1; i <= n; i++) {
            if (i >= 1000) {
                count++;
            }
        }

        return count;
    }
};
