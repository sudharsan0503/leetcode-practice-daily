class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i=i+2){
            if(nums[i]==nums[i+1])
              continue;
            else if(nums[i]!=nums[i+1]){
                return nums[i];
            }
        }
     return nums[n-1];   
    }
};