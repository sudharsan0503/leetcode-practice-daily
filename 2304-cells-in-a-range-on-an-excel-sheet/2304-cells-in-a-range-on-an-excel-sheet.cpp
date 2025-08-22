class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string>res;
        char c1=s[0],c2=s[1],c3=s[3],c4=s[4];
        while(c1<=c3){
            char t=c2;
            while(t<=c4){
                string cell="";
                cell+=c1;
                cell+=t;
                res.push_back(cell);
                t++;
            }
            c1++;
        }
        return res;
    }
};