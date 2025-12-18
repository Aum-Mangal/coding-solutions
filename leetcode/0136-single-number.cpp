/*
 * Problem: Single Number (#136)
 * URL: https://leetcode.com/problems/single-number/
 * Language: cpp
 * Runtime: 0 ms | Memory: 20.6 MB
 * Submitted: 2025-12-18T13:45:40 (Submission ID: 1858956333)
 */

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
    for (int x : nums) {
            ans ^= x;
        }
        return ans;
    }
};
