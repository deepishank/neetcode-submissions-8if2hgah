class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int, int> mpp;
        for(int i=0;i<n;i++){
            if(mpp[nums[i]]>0){
                return true;
            }
            mpp[nums[i]]++;

        }
        return false;
    }
};