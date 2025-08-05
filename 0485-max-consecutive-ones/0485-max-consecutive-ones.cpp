class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int largest=0;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
            }
            else if(nums[i]==0){
                if(count>largest){
                    largest=count;
                }
                count=0;
            }
        }
        return count>largest?count:largest;
    }
};