/*
 * Problem: Count Rotations With Exactly K Equal Adjacent Pairs (#4411)
 * URL: https://leetcode.com/problems/count-rotations-with-exactly-k-equal-adjacent-pairs/
 * Language: cpp
 * Runtime: 0 ms | Memory: 9.3 MB
 * Submitted: 2026-09-06T02:34:31 (Submission ID: 2132258802)
 */

class Solution {
public:
    int countRotations(string s, int k) {
        int n= s.size();
        int a=0;
        for(int i=0;i<n;i++){
            if(s[i]==s[(i+1)%n]){
                a++;
            }
        }
        if(k==a-1) return a;
        if(k==a) return n-a;
        return 0;
    }
};
