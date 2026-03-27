/*
 * Problem: Contains Duplicate (#217)
 * URL: https://leetcode.com/problems/contains-duplicate/
 * Language: cpp
 * Runtime: 63 ms | Memory: 92.9 MB
 * Submitted: 2026-03-28T03:36:56 (Submission ID: 1961388297)
 */

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int i:nums){
            freq[i]++;
        }
        for(auto it : freq){
            if(it.second>1){
                return true;
            }
        }
        return false;
    }
};
