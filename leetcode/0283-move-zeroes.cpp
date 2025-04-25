/*
 * Problem: Move Zeroes (#283)
 * URL: https://leetcode.com/problems/move-zeroes/
 * Language: cpp
 * Runtime: 71 ms | Memory: 23.8 MB
 * Submitted: 2025-04-25T05:34:30 (Submission ID: 1617268691)
 */

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int j=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
            }
        }
        for(int i=0;i<n;i++){
            cout<<nums[i];
        }
    }
};
