/*
 * Problem: Find First and Last Position of Element in Sorted Array (#34)
 * URL: https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
 * Language: cpp
 * Runtime: 0 ms | Memory: 17.5 MB
 * Submitted: 2025-12-18T13:17:34 (Submission ID: 1858935367)
 */

class Solution {
public:

    int first(vector<int>& nums,int target){
        int low=0;
        int high=nums.size()-1;
        int first=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                first=mid;
                high=mid-1;
            }
            else if (nums[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return first;
    }
    int last(vector<int>& nums,int target){
        int low=0;
        int high=nums.size()-1;
        int last=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                last=mid;
                low=mid+1;
            }
            else if (nums[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return last;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        return{first(nums,target),last(nums,target)};
    }
};
