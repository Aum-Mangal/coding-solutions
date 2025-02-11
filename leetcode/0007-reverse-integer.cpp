/*
 * Problem: Reverse Integer (#7)
 * URL: https://leetcode.com/problems/reverse-integer/
 * Language: cpp
 * Runtime: 0 ms | Memory: 8.4 MB
 * Submitted: 2025-02-11T13:21:37 (Submission ID: 1539291400)
 */

class Solution {
public:
    int reverse(int x) {
        long n=0;
        while(x!=0){
            long a=x%10;
            n=(n*10)+a;
            x/=10;
        }
        return (n < INT_MIN || n > INT_MAX) ? 0 : n;


        
    }
};
