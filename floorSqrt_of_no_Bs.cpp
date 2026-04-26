class Solution {
public:
    int floorSqrt(int n)  {
        if (n == 0 || n == 1) return n;

        long long low = 1, high = n, ans = 0;

        while (low <= high) {
            long long mid = (low + high) / 2;

            if (mid * mid == n) {
                return mid;
            }
            else if (mid * mid < n) {
                ans = mid;   // store possible answer
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return ans;
    }
};
