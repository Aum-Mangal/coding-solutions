/*
 * Problem: Kth Largest Element in an Array (#215)
 * URL: https://leetcode.com/problems/kth-largest-element-in-an-array/
 * Language: cpp
 * Runtime: 15 ms | Memory: 59.2 MB
 * Submitted: 2025-03-06T13:03:54 (Submission ID: 1564879603)
 */

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int size=nums.size();
        sort(nums.begin(),nums.end());
        return nums[size-k];
        
    }
};
