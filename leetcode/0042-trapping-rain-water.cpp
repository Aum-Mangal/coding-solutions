/*
 * Problem: Trapping Rain Water (#42)
 * URL: https://leetcode.com/problems/trapping-rain-water/
 * Language: cpp
 * Runtime: 0 ms | Memory: 25.8 MB
 * Submitted: 2026-03-28T09:00:21 (Submission ID: 1961590134)
 */

class Solution {
public:
    int trap(vector<int>& height) {
    int left = 0, right = height.size() - 1;
        int leftmax = 0, rightmax = 0;
        int water = 0;

        while (left < right) {
            if (height[left] < height[right]) {
                if (height[left] >= leftmax) {
                    leftmax = height[left];
                } else {
                    water += leftmax - height[left];
                }
                left++;
            } else {
                if (height[right] >= rightmax) {
                    rightmax = height[right];
                } else {
                    water += rightmax - height[right];
                }
                right--;
            }
        }
        return water;
    }
};
