class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>answer;
        vector<int>a1;
        for(int i=0;i<nums.size();i++){
            while(nums[i]>0){
                int ld=nums[i]%10;
                a1.push_back(ld);
                nums[i]/=10;
            }
            reverse(a1.begin(),a1.end());
            for(int n:a1){
                answer.push_back(n);
            }
            a1.clear();
        }
        return answer;
    }
};