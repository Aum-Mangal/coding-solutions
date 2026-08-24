/*
 * Problem: N-Repeated Element in Size 2N Array (#1001)
 * URL: https://leetcode.com/problems/n-repeated-element-in-size-2n-array/
 * Language: cpp
 * Runtime: 0 ms | Memory: 28.4 MB
 * Submitted: 2026-08-24T16:30:11 (Submission ID: 2118683001)
 */

class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        //int ans=0;
        for(int i=0;i<nums.size()-2;i++){
            if(nums[i]==nums[i+1] || nums[i]==nums[i+2]){
                return nums[i];
                
            }
        }
        return nums.back();
        
    }
};
