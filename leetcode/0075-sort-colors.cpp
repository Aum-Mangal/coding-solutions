/*
 * Problem: Sort Colors (#75)
 * URL: https://leetcode.com/problems/sort-colors/
 * Language: cpp
 * Runtime: 1 ms | Memory: 11.5 MB
 * Submitted: 2025-04-25T11:32:17 (Submission ID: 1617530029)
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
        for(int i=0;i<n;i++){
            cout<<nums[i];
        }



    }
};
