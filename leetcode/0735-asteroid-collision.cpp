/*
 * Problem: Asteroid Collision (#735)
 * URL: https://leetcode.com/problems/asteroid-collision/
 * Language: cpp
 * Runtime: 0 ms | Memory: 22.1 MB
 * Submitted: 2026-09-05T09:12:03 (Submission ID: 2131533275)
 */

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& as) {
        stack<int> st;

        for (int i = 0; i < as.size(); i++) {
            int curr = as[i];

            if (curr > 0) {
                st.push(curr);
            }
            else {
                while (!st.empty() && st.top() > 0) {

                    if (st.top() > abs(curr)) {
                        curr = 0;
                        break;
                    }

                    else if (st.top() == abs(curr)) {
                        st.pop();
                        curr = 0;
                        break;
                    }

                    else {
                        st.pop();
                    }
                }

                if (curr != 0) {
                    st.push(curr);
                }
            }
        }

        vector<int> ans;

        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};
