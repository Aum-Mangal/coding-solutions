/*
 * Problem: Minimum Cost of Buying Candies With Discount (#2248)
 * URL: https://leetcode.com/problems/minimum-cost-of-buying-candies-with-discount/
 * Language: cpp
 * Runtime: 0 ms | Memory: 14.1 MB
 * Submitted: 2026-06-01T06:20:41 (Submission ID: 2018782429)
 */

class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(), cost.end(), greater<int>());

        int ans = 0;

        for (int i = 0; i < cost.size(); i++) {
            if ((i + 1) % 3 != 0) {  // every 3rd candy is free
                ans += cost[i];
            }
        }

        return ans;
    }
};
