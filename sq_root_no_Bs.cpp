#include <bits/stdc++.h>
using namespace std;

int floorSqrt(int n) {
    if (n == 0 || n == 1) return n;

    int low = 1, high = n, ans = 0;

    while (low <= high) {
        long long mid = low + (high - low) / 2;

        if (mid * mid == n) {
            return mid; // perfect square
        }
        else if (mid * mid < n) {
            ans = mid;       // store possible answer
            low = mid + 1;   // move right
        }
        else {
            high = mid - 1;  // move left
        }
    }

    return ans; // floor value
}

int main() {
    int n = 50;
    cout << floorSqrt(n);
    return 0;
}
