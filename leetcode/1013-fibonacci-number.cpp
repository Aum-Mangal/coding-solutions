/*
 * Problem: Fibonacci Number (#1013)
 * URL: https://leetcode.com/problems/fibonacci-number/
 * Language: cpp
 * Runtime: 6 ms | Memory: 7.7 MB
 * Submitted: 2025-02-15T04:50:03 (Submission ID: 1543492409)
 */

class Solution {
public:
    int fib(int n) {
        if(n<=1) return n;
        return fib(n-1)+fib(n-2);

    }
};
