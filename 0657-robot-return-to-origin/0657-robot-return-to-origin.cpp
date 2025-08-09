class Solution {
public:
    bool judgeCircle(string moves) {
        int s=0,e=0;
        for(char c:moves){
            if(c=='L') s--;
            else if(c=='R') s++;
            else if(c=='U')e++;
            else e--;
        }
        return (s==0&&e==0)?true:false;
    }
};