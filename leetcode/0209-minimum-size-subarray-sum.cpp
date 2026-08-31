/*
 * Problem: Minimum Size Subarray Sum (#209)
 * URL: https://leetcode.com/problems/minimum-size-subarray-sum/
 * Language: cpp
 * Runtime: 0 ms | Memory: 42.1 MB
 * Submitted: 2026-09-01T04:10:53 (Submission ID: 2126766495)
 */

class Solution {
public:
    int minSubArrayLen(int k, vector<int>& nums) {
        int size=INT_MAX;
        int sum=0;
        int l=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            while(sum>=k){
                size=min(size,i-l+1);
                sum-=nums[l];
                l++;
            }

        }
        if(size==INT_MAX) return 0;
        return size;

    }
};
