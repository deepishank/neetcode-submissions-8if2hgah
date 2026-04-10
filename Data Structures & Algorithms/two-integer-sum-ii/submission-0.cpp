class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int p = 0, q = n - 1;
        
        while (p < q) {
            int sum = numbers[p] + numbers[q];
            if (sum > target) {
                q--;
            } else if (sum < target) {
                p++;
            } else {
                return {p + 1, q + 1}; // Returning 1-based indices
            }
        }
        
        return {}; // Return an empty vector if no pair is found
    }
};

