/*
 * Problem: Monotonic Array (#932)
 * URL: https://leetcode.com/problems/monotonic-array/
 * Language: cpp
 * Runtime: 0 ms | Memory: 100.3 MB
 * Submitted: 2026-08-24T15:54:40 (Submission ID: 2118636627)
 */

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool inc=false;
        int n=nums.size();
        if(n==1) return true;
        for(int i=0;i<n-1;i++){
            if(nums[i] >nums[i+1]){
                inc =false;
                break;
            }
            else{
                inc=true;
            }
        }
        if(inc){
            return true;
        }
        bool dec=false;
        for(int i=1;i<n;i++){
            if(nums[i-1]<nums[i]){
                dec=false;
                break;
            }
            else{
                dec =true;
            }
        }
        if(dec){
            return true;
        }
        return false;
        
    }
};
