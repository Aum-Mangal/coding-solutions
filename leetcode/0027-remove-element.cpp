/*
 * Problem: Remove Element (#27)
 * URL: https://leetcode.com/problems/remove-element/
 * Language: cpp
 * Runtime: 0 ms | Memory: 11.8 MB
 * Submitted: 2025-06-27T06:06:49 (Submission ID: 1677965077)
 */

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                nums[k++]=nums[i];
            }
        }
        return k;
        
    }
};
