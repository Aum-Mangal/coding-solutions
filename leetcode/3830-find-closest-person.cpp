/*
 * Problem: Find Closest Person (#3830)
 * URL: https://leetcode.com/problems/find-closest-person/
 * Language: cpp
 * Runtime: 0 ms | Memory: 8.5 MB
 * Submitted: 2025-04-18T08:22:05 (Submission ID: 1610286200)
 */

class Solution {
public:
    int findClosest(int x, int y, int z) {
        if(abs(z-x)>abs(z-y)){
            return 2;
        }
        else if(abs(z-y)>abs(z-x)){
            return 1;
        }
        else{
            return 0;
        }
    }
};
