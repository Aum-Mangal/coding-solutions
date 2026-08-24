/*
 * Problem: Transpose Matrix (#898)
 * URL: https://leetcode.com/problems/transpose-matrix/
 * Language: cpp
 * Runtime: 0 ms | Memory: 15.1 MB
 * Submitted: 2026-08-24T15:43:07 (Submission ID: 2118622541)
 */

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m= matrix.size();
        int n=matrix[0].size();
        vector<vector<int>> ans(n,vector<int>(m));

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ans[i][j]=matrix[j][i];
            }
        }
        return ans;
        
    }
};
