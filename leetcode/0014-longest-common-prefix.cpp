/*
 * Problem: Longest Common Prefix (#14)
 * URL: https://leetcode.com/problems/longest-common-prefix/
 * Language: cpp
 * Runtime: 0 ms | Memory: 11.8 MB
 * Submitted: 2025-09-11T17:45:48 (Submission ID: 1767466173)
 */

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string a=strs[0];
        for(int i=1;i<strs.size();i++){
            int j=0;
            while(j<strs[i].size() && j<a.size() && a[j]==strs[i][j]){
                j++;
            }
            a=a.substr(0,j);
            if(a.empty()){
                return "";
            }
        }
        return a;
        
    }
};
