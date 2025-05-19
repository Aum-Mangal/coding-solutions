/*
 * Problem: Power of Two (#231)
 * URL: https://leetcode.com/problems/power-of-two/
 * Language: cpp
 * Runtime: 0 ms | Memory: 7.7 MB
 * Submitted: 2025-05-20T05:25:01 (Submission ID: 1638953408)
 */

class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n > 0 && (n & (n - 1)) == 0;
    }
};
