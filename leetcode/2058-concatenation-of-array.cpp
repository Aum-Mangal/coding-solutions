/*
 * Problem: Concatenation of Array (#2058)
 * URL: https://leetcode.com/problems/concatenation-of-array/
 * Language: cpp
 * Runtime: 0 ms | Memory: 16.7 MB
 * Submitted: 2026-09-08T02:03:58 (Submission ID: 2134516783)
 */

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(2 * n);
        for (int i = 0; i < n; ++i) {
            ans[i] = ans[i + n] = nums[i];
        }
        return ans;
    }
};
