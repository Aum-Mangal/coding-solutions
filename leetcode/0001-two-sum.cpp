/*
 * Problem: Two Sum (#1)
 * URL: https://leetcode.com/problems/two-sum/
 * Language: cpp
 * Runtime: 4 ms | Memory: 15 MB
 * Submitted: 2026-09-20T11:36:08 (Submission ID: 2147629321)
 */

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> a;
        for(int i=0;i<nums.size();i++){
            int x=target-nums[i];
            if(a.count(x)){
                return {a[x],i};
            }
            a[nums[i]]=i;
        }
        
        return{};

    }
};
