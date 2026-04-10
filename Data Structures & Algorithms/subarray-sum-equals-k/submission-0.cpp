class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
         unordered_map<int, int> prefixCount;
    prefixCount[0] = 1;   // empty subarray before index 0

    int prefix = 0, count = 0;

    for (int n : nums) {
        prefix += n;

        // How many times has (prefix - k) appeared before?
        // Each occurrence = one valid subarray ending here
        count += prefixCount[prefix - k];

        prefixCount[prefix]++;
    }

    return count;
    }
};