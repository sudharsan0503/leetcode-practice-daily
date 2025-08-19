class Solution {
public:
    int majorityElement(vector<int>& nums) {
         int sz=nums.size();

         int candidate=0;
         int points=0;

         for(int i=0;i<sz;i++){
            if(points==0)
                candidate=nums[i];
            if(candidate==nums[i])
                points++;
            else
                points--;
         }
        return candidate;
    }
};