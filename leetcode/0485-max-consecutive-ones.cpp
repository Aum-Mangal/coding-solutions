/*
 * Problem: Max Consecutive Ones (#485)
 * URL: https://leetcode.com/problems/max-consecutive-ones/
 * Language: cpp
 * Runtime: 0 ms | Memory: 50.2 MB
 * Submitted: 2025-04-25T06:27:38 (Submission ID: 1617310954)
 */

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxii=0;
        int count=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                count++;
            }
            else{
                count=0;
            }
            maxii=max(maxii,count);

        }
        return maxii;
    }
};
