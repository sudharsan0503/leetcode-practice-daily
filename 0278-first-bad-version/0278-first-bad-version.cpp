// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long low=0;
        long long high=n-1;
        long long ans=n;
        while(low<=high){
            long long mid=low+((high-low)/2);
            if(isBadVersion(mid)) 
            {   ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};