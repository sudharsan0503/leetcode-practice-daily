class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int maj=n/3;
        vector<int>res;
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
        mpp[nums[i]]++;
        }
        for(auto it:mpp){
            if(it.second>maj){
                res.push_back(it.first);
            }
        }
        return res;
    }
};