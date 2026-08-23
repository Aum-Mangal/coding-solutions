/*
 * Problem: Number of 1 Bits (#191)
 * URL: https://leetcode.com/problems/number-of-1-bits/
 * Language: cpp
 * Runtime: 0 ms | Memory: 8.3 MB
 * Submitted: 2026-08-23T18:14:19 (Submission ID: 2117697161)
 */

class Solution {
public:
    int hammingWeight(int n) {
        int res = 0;
        for (int i = 0; i < 32; i++) {
            if ((1 << i) & n) {
                res++;
            }
        }
        return res;
    }
};
