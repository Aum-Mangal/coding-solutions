/*
 * Problem: Valid Anagram (#242)
 * URL: https://leetcode.com/problems/valid-anagram/
 * Language: cpp
 * Runtime: 0 ms | Memory: 9.7 MB
 * Submitted: 2025-09-15T18:02:01 (Submission ID: 1771917228)
 */

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        vector<int> freq(26, 0);
        
        for (char c : s) freq[c - 'a']++;
        for (char c : t) freq[c - 'a']--;
        
        for (int x : freq) {
            if (x != 0) return false;
        }
        return true;
    
    }
};
