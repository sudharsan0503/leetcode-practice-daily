class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++){
            string s1=words[i];
            string temp="";
            int l=0;
            int j=words[i].length()-1;
            while(l<=j){
                temp+=words[i][j];
                j--;
            }
            if(s1==temp) return s1;
        }
        return "";
    }
};