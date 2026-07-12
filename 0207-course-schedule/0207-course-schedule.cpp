class Solution {
public:

    int topo(int n, vector<int>& indegree, vector<vector<int>>& g) {

        queue<int> q;

        for(int i=0;i<n;i++) {
            if(indegree[i]==0)
                q.push(i);
        }

        int cnt=0;

        while(!q.empty()) {

            int cur=q.front();
            q.pop();

            cnt++;

            for(int v:g[cur]) {

                indegree[v]--;

                if(indegree[v]==0)
                    q.push(v);
            }
        }

        return cnt;
    }

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {

        int n=numCourses;

        vector<vector<int>> g(n);
        vector<int> indegree(n,0);

        for(auto &v:prerequisites) {

            int a=v[0];
            int b=v[1];

            g[b].push_back(a);   // b -> a
            indegree[a]++;
        }

        int processed = topo(n, indegree, g);

        return processed==n;
    }
};