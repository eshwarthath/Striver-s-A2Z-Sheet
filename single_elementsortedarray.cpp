class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low = 0, high = nums.size() - 1;

        while (low < high) { // edge case, we won't use this(low<=high)
            int mid = (low + high) / 2;

            // make mid even
            if (mid % 2 == 1) mid--;

            if (nums[mid] == nums[mid + 1]) { // same pair so element in right side
                low = mid + 2;
            } else {  // same pair is broken so the element in left side 
                high = mid;
            }
        }

        return nums[low];
    }
};
