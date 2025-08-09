class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++){
            string s1=words[i];
            string rev=s1;;
            reverse(rev.begin(),rev.end());
            if(rev==s1) return s1;
        }
        return "";
    }
};