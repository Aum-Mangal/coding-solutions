/*
 * Problem: Permutation in String (#567)
 * URL: https://leetcode.com/problems/permutation-in-string/
 * Language: cpp
 * Runtime: 1086 ms | Memory: 216.9 MB
 * Submitted: 2026-08-19T07:19:13 (Submission ID: 2112382612)
 */

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        //sort(s1.begin(),s1.end());
        unordered_map<char,int> aa;
        for(char c: s1){
            aa[c]++;
        }
        for(int i=0;i<s2.length();i++){
            string temp=s2.substr(i,s1.length());
            unordered_map<char,int> check;
            for(char c:temp){
                check[c]++;
            }
            
            if(check==aa){
                return true;
            }
        }
        return false;
    }
};
