/*
 * Problem: Find the Duplicate Number (#287)
 * URL: https://leetcode.com/problems/find-the-duplicate-number/
 * Language: cpp
 * Runtime: 4 ms | Memory: 65.1 MB
 * Submitted: 2026-09-15T08:51:49 (Submission ID: 2142404669)
 */

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for(int i:nums){
            int e=abs(i)-1;
            if(nums[e]<0){
                return abs(i);
            }
            nums[e]*=-1;
        }
        return -1;
    }
};
