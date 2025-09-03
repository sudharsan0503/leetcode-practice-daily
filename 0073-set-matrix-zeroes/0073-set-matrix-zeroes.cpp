class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>>store;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    vector<int>num={i,j};
                    store.push_back(num);
                }
            }
        }
        for(int i=0;i<store.size();i++){
             int x=store[i][0];
             int y=store[i][1];
             for(int j=0;j<matrix.size();j++){
                for(int k=0;k<matrix[0].size();k++){
                    if(j==x||k==y){
                        matrix[j][k]=0;
                    }
                }
             }
        }
    }
};