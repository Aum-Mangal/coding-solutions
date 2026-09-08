/*
 * Problem: Count Commas in Range II (#4248)
 * URL: https://leetcode.com/problems/count-commas-in-range-ii/
 * Language: cpp
 * Runtime: 0 ms | Memory: 9 MB
 * Submitted: 2026-09-09T04:37:11 (Submission ID: 2135851355)
 */

class Solution {
public:
    long long countCommas(long long n) {
        if(n <= 999) return 0;

        long long totalCommas = 0;
        long long start = 1000;

        while(start <= n){
            totalCommas += n - start + 1;
            start *= 1000;
        }

        return totalCommas;
    }
};
