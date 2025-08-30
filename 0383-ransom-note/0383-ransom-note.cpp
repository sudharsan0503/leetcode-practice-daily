class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<int,int>mpp;
        for(int i=0;i<ransomNote.length();i++){
            mpp[ransomNote[i]-'a']++;
        }
        for(int i=0;i<magazine.length();i++){
            if(mpp[magazine[i]-'a']!=0){
                mpp[magazine[i]-'a']--;
            }
        }
        for(int i=0;i<26;i++){
            for(auto it:mpp){
                if(it.second!=0)
                 return false;
            }
        }
        return true;
    }
};