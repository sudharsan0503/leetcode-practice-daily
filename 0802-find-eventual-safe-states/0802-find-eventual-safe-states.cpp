class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();

        vector<vector<int>> rev(n);
        vector<int> outdegree(n);

        for(int i=0;i<n;i++){
            outdegree[i]=graph[i].size();
        }
        for (int u = 0; u < n; u++) {
            for (int v : graph[u])
                rev[v].push_back(u);
        }

        queue<int> q;

        // Terminal nodes are safe
        for (int i = 0; i < n; i++) {
            if (outdegree[i] == 0) {
                q.push(i);
            }
        }

        vector<int> safe;

        while (!q.empty()) {
            int cur = q.front();
            q.pop();

            safe.push_back(cur);

            for (int parent : rev[cur]) {
                outdegree[parent]--;

                if (outdegree[parent] == 0) {
                    q.push(parent);
                }
            }
        }

        sort(safe.begin(), safe.end());
        return safe;
    }
};