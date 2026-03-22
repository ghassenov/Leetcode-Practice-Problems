class Solution {
private:
    int dfs(int row,int col,vector<vector<int>> &vis, vector<vector<int>> &grid, int &n,int &m){
        if(row < 0 || row >= n || col < 0 || col >= m || grid[row][col] == 0 || vis[row][col] == 1){
            return 0;
        }
        // mark the cell as visited
        vis[row][col] = 1;
        return 1 + dfs(row-1,col,vis,grid,n,m) + dfs(row+1,col,vis,grid,n,m) + dfs(row,col-1,vis,grid,n,m) + dfs(row,col+1,vis,grid,n,m);
    }
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans = 0;
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> vis(n,vector<int>(m,-1));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j] == -1 && grid[i][j] == 1){
                    ans = max(ans,dfs(i,j,vis,grid,n,m));
                }
            }
        }
        return ans;
    }
};