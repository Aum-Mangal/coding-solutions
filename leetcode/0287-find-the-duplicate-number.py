"""
Problem: Find the Duplicate Number (#287)
URL: https://leetcode.com/problems/find-the-duplicate-number/
Language: python3
Runtime: 87 ms | Memory: 33.5 MB
Submitted: 2026-09-15T08:47:29 (Submission ID: 2142401289)
"""

class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        nums.sort()
        for i in range(len(nums)-1):
            if nums[i]==nums[i+1]:
                return nums[i]
        return -1
