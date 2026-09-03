/*
 * Problem: Max Points on a Line (#149)
 * URL: https://leetcode.com/problems/max-points-on-a-line/
 * Language: cpp
 * Runtime: 17 ms | Memory: 17.4 MB
 * Submitted: 2026-09-04T05:10:04 (Submission ID: 2130300817)
 */

class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int n=points.size();
        int ans=1;
        for(int i=0;i<n;i++){
            vector<int>& p1=points[i];
            unordered_map<double,int> a;
            for(int j=i+1;j<n;j++){
                vector<int>& p2=points[j];
                double slope;
                if(p2[0]==p1[0]){
                    slope=INFINITY;
                }
                else{
                    slope=(double)(p2[1]-p1[1])/(p2[0]-p1[0]);
                }
                a[slope]++;
                ans=max(ans,a[slope]+1);
            }
        }
        return ans;
        
    }
};
