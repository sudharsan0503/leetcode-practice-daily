class Solution {
public:
    int gcd(int a,int b){
            if(a==0)
             return b;
            return gcd(b%a,a);
    }

    vector<int> replaceNonCoprimes(vector<int>& nums) {
       vector<int>ans;
       ans.push_back(nums[0]);
       for(int i=1;i<nums.size();i++){
           long long curr=nums[i];
           while(ans.size()>0 && gcd(curr,ans.back())>1){
            long long x=((curr*ans.back())/gcd(curr,ans.back()));
            ans.pop_back();
            curr=x;
           }
           ans.push_back(curr);
       }
       return ans;
    }
};