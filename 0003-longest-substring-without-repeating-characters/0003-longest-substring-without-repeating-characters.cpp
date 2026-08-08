class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int l=0,r=0,maxlen=0;
        int tab[256];
        memset(tab,-1,sizeof(tab));
        while(r<n){
            if(tab[s[r]]!=-1){
                if(tab[s[r]]>=l){
                    l=tab[s[r]]+1;
                }
            }
            int len=r-l+1;
            tab[s[r]]=r;
            maxlen=max(maxlen,len);
            r++;
        }
        return maxlen;
    }
};