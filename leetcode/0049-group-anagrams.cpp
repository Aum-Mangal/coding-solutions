/*
 * Problem: Group Anagrams (#49)
 * URL: https://leetcode.com/problems/group-anagrams/
 * Language: cpp
 * Runtime: 15 ms | Memory: 24.9 MB
 * Submitted: 2026-03-29T08:37:06 (Submission ID: 1962667159)
 */

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>res;
        for(const auto& s:strs){
            string ss=s;
            sort(ss.begin(),ss.end());
            res[ss].push_back(s);
        }
        vector<vector<string>> ress;
        for(auto& pair:res){
            ress.push_back(pair.second);
        }
        return ress;

    }
};
