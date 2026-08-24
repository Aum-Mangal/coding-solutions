/*
 * Problem: Squares of a Sorted Array (#1019)
 * URL: https://leetcode.com/problems/squares-of-a-sorted-array/
 * Language: cpp
 * Runtime: 7 ms | Memory: 30.3 MB
 * Submitted: 2026-08-24T16:38:08 (Submission ID: 2118693918)
 */

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            nums[i]*=nums[i];
        }
        sort(nums.begin(),nums.end());

        return nums;
    }
};
