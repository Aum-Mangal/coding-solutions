/*
 * Problem: Maximum Points You Can Obtain from Cards (#1538)
 * URL: https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/
 * Language: cpp
 * Runtime: 0 ms | Memory: 46.2 MB
 * Submitted: 2026-09-01T03:47:59 (Submission ID: 2126749842)
 */

class Solution {
public:
    int maxScore(vector<int>& c, int k) {
        int ans=0;
        int sum=0;
        int n=c.size();
        for(int i=0;i<n-k;i++){
            sum+=c[i];
        }
        
        int t=accumulate(c.begin(),c.end(),0);
        ans=sum;
        for(int i=n-k;i<n;i++){
            sum+=c[i];
            sum-=c[i-(n-k)];
            ans=min(ans,sum);
        }
        return t-ans;
    }
};
