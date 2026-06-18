/*
 * Problem: House Robber (#198)
 * URL: https://leetcode.com/problems/house-robber/
 * Language: cpp
 * Runtime: 0 ms | Memory: 10.6 MB
 * Submitted: 2026-06-18T17:02:24 (Submission ID: 2037834268)
 */

class Solution {
public:
    int rob(vector<int>& nums) {
        int n= nums.size();
        if(n==1) return nums[0];
        
        vector<int> dp(n);
        dp[0]=nums[0];
        dp[1]=max(nums[0], nums[1]);
        for(int i=2;i<n;i++){
            dp[i]=max(dp[i-1],dp[i-2]+nums[i]);
        }
        return dp[n-1];
    }
};
