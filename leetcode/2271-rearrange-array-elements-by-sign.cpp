/*
 * Problem: Rearrange Array Elements by Sign (#2271)
 * URL: https://leetcode.com/problems/rearrange-array-elements-by-sign/
 * Language: cpp
 * Runtime: 8 ms | Memory: 145.1 MB
 * Submitted: 2025-05-23T05:30:14 (Submission ID: 1641843535)
 */

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& arr) {
       vector<int> positives;
       vector<int> negatives;
       vector<int> result;
       for(int i=0;i<arr.size();i++){
        if(arr[i]>=0) positives.push_back(arr[i]);
        else negatives.push_back(arr[i]);
       }
       int i=0;
       int j=0;
       while(i<positives.size() && j<negatives.size()){
        result.push_back(positives[i]);
        i++;
        result.push_back(negatives[j]);
        j++;
       }
       return result;

        
    }
};
