/*
 * Problem: Rotate Array (#189)
 * URL: https://leetcode.com/problems/rotate-array/
 * Language: cpp
 * Runtime: 0 ms | Memory: 29.6 MB
 * Submitted: 2025-12-18T14:55:54 (Submission ID: 1859011034)
 */

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;   
        
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};
