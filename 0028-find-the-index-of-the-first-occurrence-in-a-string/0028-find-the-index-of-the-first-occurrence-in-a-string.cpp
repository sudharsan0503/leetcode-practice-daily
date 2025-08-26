class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack==needle) return 0;
        int n=needle.length();
        for(int i=0;i<haystack.length();i++){
            string check=haystack.substr(i,n);
            if(check==needle)
                return i;
        }
        return -1;
    }
};