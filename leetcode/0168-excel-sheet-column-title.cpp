/*
 * Problem: Excel Sheet Column Title (#168)
 * URL: https://leetcode.com/problems/excel-sheet-column-title/
 * Language: cpp
 * Runtime: 0 ms | Memory: 7.6 MB
 * Submitted: 2026-08-30T14:00:49 (Submission ID: 2125101084)
 */

class Solution {
public:
    string convertToTitle(int n) {
        string ans;
        while(n > 0) {
            n--;
            int c = n % 26;
            n = n / 26;
            ans.push_back(c + 'A');
        }
        reverse(ans.begin(), ans.end());
        return ans;
        
    }
};
