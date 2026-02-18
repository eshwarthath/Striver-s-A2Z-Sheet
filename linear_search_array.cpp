class Solution {
public:
    int linearSearch(vector<int>& nums, int target) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (nums[i] == target) {
                return i;   // found
            }
        }

        return -1;  // not found after checking all elements
    }
};
