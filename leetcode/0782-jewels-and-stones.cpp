/*
 * Problem: Jewels and Stones (#782)
 * URL: https://leetcode.com/problems/jewels-and-stones/
 * Language: cpp
 * Runtime: 0 ms | Memory: 8.8 MB
 * Submitted: 2026-08-24T14:51:16 (Submission ID: 2118562779)
 */

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char>st;
        for (char c : jewels) {
            st.insert(c);
        }
        int count = 0;
        for (char c : stones) {
            if (st.count(c)) {
                count++;
            }
        }
        return count;
    }
};
