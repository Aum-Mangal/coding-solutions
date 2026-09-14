/*
 * Problem: Boats to Save People (#917)
 * URL: https://leetcode.com/problems/boats-to-save-people/
 * Language: cpp
 * Runtime: 21 ms | Memory: 45.9 MB
 * Submitted: 2026-09-14T10:20:21 (Submission ID: 2141444933)
 */

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());

        int p = 0;
        int i = 0;
        int j = people.size() - 1;

        while (i <= j) {
            if (people[i] + people[j] <= limit) {
                i++;
                j--;
            } else {
                j--;
            }

            p++;
        }

        return p;
    }
};
