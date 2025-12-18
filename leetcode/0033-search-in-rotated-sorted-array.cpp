/*
 * Problem: Search in Rotated Sorted Array (#33)
 * URL: https://leetcode.com/problems/search-in-rotated-sorted-array/
 * Language: cpp
 * Runtime: 0 ms | Memory: 15.1 MB
 * Submitted: 2025-12-18T13:40:16 (Submission ID: 1858952279)
 */

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target)
                return mid;
            if (nums[low] <= nums[mid]) {
                if (nums[low] <= target && target < nums[mid])
                    high = mid - 1;
                else
                    low = mid + 1;
            }
            else {
                if (nums[mid] < target && target <= nums[high])
                    low = mid + 1;
                else
                    high = mid - 1;
            }
        }
        return -1;
    }
};
