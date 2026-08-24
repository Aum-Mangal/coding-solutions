/*
 * Problem: Longest Palindrome (#409)
 * URL: https://leetcode.com/problems/longest-palindrome/
 * Language: cpp
 * Runtime: 2 ms | Memory: 9.2 MB
 * Submitted: 2026-08-24T15:03:01 (Submission ID: 2118576016)
 */

class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> a;
        for(auto i:s){
            a[i]++;
        }
        int count=0;
        int flag=0;
        for(auto b:a){
            if(b.second%2 ==0 ){
                count+=b.second;
            }
            else{
                count += b.second - 1;
                flag=1;
            }
        }
        if(flag){
            count++;
        }
        return count;

        
    }
};
