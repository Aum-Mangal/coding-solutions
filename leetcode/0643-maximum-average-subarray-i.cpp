/*
 * Problem: Maximum Average Subarray I (#643)
 * URL: https://leetcode.com/problems/maximum-average-subarray-i/
 * Language: cpp
 * Runtime: 3 ms | Memory: 113.6 MB
 * Submitted: 2026-09-01T03:08:03 (Submission ID: 2126726593)
 */

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0;

    for(int i = 0; i < k; i++) {
        sum += nums[i];
    }

    int maxSum = sum;

    for(int i = k; i < nums.size(); i++) {
        sum += nums[i];
        sum -= nums[i-k];

        maxSum = max(maxSum, sum);
    }

    return (double)maxSum / k;
    }
};
