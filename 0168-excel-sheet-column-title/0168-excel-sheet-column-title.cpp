class Solution {
public:
    string convertToTitle(int columnNumber) {
        string res="";
        while(columnNumber>0){
             int res1=(columnNumber-1)%26;
             char c='A'+res1;
             res+=c;
             columnNumber=(columnNumber-1)/26;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};