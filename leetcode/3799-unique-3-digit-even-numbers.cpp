/*
 * Problem: Unique 3-Digit Even Numbers (#3799)
 * URL: https://leetcode.com/problems/unique-3-digit-even-numbers/
 * Language: cpp
 * Runtime: 0 ms | Memory: 28.7 MB
 * Submitted: 2026-09-11T13:00:31 (Submission ID: 2138556539)
 */

class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int freq[10] = {};

        for (int digit : digits) {
            freq[digit]++;
        }

        int answer = 0;

        for (int first = 1; first <= 9; first++) {
            for (int second = 0; second <= 9; second++) {
                for (int third = 0; third <= 8; third += 2) {
                    if (freq[first] == 0 || freq[second] == 0 || freq[third] == 0) {
                        continue;
                    }

                    if (first == second && second == third && freq[first] < 3) {
                        continue;
                    }

                    if (first == second && freq[first] < 2) {
                        continue;
                    }

                    if (first == third && freq[first] < 2) {
                        continue;
                    }

                    if (second == third && freq[second] < 2) {
                        continue;
                    }

                    answer++;
                }
            }
        }

        return answer;
    }
};
