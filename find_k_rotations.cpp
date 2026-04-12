#include <bits/stdc++.h>
using namespace std;

int findKRotation(vector<int> &nums) {
    int low = 0, high = nums.size() - 1;

    while (low < high) {
        int mid = (low + high) / 2;

        if (nums[mid] > nums[high]) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }

    return low; // index of minimum element = rotations
}

int main() {
    vector<int> nums = {4, 5, 1, 2};
    cout << findKRotation(nums);
}
