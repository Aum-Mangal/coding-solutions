/*
 * Problem: Search Insert Position (#35)
 * URL: https://leetcode.com/problems/search-insert-position/
 * Language: cpp
 * Runtime: 0 ms | Memory: 13.6 MB
 * Submitted: 2025-04-13T05:15:45 (Submission ID: 1605277015)
 */

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size();

        while (left < right) {
            int mid = (left + right) / 2;

            if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid; 
            }
        }

        return left;
    }
};
