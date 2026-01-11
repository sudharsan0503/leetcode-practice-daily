class Solution {
public:
    int solve(int ind,vector<int>& nums,vector<int>& dp){
       int n=nums.size();
       if(ind==0)return nums[0];
       if(ind<0) return 0;
       if(dp[ind]!=-1) return dp[ind];
       int pick=nums[ind]+solve(ind-2,nums,dp);
       int notpick=0+solve(ind-1,nums,dp);
       dp[ind]=max(pick,notpick);
       return dp[ind];
    }

    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,-1);
        int x = solve(n-1,nums,dp);
        return x;
    }
};