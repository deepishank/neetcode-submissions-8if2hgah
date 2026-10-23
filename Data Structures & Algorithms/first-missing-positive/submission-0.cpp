class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        int i =0;
        while(i < n ){
            int correctidx=nums[i]-1;
            if(nums[i]>=1 && nums[i]<=n  &&nums[i] != nums[correctidx]){
               swap(nums[i], nums[correctidx]);
            } else {
                i++;
            }
        }
        for(int j =0;j<n;j++){
            if(nums[j]!= j+1){
                return j+1;
            }
        }
         return n+1;
    }
};