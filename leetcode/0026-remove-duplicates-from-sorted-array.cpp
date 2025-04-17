/*
 * Problem: Remove Duplicates from Sorted Array (#26)
 * URL: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
 * Language: cpp
 * Runtime: 47 ms | Memory: 22.7 MB
 * Submitted: 2025-04-18T05:12:16 (Submission ID: 1610129450)
 */

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int i=1;
        int count =0;
        while(i<nums.size()){
            if(nums[i]==nums[i-1]){
                nums.erase(nums.begin()+i);
            }
            else{
                i++;
            
            }
            
            
        }
        return nums.size();
    }
};
