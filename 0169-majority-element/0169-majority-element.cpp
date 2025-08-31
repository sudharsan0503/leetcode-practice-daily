class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        int maxe=0;
        int majo=nums.size()/2;
        for(auto it:mpp){
            if(it.second>majo){
                maxe=it.first;
                majo=it.second;
            }
        }
       return maxe;
    }
};