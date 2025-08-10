class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if (nums.empty()) return {-1,-1};
        int start=-1;int end=-1;
        int low=0;int high=nums.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(target>nums[mid]){
                low=mid+1;
            }
            else if(target<nums[mid]){
                high=mid-1;
            }
            else{
                start=mid;
                end=mid;
                while(start>0 && nums[start-1]==target){
                    start--;
                }
                while(end<nums.size()-1 && nums[end+1]==target){
                    end++;
                }
                break;
            }
        }
        return {start,end};
    }
};