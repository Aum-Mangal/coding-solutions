/*
 * Problem: Rectangle Overlap (#866)
 * URL: https://leetcode.com/problems/rectangle-overlap/
 * Language: cpp
 * Runtime: 0 ms | Memory: 9.8 MB
 * Submitted: 2026-09-14T07:25:12 (Submission ID: 2141316156)
 */

class Solution {
public:
    bool isRectangleOverlap(auto& r1, auto& r2) {
        return r1[0] < r2[2] && r2[0] < r1[2] &&
               r1[1] < r2[3] && r2[1] < r1[3];
    }
};
