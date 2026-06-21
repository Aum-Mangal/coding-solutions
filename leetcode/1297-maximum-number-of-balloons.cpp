/*
 * Problem: Maximum Number of Balloons (#1297)
 * URL: https://leetcode.com/problems/maximum-number-of-balloons/
 * Language: cpp
 * Runtime: 0 ms | Memory: 8.9 MB
 * Submitted: 2026-06-22T04:02:35 (Submission ID: 2041575142)
 */

class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int> freq(128,0);
        for(char c: text){
            freq[c]++;
        }
        return min({
            freq['b'],
            freq['a'],
            freq['l'] / 2,
            freq['o'] / 2,
            freq['n']
        });
    }
};
