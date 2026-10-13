/*
 * Problem: Word Search (#79)
 * URL: https://leetcode.com/problems/word-search/
 * Language: cpp
 * Runtime: 186 ms | Memory: 10.5 MB
 * Submitted: 2026-10-13T13:13:33 (Submission ID: 2171192265)
 */

class Solution {
public:
    int rows, cols;

    bool exist(vector<vector<char>>& board, string word) {
        rows = board.size();
        cols = board[0].size();

        if (word.size() > rows * cols)
            return false;

        for (int r = 0; r < rows; r++) {
            for (int c = 0; c < cols; c++) {
                if (dfs(board, word, r, c, 0))
                    return true;
            }
        }
        return false;
    }

    bool dfs(vector<vector<char>>& board, const string& word,
             int r, int c, int i) {

        if (i == word.size())
            return true;

        if (r < 0 || c < 0 || r >= rows || c >= cols ||
            board[r][c] != word[i])
            return false;

        char temp = board[r][c];
        board[r][c] = '#';  

        bool found =
            dfs(board, word, r + 1, c, i + 1) ||
            dfs(board, word, r - 1, c, i + 1) ||
            dfs(board, word, r, c + 1, i + 1) ||
            dfs(board, word, r, c - 1, i + 1);

        board[r][c] = temp;  
        return found;
    }
};
