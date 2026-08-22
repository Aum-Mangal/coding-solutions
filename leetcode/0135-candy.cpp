/*
 * Problem: Candy (#135)
 * URL: https://leetcode.com/problems/candy/
 * Language: cpp
 * Runtime: 1 ms | Memory: 71.2 MB
 * Submitted: 2026-08-22T06:31:17 (Submission ID: 2115797674)
 */

class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        vector<int> candies(n, 1);
        for (int i = 1; i < n; i++) {
            if (ratings[i] > ratings[i - 1]) {
                candies[i] = candies[i - 1] + 1;
            }
        }
        for(int i = n - 2; i >= 0; i--) {
            if (ratings[i] > ratings[i + 1]) {
                candies[i] = max(candies[i], candies[i + 1] + 1);
            }
        }
        int ans = 0;

        for (int x : candies) {
            ans += x;
        }
        return ans;
        
    }
};
