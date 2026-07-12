class Solution {
public:
    vector<int>kahn(int n,vector<vector<int>>&g,vector<int>&indegree){
        vector<int>ans;
        queue<int>q;
        for(int i=0;i<n;i++){
            if(indegree[i]==0) q.push(i);
        }
        while(!q.empty()){
            int cur=q.front();
            q.pop();
            ans.push_back(cur);
            for(auto v:g[cur]){
                indegree[v]--;
                if(indegree[v]==0) q.push(v);
            }
        }
        if(ans.size()!=n) return {};
        return ans;
    }

    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        int n=numCourses;
        vector<vector<int>>g;
        vector<int>indegree;
        g.resize(n);
        indegree.assign(n,0);
        for(auto &it:prerequisites){
            int a=it[0];
            int b=it[1];
            g[b].push_back(a);
            indegree[a]++;
        }
        return kahn(n,g,indegree);
    }
};