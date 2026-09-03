/*
 * Problem: Rotating the Box (#1972)
 * URL: https://leetcode.com/problems/rotating-the-box/
 * Language: cpp
 * Runtime: 4 ms | Memory: 56.7 MB
 * Submitted: 2026-09-03T14:22:22 (Submission ID: 2129701810)
 */

class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {
          int m = box.size();
    int n = box[0].size();

    // Gravity
    for (int i = 0; i < m; i++) {
        int pos = n - 1;

        for (int j = n - 1; j >= 0; j--) {
            if (box[i][j] == '*') {
                pos = j - 1;
            }
            else if (box[i][j] == '#') {
                box[i][j] = '.';
                box[i][pos] = '#';
                pos--;
            }
        }
    }

    vector<vector<char>> ans(n, vector<char>(m));

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            ans[j][m - 1 - i] = box[i][j];
        }
    }

    return ans;
    }
};
