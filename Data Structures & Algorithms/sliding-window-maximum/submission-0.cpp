class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> result;
        deque<int> dq; // stores indices of nums
        
        for (int i = 0; i < nums.size(); ++i) {
            // Remove indices of elements that are out of the current window
            if (!dq.empty() && dq.front() < i - k + 1) {
                dq.pop_front();
            }
            
            // Remove indices of all elements smaller than nums[i]
            // from the back of the deque
            while (!dq.empty() && nums[dq.back()] < nums[i]) {
                dq.pop_back();
            }
            
            // Add the current element's index at the back of the deque
            dq.push_back(i);
            
            // Add the maximum element of the current window to the result
            if (i >= k - 1) {
                result.push_back(nums[dq.front()]);
            }
        }
        
        return result;
    }
};
