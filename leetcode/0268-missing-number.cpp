/*
 * Problem: Missing Number (#268)
 * URL: https://leetcode.com/problems/missing-number/
 * Language: cpp
 * Runtime: 7 ms | Memory: 21.7 MB
 * Submitted: 2025-04-25T06:06:48 (Submission ID: 1617293905)
 */

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            if(nums[i+1]-nums[i]>1){
                return nums[i]+1;
            }
        }
        if(nums[0]!=0){
            return 0;
        }
        else{
            return nums[n-1]+1;
        }
    }
};
