/*
 * Problem: Contains Duplicate (#217)
 * URL: https://leetcode.com/problems/contains-duplicate/
 * Language: cpp
 * Runtime: 86 ms | Memory: 113.4 MB
 * Submitted: 2026-08-27T16:32:44 (Submission ID: 2122117965)
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
