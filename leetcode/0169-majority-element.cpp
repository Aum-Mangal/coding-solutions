/*
 * Problem: Majority Element (#169)
 * URL: https://leetcode.com/problems/majority-element/
 * Language: cpp
 * Runtime: 0 ms | Memory: 28.2 MB
 * Submitted: 2025-12-18T15:00:35 (Submission ID: 1859014751)
 */

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans=0;
        int cnt=0;

        for(auto num:nums){
            if(cnt==0){
                ans=num;
            }
            if(num==ans){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        return ans;
    }
};
