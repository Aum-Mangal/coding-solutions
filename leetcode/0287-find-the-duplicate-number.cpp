/*
 * Problem: Find the Duplicate Number (#287)
 * URL: https://leetcode.com/problems/find-the-duplicate-number/
 * Language: cpp
 * Runtime: 0 ms | Memory: 65.1 MB
 * Submitted: 2026-09-15T08:51:56 (Submission ID: 2142404760)
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
