class Solution {
public:
    vector<int> generaterow(int n){
        vector<int>row;
        long long ans=1;
        row.push_back(ans);
        for(int c=1;c<n;c++){
           ans=ans*(n-c);
           ans=ans/c;
           row.push_back(ans);
        }
        return row;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i=1;i<=numRows;i++){
            ans.push_back(generaterow(i));
        }
        return ans;
    }
};