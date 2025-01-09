"""
Problem: Two Sum (#1)
URL: https://leetcode.com/problems/two-sum/
Language: python3
Runtime: 1847 ms | Memory: 18.5 MB
Submitted: 2025-01-09T13:58:35 (Submission ID: 1503014732)
"""

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        for i in range(len(nums)-1):
            for j in range(i+1,len(nums)):
                if nums[i]+nums[j]==target:
                    return [i,j]
        return []
