/*
 * Problem: First Missing Positive (#41)
 * URL: https://leetcode.com/problems/first-missing-positive/
 * Language: cpp
 * Runtime: 0 ms | Memory: 54.8 MB
 * Submitted: 2026-08-22T04:43:15 (Submission ID: 2115691808)
 */

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            while (nums[i] >= 1 && nums[i] <= n &&
                   nums[nums[i] - 1] != nums[i]) {
                swap(nums[i], nums[nums[i] - 1]);
            }
        }
        for (int i = 0; i < n + 1; i++) {
            if (i == n) {
                return n + 1;
            }
            if (nums[i] != i + 1) {
                return i + 1;
            }
        }
        return 1;
    }
};
