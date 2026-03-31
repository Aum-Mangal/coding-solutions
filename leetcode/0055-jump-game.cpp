/*
 * Problem: Jump Game (#55)
 * URL: https://leetcode.com/problems/jump-game/
 * Language: cpp
 * Runtime: 0 ms | Memory: 52.3 MB
 * Submitted: 2026-03-31T07:43:47 (Submission ID: 1964615732)
 */

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxx=0;int n=nums.size();
        
        for(int i=0;i<n;i++){
            if(i>maxx){
                return false;
            }
            maxx=max(maxx,i+nums[i]);
            
        }
        return true;
        
    }
};
