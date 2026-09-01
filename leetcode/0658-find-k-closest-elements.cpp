/*
 * Problem: Find K Closest Elements (#658)
 * URL: https://leetcode.com/problems/find-k-closest-elements/
 * Language: cpp
 * Runtime: 0 ms | Memory: 35.8 MB
 * Submitted: 2026-09-01T15:37:54 (Submission ID: 2127397445)
 */

class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int l = 0, r = arr.size() - k;
        while (l < r) {
            int m = (l + r) / 2;
            if (x - arr[m] > arr[m + k] - x) {
                l = m + 1;
            } else {
                r = m;
            }
        }
        return vector<int>(arr.begin() + l, arr.begin() + l + k);
    }
};
