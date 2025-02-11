/*
 * Problem: Palindrome Number (#9)
 * URL: https://leetcode.com/problems/palindrome-number/
 * Language: cpp
 * Runtime: 0 ms | Memory: 8.6 MB
 * Submitted: 2025-02-11T13:32:56 (Submission ID: 1539302261)
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
            n=(n*10)+x%10;
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
