/*
 * Problem: Reverse Words in a String (#151)
 * URL: https://leetcode.com/problems/reverse-words-in-a-string/
 * Language: cpp
 * Runtime: 0 ms | Memory: 10 MB
 * Submitted: 2025-09-14T08:45:40 (Submission ID: 1770315504)
 */

class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        int i = s.size() - 1;

        while (i >= 0) {
            while (i >= 0 && s[i] == ' ') i--;

            if (i < 0) break;

            int j = i;
            while (j >= 0 && s[j] != ' ') j--;

            if (!ans.empty()) ans += " ";
            ans += s.substr(j + 1, i - j);

            i = j - 1;
        }

        return ans;  
    }
};
