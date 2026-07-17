class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int prefix[n];
        for(int i=0;i<n;i++){
            prefix[i]=nums[i];
            if(i>0){
                prefix[i]+=prefix[i-1];
            }
        }

        map<int,int>freq;
        freq[0]=1;
        int count=0;
        for(int j=0;j<n;j++){
           count+=freq[prefix[j]-k];
           freq[prefix[j]]++;
        }
        return count;
    }
};