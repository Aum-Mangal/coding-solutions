/*
 * Problem: Climbing Stairs (#70)
 * URL: https://leetcode.com/problems/climbing-stairs/
 * Language: cpp
 * Runtime: 0 ms | Memory: 7.8 MB
 * Submitted: 2026-06-18T05:08:47 (Submission ID: 2037076816)
 */

class Solution {
public:
// int fib(int n){
//     if(n<=1){
//             return n;
//     }
//     int last=fib(n-1);
//     int slast=fib(n-2);
//     return slast+last;
// }
// int climbStairs(int n) {
//     //cout<<fib(n)<<endl;  
//     return fib(n+1);  

// }
    int climbStairs(int n){
        if(n<=2) return n;

        int s=1,ss=2;

        for(int i=3; i<=n;i++){
            int sss=s+ss;
            s=ss;
            ss=sss;
        }
        return ss;
    }

};
