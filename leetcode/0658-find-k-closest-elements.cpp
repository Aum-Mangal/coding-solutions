/*
 * Problem: Find K Closest Elements (#658)
 * URL: https://leetcode.com/problems/find-k-closest-elements/
 * Language: cpp
 * Runtime: 0 ms | Memory: 35.8 MB
 * Submitted: 2026-09-01T15:39:05 (Submission ID: 2127398896)
 */

class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int l = 0, r = arr.size() - 1;
        while (r - l >= k) {
            if (abs(x - arr[l]) <= abs(x - arr[r])) {
                r--;
            } else {
                l++;
            }
        }
        return vector<int>(arr.begin() + l, arr.begin() + r + 1);
    }
};
