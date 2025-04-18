/*
 * Problem: Remove Duplicates from Sorted Array (#26)
 * URL: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
 * Language: cpp
 * Runtime: 0 ms | Memory: 22.4 MB
 * Submitted: 2025-04-18T06:06:09 (Submission ID: 1610172746)
 */

class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int i=0;
        int n=arr.size();
        for(int j=1;j<n;j++){
            if(arr[i]!=arr[j]){
                
                arr[i+1]=arr[j];
                i++;
                
            }
        }
        return i+1;
    }
};
