class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(string word:words){
            bool flag=true;
            int low=0;
            int high=word.length()-1;
            while(low<high){
                if(word[low]!=word[high])
                   flag=false;
                low++;
                high--;
            }
            if(flag) return word;
        }
        return "";
    }
};