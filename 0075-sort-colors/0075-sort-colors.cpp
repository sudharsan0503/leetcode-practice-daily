class Solution {
public:
    void sortColors(vector<int>& nums) {
      map<int,int>mpp;
      for(int i=0;i<nums.size();i++){
        mpp[nums[i]]++;
      }
      int base=0;
      for(auto it:mpp){
        int i=it.second;
        while(i>0){
        nums[base++]=it.first;
        i--;
        }
      }
    }
};