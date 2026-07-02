/*
 * Problem: Create Grid With Exactly One Path (#4342)
 * URL: https://leetcode.com/problems/create-grid-with-exactly-one-path/
 * Language: cpp
 * Runtime: 0 ms | Memory: 11.1 MB
 * Submitted: 2026-07-02T18:32:33 (Submission ID: 2053904372)
 */

class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> grid(m, string(n, '#'));
        for (int j = 0; j < n; j++) {
            grid[0][j] = '.';
        }

        for (int i = 0; i < m; i++) {
            grid[i][n - 1] = '.';
        }

        return grid;
    }
};
