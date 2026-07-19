class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
        const long long mod=1e9+7;
        vector<vector<pair<int,int>>>g;
        g.resize(n);
        for(auto it:roads){
            g[it[0]].push_back({it[1],it[2]});
            g[it[1]].push_back({it[0],it[2]});
        }

        priority_queue<pair<long long,int>>pq;
        vector<long long> time(n, LLONG_MAX);
        vector<long long> ways(n, 0);

        time[0] = 0;
        ways[0]=1;
        pq.push({0, 0}); //time,node

        while(!pq.empty()){
            long long currTime = -pq.top().first;
            int node = pq.top().second;
            pq.pop();

            if(currTime > time[node]) continue;

            for(auto v : g[node]){
                int adjNode = v.first;
                int edgeTime = v.second;
                if(time[adjNode] > currTime + edgeTime){
                    time[adjNode] = currTime + edgeTime;
                    pq.push({-time[adjNode], adjNode});
                    ways[adjNode]=ways[node];
                //if we found another shorter time, then there will be many ways
                }else if(time[adjNode]==currTime + edgeTime){
                    ways[adjNode] = (ways[adjNode]+ways[node])%mod;
                }
            }
        }
    return ways[n-1]%mod;
    }
};