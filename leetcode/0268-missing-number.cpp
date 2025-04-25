/*
 * Problem: Missing Number (#268)
 * URL: https://leetcode.com/problems/missing-number/
 * Language: cpp
 * Runtime: 0 ms | Memory: 21.7 MB
 * Submitted: 2025-04-25T06:11:43 (Submission ID: 1617297882)
 */

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        int n=nums.size();
        // for(int i=0;i<n-1;i++){
        //     if(nums[i+1]-nums[i]>1){
        //         return nums[i]+1;
        //     }
        // }
        // if(nums[0]!=0){
        //     return 0;
        // }
        // else{
        //     return nums[n-1]+1;
        // }
        int sum=((n+1)*(n))/2;
        int a=0;
        for(int i=0;i<n;i++){
            a+=nums[i];
        }
        return sum-a;
    }
};
