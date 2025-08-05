class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int sz=nums.size();
        if(k>sz)       //we should do this if size of array is less than k 
            k=k%sz;    //eg: arr={1,2,3} k=4
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
    }
};