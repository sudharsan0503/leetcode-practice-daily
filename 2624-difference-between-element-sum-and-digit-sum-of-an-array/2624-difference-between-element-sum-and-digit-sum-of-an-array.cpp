class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elesum=0;
        int digsum=0;
        for(int i=0;i<nums.size();i++){
            elesum+=nums[i];
            if(nums[i]<10) 
                digsum+=nums[i];
            else{
               while(nums[i]>=10){
                int ld=nums[i]%10;
                digsum+=ld;
                nums[i]/=10;   
                }
                digsum+=nums[i];
            }
        }
        return abs(elesum-digsum);
    }
};