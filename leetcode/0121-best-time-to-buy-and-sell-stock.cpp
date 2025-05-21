/*
 * Problem: Best Time to Buy and Sell Stock (#121)
 * URL: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
 * Language: cpp
 * Runtime: 0 ms | Memory: 97.4 MB
 * Submitted: 2025-05-21T12:34:20 (Submission ID: 1640286548)
 */

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=INT_MAX;
        
        int max=0;
        int n=prices.size();
        for(int i=0;i<n;i++){
            if(prices[i]<min){
                min=prices[i];
            }
            else if(prices[i]-min>max){
                max=prices[i]-min;
            }
        }
        return max;
    }
};
