/*
 * Problem: Valid Palindrome (#125)
 * URL: https://leetcode.com/problems/valid-palindrome/
 * Language: cpp
 * Runtime: 0 ms | Memory: 10.3 MB
 * Submitted: 2026-03-28T04:48:04 (Submission ID: 1961424076)
 */

class Solution {
public:
    bool isPalindrome(string s) {
        string ss="";
        for(char c: s){
            if(isalpha(c) || isdigit(c)){
                ss+=tolower(c);
            }
        }
        
        int left=0;
        int right=ss.size()-1;
        while(left<right){
            if(ss[left]!=ss[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
