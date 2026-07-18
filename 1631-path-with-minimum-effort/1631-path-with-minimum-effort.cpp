class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        int n=heights.size();
        int m=heights[0].size();

        int dx[]={0,-1,0,1};
        int dy[]={-1,0,1,0};
        vector<vector<int>>dist(n,vector<int>(m,INT_MAX));

        priority_queue<pair<int,pair<int,int>>>pq;
        pq.push({0,{0,0}});
        dist[0][0]=0;

        while(!pq.empty()){
            int x=pq.top().second.first;
            int y=pq.top().second.second;
            int effort=-pq.top().first;
            if(x==n-1 && y==m-1) return effort;
            pq.pop();
            for(int i=0;i<4;i++){
                int nx=x+dx[i];
                int ny=y+dy[i];
                if(nx<0 || nx>=n || ny<0 || ny>=m) continue;
                int diff=abs(heights[nx][ny]-heights[x][y]);
                int newEffort = max(effort, diff);

                if (newEffort < dist[nx][ny]) {
                    dist[nx][ny] = newEffort;
                    pq.push({-newEffort, {nx, ny}});
                }   
            }
        }
        return 0;
    }
};