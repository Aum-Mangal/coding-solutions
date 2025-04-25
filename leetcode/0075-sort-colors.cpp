/*
 * Problem: Sort Colors (#75)
 * URL: https://leetcode.com/problems/sort-colors/
 * Language: cpp
 * Runtime: 0 ms | Memory: 11.7 MB
 * Submitted: 2025-04-25T11:33:18 (Submission ID: 1617530634)
 */

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int low =0;
        int i=0;
        int high = n-1;
        while(i<=high){
            if(nums[i]==0){
                swap(nums[low],nums[i]);
                low++;
                i++;
            }
            else  if(nums[i]==1){
                i++;
            }
            else{
                swap(nums[i],nums[high]);
                high--;
            }
        }
        



    }
};
