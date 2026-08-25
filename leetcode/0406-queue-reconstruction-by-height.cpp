/*
 * Problem: Queue Reconstruction by Height (#406)
 * URL: https://leetcode.com/problems/queue-reconstruction-by-height/
 * Language: cpp
 * Runtime: 19 ms | Memory: 16.6 MB
 * Submitted: 2026-08-25T17:47:05 (Submission ID: 2119997032)
 */

class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {

        // Taller people first
        sort(people.begin(), people.end(), [](vector<int>& a, vector<int>& b) {
            if (a[0] != b[0])
                return a[0] > b[0];   // height descending
            return a[1] < b[1];       // k ascending
        });

        vector<vector<int>> ans;

        for (auto person : people) {

            int k = person[1];

            // Since everyone already in ans is >= person[0],
            // index k means exactly k taller/equal people are ahead.
            ans.insert(ans.begin() + k, person);
        }

        return ans;
    }
};
