class Solution {
public:
    bool isPalindrome(int x) {
        int revnum=0;
        int dup=x;
        while(x>0){
            int lastdig=x%10;
            if(revnum>(INT_MAX/10))
             return false;
            revnum=(revnum*10)+lastdig;
            x=x/10;
        }
        return dup==revnum;
    }
};