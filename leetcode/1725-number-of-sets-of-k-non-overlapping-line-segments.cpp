/*
 * Problem: Number of Sets of K Non-Overlapping Line Segments (#1725)
 * URL: https://leetcode.com/problems/number-of-sets-of-k-non-overlapping-line-segments/
 * Language: cpp
 * Runtime: 0 ms | Memory: 7.8 MB
 * Submitted: 2026-09-16T12:26:10 (Submission ID: 2143632658)
 */

class Solution {
public:
    static const long long MOD = 1000000007LL;

    long long modPow(long long base, long long exp) {
        long long result = 1;

        while (exp > 0) {
            if (exp & 1LL) {
                result = result * base % MOD;
            }

            base = base * base % MOD;

            exp >>= 1LL;
        }

        return result;
    }

    int numberOfSets(int n, int k) {
        long long N = n + k - 1;
        long long R = 2LL * k;

        R = min(R, N - R);

        long long numerator = 1;
        long long denominator = 1;

        for (long long i = 1; i <= R; ++i) {
            numerator = numerator * (N - R + i) % MOD;

            denominator = denominator * i % MOD;
        }

        long long inverseDenominator = modPow(denominator, MOD - 2);

        return static_cast<int>(numerator * inverseDenominator % MOD);
    }
};
