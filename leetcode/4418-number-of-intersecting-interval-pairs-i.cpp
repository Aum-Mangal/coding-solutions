/*
 * Problem: Number of Intersecting Interval Pairs I (#4418)
 * URL: https://leetcode.com/problems/number-of-intersecting-interval-pairs-i/
 * Language: cpp
 * Runtime: 0 ms | Memory: 36.1 MB
 * Submitted: 2026-09-20T02:38:32 (Submission ID: 2147146753)
 */

class Solution {
public:
    int countIntersectingIntervals(vector<vector<int>>& i) {
        int n = i.size();
        int ans = 0;
        for (int k = 0; k < n; k++) {
            for (int j = k + 1; j < n; j++) {
                if (!(i[k][1] < i[j][0] || i[j][1] < i[k][0])) {
                    ans++;
                }
            }
        }
        return ans;
    }
};
