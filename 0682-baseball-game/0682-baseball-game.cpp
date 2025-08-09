class Solution {
public:
    int calPoints(vector<string>& operations) {
        int sum=0;
        vector<int>record;
        for(int i=0;i<operations.size();i++){
            string ch=operations[i];
            if(ch=="+"){
                int new_score=record[record.size()-1]+record[record.size()-2];
                sum+=new_score;
                record.push_back(new_score);
            }
            else if(ch=="D"){
                int new_score=2*record.back();
                sum+=new_score;
                record.push_back(new_score);
            }
            else if(ch=="C"){
                 sum-=record.back();
                 record.pop_back();
            }
            else{
                int x=stoi(ch);
                record.push_back(x);
                sum+=x;
            }
        }
        return sum;
    }
};