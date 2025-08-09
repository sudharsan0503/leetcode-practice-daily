class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<int,int>mpp;
        for(int i=0;i<sentence.length();i++){
            char c=tolower(sentence[i]);
            mpp[c-'a']++;
        }
        for(int i=0;i<26;i++){
            if(mpp[i]>=1) continue;
            else return false;
        }
        return true;
    }
};