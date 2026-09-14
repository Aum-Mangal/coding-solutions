/*
 * Problem: Majority Element II (#229)
 * URL: https://leetcode.com/problems/majority-element-ii/
 * Language: cpp
 * Runtime: 3 ms | Memory: 26.3 MB
 * Submitted: 2026-09-14T17:06:47 (Submission ID: 2141808757)
 */

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> a;

        for(int x : nums) {
            a[x]++;
        }

        vector<int> ans;

        for(auto x : a) {
            if(x.second > nums.size() / 3) {
                ans.push_back(x.first);
            }
        }

        return ans;
    }
};
