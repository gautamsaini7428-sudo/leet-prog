class Solution {
public:
    const long long M = 1e9 + 7;

    long long findpower(long long a, long long b) {
        long long res = 1;
        a %= M;
        while (b > 0) {
            if (b & 1) res = res * a % M;
            a = a * a % M;
            b >>= 1;
        }
        return res;
    }

    int countGoodArrays(int n, int m, int k) {
        vector<long long> fact(n + 1, 1);
        for (int i = 2; i <= n; i++) {
            fact[i] = fact[i - 1] * i % M;
        }

        // C(n-1, k) = fact[n-1] / (fact[k] * fact[n-1-k])
        long long ncr = fact[n - 1]
                      * findpower(fact[k], M - 2) % M
                      * findpower(fact[n - 1 - k], M - 2) % M;

        long long result = ncr * m % M;
        result = result * findpower(m - 1, n - k - 1) % M;
        return (int)result;
    }
};