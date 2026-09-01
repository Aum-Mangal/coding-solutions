/*
 * Problem: Rotate Image (#48)
 * URL: https://leetcode.com/problems/rotate-image/
 * Language: cpp
 * Runtime: 0 ms | Memory: 10 MB
 * Submitted: 2026-09-01T16:01:17 (Submission ID: 2127426292)
 */

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        reverse(matrix.begin(),matrix.end());
        for(int i=0;i<matrix.size();i++){
            for(int j=i+1;j<matrix[i].size();++j){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
    }
};
