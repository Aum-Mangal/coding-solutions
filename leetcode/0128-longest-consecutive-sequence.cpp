/*
 * Problem: Longest Consecutive Sequence (#128)
 * URL: https://leetcode.com/problems/longest-consecutive-sequence/
 * Language: cpp
 * Runtime: 116 ms | Memory: 91.3 MB
 * Submitted: 2026-03-31T06:05:29 (Submission ID: 1964532433)
 */

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, int> aa;
        int res = 0;

        for (int num : nums) {
            if (!aa[num]) {
                aa[num] = aa[num - 1] + aa[num + 1] + 1;
                aa[num - aa[num - 1]] = aa[num];
                aa[num + aa[num + 1]] = aa[num];
                res = max(res, aa[num]);
            }
        }
        return res;
    }
};
