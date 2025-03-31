/*
 * Problem: Check if Array Is Sorted and Rotated (#1878)
 * URL: https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/
 * Language: cpp
 * Runtime: 0 ms | Memory: 11.3 MB
 * Submitted: 2025-03-31T07:34:35 (Submission ID: 1591785793)
 */

class Solution {
public:
    bool check(vector<int>& nums) {
        int count=0; 
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]>nums[(i+1)%n]){
                count++;
            }
        }
        return count <=1;
              
    }
};
