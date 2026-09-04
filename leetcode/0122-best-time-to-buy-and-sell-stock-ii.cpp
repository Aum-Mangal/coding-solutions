/*
 * Problem: Best Time to Buy and Sell Stock II (#122)
 * URL: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/
 * Language: cpp
 * Runtime: 0 ms | Memory: 20.1 MB
 * Submitted: 2026-09-04T10:07:32 (Submission ID: 2130565225)
 */

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;

        for(int i=1; i<prices.size(); i++){
            if(prices[i] - prices[i-1] >= 1){
                profit += prices[i] - prices[i-1];
            }
        }

        return profit;
    }
};
