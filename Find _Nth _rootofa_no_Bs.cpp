class Solution {
public:

    long long power(long long base, int exp, int limit) {
        long long result = 1;
        for (int i = 0; i < exp; i++) {
            result *= base;
            if (result > limit) return result; // stop early (avoid overflow)
        }
        return result;
    }

    int NthRoot(int N, int M) {
        int low = 1, high = M;

        while (low <= high) {
            int mid = (low + high) / 2;

            long long val = power(mid, N, M);

            if (val == M) return mid;
            else if (val < M) low = mid + 1;
            else high = mid - 1;
        }

        return -1;
    }
};
