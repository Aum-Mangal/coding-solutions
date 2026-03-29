/*
 * Problem: Valid Sudoku (#36)
 * URL: https://leetcode.com/problems/valid-sudoku/
 * Language: cpp
 * Runtime: 5 ms | Memory: 24 MB
 * Submitted: 2026-03-29T08:50:52 (Submission ID: 1962676204)
 */

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            unordered_set<char> seen;
            for(int j=0;j<9;j++){
                if(board[i][j]=='.') continue;
                if(seen.count(board[i][j])) return false;
                seen.insert(board[i][j]);
            }
        }
        for(int i=0;i<9;i++){
            unordered_set<char> seen;
            for(int j=0;j<9;j++){
                if(board[j][i]=='.') continue;
                if(seen.count(board[j][i])) return false;
                seen.insert(board[j][i]);
            }
        }
        for (int square = 0; square < 9; square++) {
            unordered_set<char> seen;
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    int row = (square / 3) * 3 + i;
                    int col = (square % 3) * 3 + j;
                    if (board[row][col] == '.') continue;
                    if (seen.count(board[row][col])) return false;
                    seen.insert(board[row][col]);
                }
            }
        }
        return true;

    }
};
