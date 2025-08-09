class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++){
            string s1=words[i];
            bool flag=true;
            int low=0;
            int high=words[i].length()-1;
            while(low<high){
                if(words[i][low]!=words[i][high])
                   flag=false;
                low++;
                high--;
            }
            if(flag) return s1;
        }
        return "";
    }
};