class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
        int t1=0;
        for(int i=0;i<t;i++){
            num++;
            t1=i;
        }
        return num+t1+1;
    }
};