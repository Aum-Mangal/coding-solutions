/*
 * Problem: Valid Anagram (#242)
 * URL: https://leetcode.com/problems/valid-anagram/
 * Language: cpp
 * Runtime: 3 ms | Memory: 9.8 MB
 * Submitted: 2026-08-14T18:01:13 (Submission ID: 2106920561)
 */

class Solution {
public:
    bool isAnagram(string s, string t) {
       map<char,int> s1;
       map<char,int> s2;
       for(char i:s){
            s1[i]++;
       } 
       for(char j:t){
            s2[j]++;
       }
    //    bool flag=true;
    //    for(int i=0;i<min(s.size(),t.size());i++){
    //         if(s1[i].second!=s2[i].second){
    //             flag=false;
    //             break;
    //         }
    //    }
        if(s1==s2){
            return true;
        }
        else{
            return false;
        }
       
       

    }
};
