/*
 * Problem: Two Sum (#1)
 * URL: https://leetcode.com/problems/two-sum/
 * Language: cpp
 * Runtime: 35 ms | Memory: 14 MB
 * Submitted: 2025-04-25T07:40:33 (Submission ID: 1617368105)
 */

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j]==target){
                    return {i,j};
                }
                
            }
            
        }
        return {};
        
    }
};
