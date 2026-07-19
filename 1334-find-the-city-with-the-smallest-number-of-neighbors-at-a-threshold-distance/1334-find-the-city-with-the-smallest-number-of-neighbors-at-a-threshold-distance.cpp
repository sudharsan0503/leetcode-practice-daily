class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {

        const int INF = 1e9;

        vector<vector<int>> dist(n, vector<int>(n, INF));

        for(int i = 0; i < n; i++)
            dist[i][i] = 0;

        for(auto &e : edges){
            int u = e[0];
            int v = e[1];
            int wt = e[2];

            dist[u][v] = wt;
            dist[v][u] = wt;
        }

        // Floyd-Warshall
        for(int via = 0; via < n; via++){
            for(int i = 0; i < n; i++){
                for(int j = 0; j < n; j++){
                    dist[i][j] = min(dist[i][j],
                                     dist[i][via] + dist[via][j]);
                }
            }
        }

        vector<int> reachable(n);

        for(int i = 0; i < n; i++){
            int cnt = 0;

            for(int j = 0; j < n; j++){
                if(dist[i][j] <= distanceThreshold)
                    cnt++;
            }

            reachable[i] = cnt;
        }

        int mini = INT_MAX;

        for(int x : reachable)
            mini = min(mini, x);

        int city = -1;

        for(int i = 0; i < n; i++){
            if(reachable[i] == mini)
                city = i;   // keeps the largest index in case of a tie
        }

        return city;
    }
};