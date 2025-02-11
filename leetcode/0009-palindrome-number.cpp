/*
 * Problem: Palindrome Number (#9)
 * URL: https://leetcode.com/problems/palindrome-number/
 * Language: cpp
 * Runtime: 6 ms | Memory: 8.5 MB
 * Submitted: 2025-02-11T13:32:01 (Submission ID: 1539301330)
 */

class Solution {
public:
    bool isPalindrome(int x) {
        long  n=0;
        int j=x;
        if(x<0){
            return false;
        }
        else{
            while(x!=0){
            long  a=x%10;
            n=(n*10)+a;
            x/=10;
        }
        if(j==n){
            return true;
        }
        else{
            return false;
        }
            
        }
        
    }
};
