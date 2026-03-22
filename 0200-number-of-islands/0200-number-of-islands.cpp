class Solution {

private:
    void dfs(int row,int col,vector<vector<int>> &vis,vector<vector<char>> &grid,int &n,int &m){
        vis[row][col] = 1;

        vector<int> deltRow = {-1,0,1,0};
        vector<int> deltCol = {0,1,0,-1};

        for(int i = 0;i<4;i++){
            int nrow = row + deltRow[i];
            int ncol = col + deltCol[i];

            if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m 
   && grid[nrow][ncol] == '1' && vis[nrow][ncol] == -1){
                dfs(nrow,ncol,vis,grid,n,m);
            }
        }
        return;
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int ans = 0;
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> vis(n,vector<int>(m,-1));
        for(int i =0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j] == -1 && grid[i][j] == '1'){
                    ans++;
                    dfs(i,j,vis,grid,n,m);
                }
            }
        }
        return ans;
    }
};