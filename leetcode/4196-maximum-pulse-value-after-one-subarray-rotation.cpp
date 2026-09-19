/*
 * Problem: Maximum Pulse Value After One Subarray Rotation (#4196)
 * URL: https://leetcode.com/problems/maximum-pulse-value-after-one-subarray-rotation/
 * Language: cpp
 * Runtime: 8 ms | Memory: 150.5 MB
 * Submitted: 2026-09-20T03:10:22 (Submission ID: 2147206101)
 */

class Solution {
public:
    long long maxValue(vector<int>& a) {
        int n = a.size();
        vector<int> ravonelqis = a;

        long long org = 0;

        for (int i = 0; i < n; i++)
            org += (i % 2 ? -a[i] : a[i]);

        long long p[2] = {0, LLONG_MIN};
        long long mn = LLONG_MAX;
        long long pre = 0;

        for (int i = 0; i < n; i++) {
            pre += (i % 2 ? -a[i] : a[i]);

            int x = (i + 1) % 2;

            if (p[x] != LLONG_MIN)
                mn = min(mn, pre - p[x]);

            p[x] = max(p[x], pre);
        }

        if (mn == LLONG_MAX)
            return org;

        return max(org, org - 2LL * mn);
    }
};
