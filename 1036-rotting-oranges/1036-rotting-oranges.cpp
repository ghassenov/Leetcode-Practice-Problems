class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        queue<pair<pair<int,int>,int>>q;
        int vis[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] == 2){
                    q.push({{i,j},0});
                    vis[i][j] = 2;
                }
                else{
                    vis[i][j]=0;
                }
            }
        }
        int time = 0;
        while(!q.empty()){
            int r = q.front().first.first;
            int c = q.front().first.second;
            int t = q.front().second;
            time = max(time,t);
            q.pop();

            vector<int> deltRow = {-1,0,1,0};
            vector<int> deltCol = {0,1,0,-1};
            // check the 4 neighbors of the rotten orange
            for(int i=0;i<4;i++){
                int nRow = r + deltRow[i];
                int nCol = c + deltCol[i];

                // check neighbor validity (a proper rotten orange)
                if(nRow>=0 && nRow<n && nCol>=0 && nCol <m && !vis[nRow][nCol] && grid[nRow][nCol] == 1){
                    vis[nRow][nCol] = 2;
                    q.push({{nRow,nCol},t+1});
                }
            }
        }

        // check if all 1-oranges are rotten
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] == 1 && vis[i][j] != 2) return -1;
            }
        }
        return time;
    }
};