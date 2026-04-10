class Solution {
public:
    int findMin(vector<int> &nums) {
          int left = 0, right = nums.size() - 1;

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] > nums[right]) {
            // Drop point is to the RIGHT of mid
            // min is in [mid+1, right]
            left = mid + 1;
        } else {
            // mid could be the min, or min is to the LEFT
            // min is in [left, mid]
            right = mid;
        }
    }

    // left == right, pointing at the minimum
    return nums[left];
    }
};
