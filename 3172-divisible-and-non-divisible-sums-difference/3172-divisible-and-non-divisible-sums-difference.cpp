class Solution {
public:
    int differenceOfSums(int n, int m) {
        int total=((n*(n+1))/2);
        int num2=0;
        vector<int>nums;
        for(int i=1;i<=n;i++){
           nums.push_back(i);
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]%m==0){
                num2+=nums[i];
            }
        }
        int num1=total-num2;
        return num1-num2;
    }
};