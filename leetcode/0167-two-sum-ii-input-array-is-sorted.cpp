/*
 * Problem: Two Sum II - Input Array Is Sorted (#167)
 * URL: https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
 * Language: cpp
 * Runtime: 0 ms | Memory: 19.6 MB
 * Submitted: 2026-03-28T05:00:26 (Submission ID: 1961431506)
 */

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l=0;
        int r=numbers.size()-1;
        while(l<r){
            int sum=numbers[l]+numbers[r];
            if(sum>target){
                r--;
            }else if(sum<target){
                l++;
            }else{
                return {l+1,r+1};
            }
        }
        return {};

    }
};
