class Solution {
public:
    bool isPalindrome(string s) {
        int l=0;
        int h=s.length()-1;
        while(l<s.length()){
            if(!isalnum(s[l])) l++;
            else if(!isalnum(s[h])) h--;
            else{
                if(tolower(s[l])!=tolower(s[h]))
                  return false;
                l++;
                h--;
            }
        }
        return true;
    }
};