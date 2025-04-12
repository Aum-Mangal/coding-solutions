/*
 * Problem: Binary Search (#792)
 * URL: https://leetcode.com/problems/binary-search/
 * Language: cpp
 * Runtime: 0 ms | Memory: 31.4 MB
 * Submitted: 2025-04-13T04:34:58 (Submission ID: 1605248187)
 */

class Solution {
public:
    int search(vector<int>& nums, int target) {
        auto it = find(nums.begin(),nums.end(),target);
        if(it!=nums.end()){
            int index=it-nums.begin();
            return index;
        }
        else{
            return -1;
        }
    }
};
