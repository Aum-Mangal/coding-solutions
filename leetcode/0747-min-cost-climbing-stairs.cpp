/*
 * Problem: Min Cost Climbing Stairs (#747)
 * URL: https://leetcode.com/problems/min-cost-climbing-stairs/
 * Language: cpp
 * Runtime: 3 ms | Memory: 17.8 MB
 * Submitted: 2026-06-19T04:06:52 (Submission ID: 2038195265)
 */

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n= cost.size();
        vector<int> dp(n+2);
        dp[n]=0;
        dp[n-1]=cost[n-1];
        for(int i=n-1;i>=0;i--){
            dp[i]=cost[i]+min(dp[i+1],dp[i+2]);
        }
        return min(dp[0],dp[1]);
    }
};
