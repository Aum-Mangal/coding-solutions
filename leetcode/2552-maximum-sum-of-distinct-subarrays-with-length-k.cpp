/*
 * Problem: Maximum Sum of Distinct Subarrays With Length K (#2552)
 * URL: https://leetcode.com/problems/maximum-sum-of-distinct-subarrays-with-length-k/
 * Language: cpp
 * Runtime: 103 ms | Memory: 95.2 MB
 * Submitted: 2026-09-01T03:22:46 (Submission ID: 2126734714)
 */

class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        // int n=nums.size();
        // int maxx=0;
        // int sum=0;
        // for(int i=0;i<k;i++){
        //     sum+=nums[i];
        // }
        // maxx=sum;
        // for(int i=k;i<n;i++){
        //     sum+=nums[i];
        //     sum-=nums[i-k];
        //     maxx=max(sum,maxx);
        // }
        // return maxx;
        long long ans=0,sum=0;
        unordered_map<int,int> a;
        int i=0;
        while(i<k && i<nums.size()){
            a[nums[i]]++;
            sum+=nums[i];
            i++;
        }
        if (a.size()==k) ans=sum;
        while(i<nums.size()){
            a[nums[i]]++;
            a[nums[i-k]]--;
            if(a[nums[i-k]]==0) a.erase(nums[i-k]);
            sum+=nums[i];
            sum-=nums[i-k];
            if(a.size()==k) ans=max(ans,sum);
            i++;
        }
        return ans;
    }
};
