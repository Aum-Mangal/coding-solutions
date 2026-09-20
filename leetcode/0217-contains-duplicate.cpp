/*
 * Problem: Contains Duplicate (#217)
 * URL: https://leetcode.com/problems/contains-duplicate/
 * Language: cpp
 * Runtime: 73 ms | Memory: 113.5 MB
 * Submitted: 2026-09-20T11:26:59 (Submission ID: 2147622664)
 */

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> f;
        for(int x:nums){
            f[x]++;
        }
        for(auto i:f){
            if(i.second>1){
                return true;
            }
        }
        return false;


    }
};
