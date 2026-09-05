/*
 * Problem: Count Good Cyclic Rotations (#4412)
 * URL: https://leetcode.com/problems/count-good-cyclic-rotations/
 * Language: cpp
 * Runtime: 0 ms | Memory: 103.1 MB
 * Submitted: 2026-09-06T02:41:39 (Submission ID: 2132270109)
 */

class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        int n=nums.size();
        int m=n/2;
        long long sum=0;
        for(int x:nums){
            sum+=x;
        }
        long long temp = 0;
        for (int i = 0; i < m; i++) {
            temp += nums[i];
        }

        int ans = 0;

        for (int i = 0; i < n; i++) {
            if (2 * temp > sum) {
                ans++;
            }

            temp -= nums[i];
            temp += nums[(i + m) % n];
        }

        return ans;

        
    }
};
