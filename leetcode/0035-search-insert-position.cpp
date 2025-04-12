/*
 * Problem: Search Insert Position (#35)
 * URL: https://leetcode.com/problems/search-insert-position/
 * Language: cpp
 * Runtime: 0 ms | Memory: 13.5 MB
 * Submitted: 2025-04-13T05:13:55 (Submission ID: 1605275629)
 */

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        auto it =lower_bound(nums.begin(),nums.end(),target);
        return it-nums.begin();


    }
};
