/*
 * Problem: Top K Frequent Elements (#347)
 * URL: https://leetcode.com/problems/top-k-frequent-elements/
 * Language: cpp
 * Runtime: 7 ms | Memory: 18.4 MB
 * Submitted: 2026-08-14T18:36:07 (Submission ID: 2106962140)
 */

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    map<int, int> freq;

    for(int i : nums) {
        freq[i]++;
    }

    vector<pair<int,int>> v(freq.begin(), freq.end());

    sort(v.begin(), v.end(), [](auto a, auto b) {
        return a.second > b.second;
    });

    vector<int> ans;

    for(int i = 0; i < k; i++) {
        ans.push_back(v[i].first);
    }

    return ans;
}


    
};
