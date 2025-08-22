class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string>res;

        int pos=s.find(":");

        string left=s.substr(0,pos);
        string right=s.substr(pos+1);

        char ch1=left[0];
        char ch2=right[0];

        int start=stoi(left.substr(1));
        int end=stoi(right.substr(1));

        for(char c=ch1;c<=ch2;c++){
            for(int i=start;i<=end;i++){
            string word=string(1,static_cast<char>(c))+to_string(i);
            res.push_back(word);
           }
        }
     return res;
    }
};