/*
 * Problem: Maximum Number of Non-overlapping Palindrome Substrings (#2559)
 * URL: https://leetcode.com/problems/maximum-number-of-non-overlapping-palindrome-substrings/
 * Language: cpp
 * Runtime: 0 ms | Memory: 8.9 MB
 * Submitted: 2026-09-15T04:54:02 (Submission ID: 2142198480)
 */

class Solution {
public:
    bool isPalindrome(string &s, int i, int j) {
        while (i < j) {
            if (s[i] != s[j])
                return false;

            i++;
            j--;
        }

        return true;
    }

    int maxPalindromes(string s, int k) {
        int n = s.size();

        int count = 0;
        int lastEnd = -1;

        for (int j = k - 1; j < n; j++) {

            for (int i = lastEnd + 1; i <= j - k + 1; i++) {

                if (isPalindrome(s, i, j)) {

                    count++;
                    lastEnd = j;

                    break;
                }
            }
        }

        return count;
    }
};
