/*
 * Problem: Sum of Two Integers (#371)
 * URL: https://leetcode.com/problems/sum-of-two-integers/
 * Language: cpp
 * Runtime: 0 ms | Memory: 7.6 MB
 * Submitted: 2026-09-01T15:55:20 (Submission ID: 2127418706)
 */

class Solution {
public:
    int getSum(int a, int b) {
        while(b != 0) {
            int curr = a & b;
            a = a ^ b;
            b = curr << 1;
        }
        return a;
    }
};
