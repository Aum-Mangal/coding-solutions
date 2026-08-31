/*
 * Problem: Longest Substring Without Repeating Characters (#3)
 * URL: https://leetcode.com/problems/longest-substring-without-repeating-characters/
 * Language: cpp
 * Runtime: 55 ms | Memory: 19.4 MB
 * Submitted: 2026-08-31T15:10:32 (Submission ID: 2126243079)
 */

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // unordered_set<char> charset;
        // int l=0;
        // int ans=0;
        // int len=s.length();
        // for(int i=0;i<len;i++){
        //     while(charset.find(s[i])!=charset.end()){
        //         charset.erase(s[l]);
        //         l++;
        //     }
        //     charset.insert(s[i]);
        //     ans=max(ans,i-l+1);
        // }
        // return ans;
        int n=s.length();
        unordered_map<char,int> a;
        int maxx=0;
        int left=0;
        for(int i=0;i<n;i++){
            a[s[i]]++;
            while(a[s[i]]>1){
                a[s[left]]--;
                left++;
            }
            maxx=max(maxx,i-left+1);
        }
        return maxx;


    }
};
