class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=1;
        int new_elem=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=new_elem){
                new_elem=nums[i];
                nums[k++]=new_elem;
            }
        }
        return k;
    }
};