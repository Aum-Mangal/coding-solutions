/*
 * Problem: Sliding Window Maximum (#239)
 * URL: https://leetcode.com/problems/sliding-window-maximum/
 * Language: cpp
 * Runtime: 28 ms | Memory: 139.2 MB
 * Submitted: 2026-09-01T12:20:24 (Submission ID: 2127192044)
 */

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        deque<int> dq;

        for (int i = 0; i < nums.size(); i++) {

            while (!dq.empty() && dq.front() <= i - k) {
                dq.pop_front();
            }

            while (!dq.empty() && nums[dq.back()] <= nums[i]) {
                dq.pop_back();
            }

            dq.push_back(i);

            if (i >= k - 1) {
                ans.push_back(nums[dq.front()]);
            }
        }

        return ans;
    }
};
