/*
 * Problem: Longest Palindrome (#409)
 * URL: https://leetcode.com/problems/longest-palindrome/
 * Language: cpp
 * Runtime: 0 ms | Memory: 9.3 MB
 * Submitted: 2026-08-24T15:05:10 (Submission ID: 2118578506)
 */

class Solution {
public:
    int longestPalindrome(string s) {
        if(s.length()==1){
            return 1;
        }
        unordered_map<char, int> a;
        for (auto i : s) {
            a[i]++;
        }
        int count = 0;
        int flag = 0;
        for (auto b : a) {
            if (b.second % 2 == 0) {
                count += b.second;
            } else {
                count += b.second - 1;
                flag = 1;
            }
        }
        if (flag) {
            count++;
        }
        return count;
    }
};
