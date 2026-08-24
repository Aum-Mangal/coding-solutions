/*
 * Problem: Sort Array By Parity (#941)
 * URL: https://leetcode.com/problems/sort-array-by-parity/
 * Language: cpp
 * Runtime: 0 ms | Memory: 20.6 MB
 * Submitted: 2026-08-24T16:07:02 (Submission ID: 2118652238)
 */

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n= nums.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                ans.push_back(nums[i]);
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]%2!=0){
                ans.push_back(nums[i]);
            }
        }
        return ans;
        
    }
};
