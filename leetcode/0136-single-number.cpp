/*
 * Problem: Single Number (#136)
 * URL: https://leetcode.com/problems/single-number/
 * Language: cpp
 * Runtime: 0 ms | Memory: 20.7 MB
 * Submitted: 2025-05-21T12:17:53 (Submission ID: 1640275184)
 */

class Solution {
public:
    int singleNumber(vector<int>& arr) {
        // sort(arr.begin(),arr.end());
        // int n=arr.size();
        // int i=0;
        // for(int i=0;i<n-2;i+=2){
        //     if(arr[i+1]!=arr[i]){
        //         return arr[i];
        //     }
        // }
        // return  arr[n-1];

        int ans=0;
        for(int num: arr){
            ans^=num;
        }
        return ans;
       
    }
};
