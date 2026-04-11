class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int maxcnt=0;
        int ccnt=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                ccnt++;
                 if (ccnt>maxcnt){
                    maxcnt=ccnt;
                }
            } else {
                ccnt=0;
            }

        }
        return maxcnt;
    }
};