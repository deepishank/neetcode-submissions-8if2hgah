class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int k=0; // keep the track of new unique  element .
        for(int i=0;i<n;i++){
            if(nums[i]!=val){
                nums[k]=nums[i];
                k++;   /// increase the count of new element.
            }
        }
        return k;
    }

};