class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currents=nums[0];
        int maxs=nums[0];
        for(int i=1;i<nums.size();i++){
            if(currents<0)
            currents=nums[i];
            else currents+=nums[i];
            maxs=max(maxs,currents);
        }
        return maxs;
    }
};
